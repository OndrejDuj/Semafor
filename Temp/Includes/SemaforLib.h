/* Automation Studio generated header file */
/* Do not edit ! */
/* SemaforLib  */

#ifndef _SEMAFORLIB_
#define _SEMAFORLIB_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct CarLightType
{	signed short State;
	plcbit CarWayEna;
	plcbit WalkWayEna;
} CarLightType;

typedef struct WalkLightType
{	signed short state;
	plcbit WalkEna;
} WalkLightType;

typedef struct ColorStatusType
{	signed short RED;
	signed short AMBER;
	signed short GREEN;
} ColorStatusType;

typedef struct CarLight
{
	/* VAR_INPUT (analog) */
	plctime AutoWalkPeriod;
	/* VAR (analog) */
	plctime StateChangeTime;
	struct TON TonWalkingTime;
	struct TON TonStateChange;
	struct CarLightType SemaforCtrl;
	struct TOF TofFlashing;
	struct TON TonFlashing;
	struct ColorStatusType ColorStatus;
	plctime MinRequestTime;
	/* VAR_INPUT (digital) */
	plcbit WalkRequest;
	plcbit CarLightEna;
	/* VAR_OUTPUT (digital) */
	plcbit Red4Car;
	plcbit Amber4Car;
	plcbit Green4Car;
	plcbit CarWayClosed;
	/* VAR (digital) */
	plcbit StateChangeEnable;
} CarLight_typ;

typedef struct WalkLight
{
	/* VAR_INPUT (analog) */
	plctime WalkingTime;
	/* VAR (analog) */
	struct WalkLightType WalkLightCtrl;
	struct ColorStatusType ColorStatus;
	struct TON TonWalkingTime;
	/* VAR_INPUT (digital) */
	plcbit LightEna;
	/* VAR_OUTPUT (digital) */
	plcbit Red4Walk;
	plcbit Green4Walk;
	plcbit WalkClosed;
} WalkLight_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void CarLight(struct CarLight* inst);
_BUR_PUBLIC void WalkLight(struct WalkLight* inst);


#ifdef __cplusplus
};
#endif
#endif /* _SEMAFORLIB_ */

