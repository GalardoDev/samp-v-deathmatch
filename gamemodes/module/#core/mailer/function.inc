
/* Sending mail to player's mail */

protected SendCodeLogin(playerid)
{
	new 
		code[64];

	format(code,sizeof(code), "PLAYERNAME:%s#CONFCODE:%d", VName(playerid), v_playerinfo[playerid][v_password]);
	SendEmail("V - DM // Code za prijavu", "mail@gmail.com" , "V - DM // Code za prijavu", code , true, "default.html");
	return(true);                          // uzeti mail iz baze
}
