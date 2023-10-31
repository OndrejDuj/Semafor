
(* TODO: Add your comment here *)
FUNCTION_BLOCK CarLight
	

		// State machine
		Red4Car := FALSE;
		Amber4Car := FALSE;
		Green4Car := FALSE;	
		CarWayClosed := FALSE;

	
	// Way closing
	IF (SemaforCtrl.State = 4) THEN
		Amber4Car := TRUE;
		StateChangeEnable := TRUE;
		ColorStatus.RED := 7;
		ColorStatus.AMBER := 42;
		ColorStatus.GREEN := 7;
		//Transition
		IF TonStateChange.Q THEN
			SemaforCtrl.State := 1;
			ColorStatus.AMBER := 7;
		END_IF;
	END_IF;
		
	// Way Open
	IF (SemaforCtrl.State = 3) THEN
		Green4Car := TRUE;	
		StateChangeEnable := TRUE;
		ColorStatus.RED := 7;
		ColorStatus.AMBER := 7;
		ColorStatus.GREEN := 215;
		//Transition
		IF TonStateChange.Q OR (TonStateChange.ET > (AutoWalkPeriod - MinRequestTime ) AND WalkRequest) THEN
			SemaforCtrl.State := 4;
			StateChangeTime:= T#5s;
		END_IF; 
	END_IF;	
	
	// Way opening
	IF (SemaforCtrl.State = 2) THEN
		Red4Car := TRUE;
		Amber4Car := TRUE;	
		StateChangeEnable := TRUE;
		ColorStatus.RED := 51;
		ColorStatus.AMBER := 42;
		ColorStatus.GREEN := 7;
		//Transition
		IF TonStateChange.Q THEN
			ColorStatus.AMBER := 7;
			SemaforCtrl.State := 3;
			StateChangeTime:= AutoWalkPeriod;			
		END_IF;
	END_IF;	
	
	// Way Closed
	IF (SemaforCtrl.State = 1) THEN
		Red4Car := TRUE;
		CarWayClosed := TRUE;
		ColorStatus.RED := 51;
		ColorStatus.AMBER := 7;
		ColorStatus.GREEN := 7;
		//Transition
		IF CarLightEna THEN
			ColorStatus.RED := 7;
			SemaforCtrl.State := 2;
			StateChangeTime:= T#3s;
			
		END_IF;
	END_IF;
	
	// Init state Amber flashing
	IF SemaforCtrl.State = 0 THEN
		//startTimerEna
		Amber4Car := TonFlashing.Q;
		StateChangeEnable := TRUE;
		StateChangeTime := T#10s;
		ColorStatus.RED := 7;
		ColorStatus.AMBER := 7;
		ColorStatus.GREEN := 7;
		//Transition
		IF TonStateChange.Q THEN
			SemaforCtrl.State := 1;
		END_IF;
	END_IF;
	// Transition Timer reset
	IF TonStateChange.Q THEN
		StateChangeEnable := FALSE;
	END_IF;
	
	TonStateChange(IN:=StateChangeEnable, PT:= StateChangeTime);
	
	TonFlashing(IN:= NOT TofFlashing.Q, PT:=T#500ms);
	TofFlashing(IN:= NOT TonFlashing.Q, PT:=T#500ms);
		
END_FUNCTION_BLOCK
