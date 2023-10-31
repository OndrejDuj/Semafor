
(* TODO: Add your comment here *)
FUNCTION_BLOCK WalkLight
	
	
	Red4Walk := FALSE;
	Green4Walk := FALSE;
	WalkLightCtrl.WalkEna := FALSE;
	WalkClosed := FALSE;
	
	// init lights off
	IF WalkLightCtrl.state = 0 THEN
		ColorStatus.RED := 0;
		ColorStatus.GREEN := 0;
		IF LightEna THEN
			WalkLightCtrl.state := 1;
		END_IF;
	END_IF;
	
	// Walk closed
	IF WalkLightCtrl.state = 1 THEN
		Red4Walk := TRUE;
		ColorStatus.RED := 51;
		ColorStatus.GREEN := 7;
		IF LightEna THEN
			WalkLightCtrl.state := 2;
		END_IF;
	END_IF;
	
	// Walk open
	IF WalkLightCtrl.state = 2 THEN
		Green4Walk := TRUE;
		WalkLightCtrl.WalkEna := TRUE;
		ColorStatus.RED := 7;
		ColorStatus.GREEN := 215;
		IF TonWalkingTime.Q THEN
			WalkLightCtrl.state := 1;
			WalkClosed := TRUE;
		END_IF;
	END_IF;
		
	
	//Timer	
	TonWalkingTime(IN:=WalkLightCtrl.WalkEna, PT:= WalkingTime);
	WalkClosed := TonWalkingTime.Q;
	
END_FUNCTION_BLOCK
