
//#include    "YSI_Coding\y_hooks"

hook OnPlayerConnect(playerid){
    
    new v_str[128];
	GetPlayerName(playerid, v_playerinfo[playerid][v_name], MAX_PLAYER_NAME);
	mysql_format(database ,v_str, sizeof(v_str), "SELECT * FROM `users` WHERE `v_name` = '%e' LIMIT 1", v_playerinfo[playerid][v_name]);
	mysql_tquery(database, v_str, "PlayerAccountCheck", "i", playerid);

    Bit_Let(first_spawn, playerid);
    return(true);
}

hook OnPlayerSpawn(playerid){

    if(Bit_Get(first_spawn, playerid) == true)
    {
        va_SendClientMessage(playerid, 0xe79effFF, "(( {FFFFFF}V {e79eff}- {FFFFFF}DM {e79eff}>{FFFFFF} Dobrodosli {e79eff}%s {FFFFFF}na "v_header",uzivajte u igri! {e79eff}))" , VName(playerid));
        va_SendClientMessage(playerid, 0xe79effFF, "(( {FFFFFF}V {e79eff}- {FFFFFF}DM {e79eff}>{FFFFFF} Community Owner: '{e79eff}%s{FFFFFF}' {e79eff}))" , v_owner);
        va_SendClientMessage(playerid, 0xe79effFF, "(( {FFFFFF}V {e79eff}- {FFFFFF}DM {e79eff}>{FFFFFF} Community Developer: '{e79eff}%s{FFFFFF}' {e79eff}))" , v_scripter);
        va_SendClientMessage(playerid, 0xe79effFF, "(( {FFFFFF}V {e79eff}- {FFFFFF}DM {e79eff}>{FFFFFF} Community Mapper: '{e79eff}%s{FFFFFF}' {e79eff}))" , v_mapper);
        SendClientMessage(playerid, 0xe79effFF,"(( {FFFFFF}V {e79eff}- {FFFFFF}DM {e79eff}>{FFFFFF} Da bi ste vidjeli svoj stats,kucajte '{e79eff}/stats{FFFFFF}' {e79eff}))");
        
        Bit_Vet(first_spawn, playerid);

    }
    SetPlayerSkin(playerid,v_playerinfo[playerid][v_skin]);
    return(true);
}

hook OnPlayerDisconnect(playerid){

    SavePlayer(playerid);
	if(Bit_Get(joined_arena, playerid) == true) v_arenainfo[which_arena][players_in_arena]--;
    return(true);
}

hook OnPlayerDeath(playerid, killerid, reason){

    v_playerinfo[killerid][v_kills]++;
	v_playerinfo[playerid][v_deaths]++;
	SetPlayerScore(killerid, v_playerinfo[playerid][v_kills]);
	SavePlayer(killerid); 
	SavePlayer(playerid);
    return(true);
}

hook OnGameModeExit(){

    foreach(new i : Player) SavePlayer(i);
	mysql_close(database);
    return(false);
}
