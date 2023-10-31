
TYPE
	CarLightType : 	STRUCT 
		State : INT := 0; (* State : 0 = init, 1 = carWay, 2 = walkWay  *)
		CarWayEna : BOOL := TRUE;
		WalkWayEna : BOOL := FALSE;
	END_STRUCT;
	
	
	WalkLightType : STRUCT
		state : INT := 0; (* State : 0 = init, 1 = WalkClosed, 2 = WalkOpen*)
		WalkEna : BOOL := FALSE; (* *)
	END_STRUCT;
	
	ColorStatusType : STRUCT
		RED : INT:= 0;
		AMBER : INT:= 0;
		GREEN : INT:= 0;
	END_STRUCT;
	
END_TYPE
