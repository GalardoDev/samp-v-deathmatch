
/* Using y_va instead of "classic" formating */

stock va_SendClientMessage(playerid, colour, const fmat[], {Float, _}:...)
{
	new 
		str[145];
	va_format(str, sizeof (str), fmat, va_start<3>);
	return SendClientMessage(playerid, colour, str);
}

stock va_SendClientMessageToAll(colour, const fmat[], va_args<>)
{
	new
		str[145];
	va_format(str, sizeof (str), fmat, va_start<2>);
	return SendClientMessageToAll(colour, str);
}


/* */

/* Getting player's name */

stock VName(playerid) 
{
	new name[MAX_PLAYER_NAME];
	GetPlayerName(playerid, name, sizeof(name));
	return name;
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