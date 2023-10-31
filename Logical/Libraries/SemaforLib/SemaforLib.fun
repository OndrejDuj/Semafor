
{REDUND_ERROR} FUNCTION_BLOCK CarLight (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		WalkRequest : {REDUND_UNREPLICABLE} BOOL := FALSE; (* tlac�tko pro po�adavek na prejit� silnice *)
		AutoWalkPeriod : {REDUND_UNREPLICABLE} TIME := T#60s; (* perioda pro automatick� zapnut� prechodu *)
		CarLightEna : {REDUND_UNREPLICABLE} BOOL := FALSE; (* Start state machine *)
	END_VAR
	VAR_OUTPUT
		Red4Car : {REDUND_UNREPLICABLE} BOOL; (* cerven� na semaforu pro auta *)
		Amber4Car : {REDUND_UNREPLICABLE} BOOL; (* �lut� na semaforu pro auta *)
		Green4Car : {REDUND_UNREPLICABLE} BOOL; (* zelen� na semaforu pro auta *)
		CarWayClosed : {REDUND_UNREPLICABLE} BOOL; (* Signal uzavren� cesty pro auta *)
	END_VAR
	VAR
		StateChangeEnable : {REDUND_UNREPLICABLE} BOOL;
		StateChangeTime : {REDUND_UNREPLICABLE} TIME := T#5s;
		TonWalkingTime : {REDUND_UNREPLICABLE} TON;
		TonStateChange : {REDUND_UNREPLICABLE} TON;
		SemaforCtrl : {REDUND_UNREPLICABLE} CarLightType;
		TofFlashing : TOF;
		TonFlashing : TON;
		ColorStatus : ColorStatusType;
		MinRequestTime : {REDUND_UNREPLICABLE} TIME := T#10s;
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK WalkLight (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		LightEna : {REDUND_UNREPLICABLE} BOOL; (*Start state machine*)
		WalkingTime : {REDUND_UNREPLICABLE} TIME := T#10s; (* cas aktivn� zelen� pro prechod chodce  *)
	END_VAR
	VAR_OUTPUT
		Red4Walk : {REDUND_UNREPLICABLE} BOOL; (* cerven� na semaforu pro chodce *)
		Green4Walk : {REDUND_UNREPLICABLE} BOOL; (* zelen� na semaforu pro chodce *)
		WalkClosed : {REDUND_UNREPLICABLE} BOOL; (* konec state machine *)
	END_VAR
	VAR
		WalkLightCtrl : {REDUND_UNREPLICABLE} WalkLightType;
		ColorStatus : ColorStatusType;
		TonWalkingTime : {REDUND_UNREPLICABLE} TON;
	END_VAR
END_FUNCTION_BLOCK
