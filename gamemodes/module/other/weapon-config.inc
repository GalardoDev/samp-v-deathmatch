
#include    "YSI_Coding\y_hooks"

/* weapon-config */

#if defined _ALS_OnPlayerGiveDamage
	#undef OnPlayerGiveDamage
#else
	#define _ALS_OnPlayerGiveDamage
#endif
#define OnPlayerGiveDamage NULL_OnPlayerGiveDamage
#if defined NULL_OnPlayerGiveDamage
	forward NULL_OnPlayerGiveDamage(playerid, damagedid, Float:amount, weaponid, bodypart);
#endif
#if defined _ALS_OnPlayerTakeDamage
	#undef OnPlayerTakeDamage
#else
	#define _ALS_OnPlayerTakeDamage
#endif
#define OnPlayerTakeDamage NULL_OnPlayerTakeDamage
#if defined NULL_OnPlayerTakeDamage
	forward NULL_OnPlayerTakeDamage(playerid, issuerid, Float:amount, weaponid, bodypart);
#endif

hook OnGameModeInit()
{
    SetDisableSyncBugs(true);

    return(true);
}