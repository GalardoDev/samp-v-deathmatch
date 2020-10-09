
#include    "YSI_Coding\y_hooks"

hook OnGameModeInit(){

	for(new i ; i < MAX_V_ARENAS ; i++)
	{
		v_arenainfo[i][players_in_arena] = 0;
	}
	print(" ");
	printf("vdm_loading >> number of zones (%d)" , MAX_V_ARENAS);


    DisableInteriorEnterExits();

	Create3DTextLabel("{e79eff}(V - DM)\n\
	Verzija moda: {FFFFFF}"v_version"\n\
	{e79eff}Owner: {FFFFFF}Galardo.\n\
	{e79eff}Scripter: {FFFFFF}Galardo.\n\
	{e79eff}Mapper: {FFFFFF}SA:MP Community.\n\
	{e79eff}Since: {FFFFFF}2020", -1 ,1721.7693,-1655.5442,23.5159, 20.0, 0, 0 );
	CreatePickup(18749, 1, 1721.7693,-1655.5442,23.5159+1, 0);
    return(true);
}

hook OnPlayerDeath(playerid,killerid,reason){

	SendDeathMessage(killerid,playerid,reason);
	return(true);
}