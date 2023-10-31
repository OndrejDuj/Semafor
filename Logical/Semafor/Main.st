
PROGRAM _INIT
	(* Insert code here *)
	 
END_PROGRAM

PROGRAM _CYCLIC

	// Walk light 
	WalkLight_Inst0(LightEna := CarLight_Inst0.CarWayClosed, WalkingTime := WalkingTime);
	Red4Walk := WalkLight_Inst0.Red4Walk;
	Green4Walk := WalkLight_Inst0.Green4Walk;
	
	// Car Light
	CarLight_Inst0(CarLightEna:= WalkLight_Inst0.WalkClosed,WalkRequest:= WalkRequest,AutoWalkPeriod := AutoWalkPeriod);
	Red4Car := CarLight_Inst0.Red4Car;
	Amber4Car := CarLight_Inst0.Amber4Car;
	Green4Car := CarLight_Inst0.Green4Car;
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM

