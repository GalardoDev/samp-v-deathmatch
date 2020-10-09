
/* community information */

#define	v_scripter			   	"Galardo420"
#define v_owner 			    "Galardo420"
#define v_mapper		   "SA:MP Community"

#define v_lang 					   "Balkan"
#define v_version 				 "vdm beta"
#define v_lastup 			   "31/08/2020"

#define v_header   "{e79eff}V - {FFFFFF}DM"


/* message types & shortcut */

#define SendErrorMessage(%0,%1) 	SCMF(%0, 0x848ce3FF, "whoops? {F9F9F9}>{848ce3}> {FFFFFF}"%1)
#define SendInfoMessage(%0,%1) 		SCMF(%0, 0xe79effFF, "V-DM // {F9F9F9}"%1)
#define SendUsageMessage(%0,%1) 	SCMF(%0, 0xbd1b02FF, "(( usage )) {FFFFFF}"%1)

#define protected%0(%1) 		    forward%0(%1); public%0(%1)

/* config */

#define IN_LOCAL    true
#define USE_ACTORS  true
#define USE_MAPS    true

/* max */

const MAX_LOGIN_ATTEMPS = (3);
const MAX_V_GROUPS      = (3);
const MAX_V_ARENAS      = (3);