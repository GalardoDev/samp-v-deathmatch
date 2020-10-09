
/* all functions */

#define protected%0(%1) 		    forward%0(%1); public%0(%1) // -> shortcut

protected PlayerAccountCheck(playerid){

	new rows;
	cache_get_row_count(rows);
	if( rows > 0 )
	{
		cache_get_value(0, "v_password" , v_playerinfo[playerid][v_password], 65);
		Dialog_Show(playerid, v_login, DIALOG_STYLE_PASSWORD, v_header , "{e79eff}> {FFFFFF}Upisite vasu lozinku kako bi se ulogovali.\n\
		{e79eff}> {FFFFFF}Imate {e79eff}(30) {FFFFFF}sekundi da upisete lozinku.\n\
		{e79eff}> {FFFFFF}Imate {e79eff}(3) {FFFFFF}pokusaja ili kick." , "Nastavi" , "Odustani" );
	}
	else{
		
		Dialog_Show(playerid, v_register, DIALOG_STYLE_INPUT, v_header , "{e79eff}* PAZLJIVO {FFFFFF}PROCITAJTE\n\n\
		{e79eff}> {FFFFFF}Dobrodosli na "v_header" server.\n\
		{e79eff}> {FFFFFF}Kako bi ste imali mogucnost igrati na serveru,morate se registrovati.\n\
		{e79eff}> {FFFFFF}U prazno polje ispod unesite {e79eff}e-mail {FFFFFF}koji cete koristiti.\n\
		{e79eff}> {FFFFFF}Na {e79eff}e-mail {FFFFFF}ce vam stici {e79eff}code {FFFFFF}kojeg cete koristiti,\n\
		{e79eff}> {FFFFFF}Za svako sljedece prijavljivanje na {e79eff}V {FFFFFF}- DM server.", "Nastavi", "Odustani");
	}
	return(true);
}

protected LoadAcc(playerid)
{
	new rows;
	cache_get_row_count(rows);
	if(!rows) return (false);
	else 
	{
		cache_get_value_int(0, "ID", v_playerinfo[playerid][ID]);
		cache_get_value_int(0, "v_kills", v_playerinfo[playerid][v_kills]);
		cache_get_value_int(0, "v_deaths",v_playerinfo[playerid][v_deaths]);
		cache_get_value_int(0, "v_skin", v_playerinfo[playerid][v_skin]);

		SetSpawnInfo(playerid, 0, v_playerinfo[playerid][v_skin], 1728.8882,-1667.8740,22.6094,44.5113, 0, 0, 0, 0, 0, 0);
		SpawnPlayer(playerid);
	}
	return(true);
}

stock SCMF(playerid, colour, const fmat[], {Float, _}:...)
{
	new str[145];
	va_format(str, sizeof (str), fmat, va_start<3>);
	return SendClientMessage(playerid, colour, str);
}

/* Getting player's name */

/*stock VName(playerid) 
{
	new name[MAX_PLAYER_NAME];
	GetPlayerName(playerid, name, sizeof(name));
	return name;
}*/

forward [MAX_PLAYER_NAME + 1]VName(playerid);
stock VName(playerid)
{
	#assert MAX_PLAYER_NAME + 1 == 25
	#emit PUSH.C 25
	#emit PUSH.S 16
	#emit PUSH.S playerid
	#emit PUSH.C 12
	#emit SYSREQ.C GetPlayerName
	#emit STACK 16
	#emit RETN
}


/* Saving player's infomation */

stock SavePlayer(playerid) 
{
	new DB_Query[256];
	mysql_format(database, DB_Query, sizeof(DB_Query), "UPDATE `users` SET `v_kills` = '%d' , `v_deaths` = '%d' , `v_skin` = '%d'  WHERE `ID` = '%d' LIMIT 1", 
	v_playerinfo[playerid][v_kills], v_playerinfo[playerid][v_deaths], v_playerinfo[playerid][v_skin] , v_playerinfo[playerid][ID]);
	mysql_tquery(database, DB_Query);
	return (true);
}