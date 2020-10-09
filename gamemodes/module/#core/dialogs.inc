
/* All dialogs used on server */

// skin change

Dialog:v_changeskin(playerid, response, listitem, inputtext[]){

	new set_skin;
	set_skin = strval(inputtext);

	if(set_skin < 1 || set_skin > 299) return SendErrorMessage(playerid,"Pogresan ID skina!");
	SetPlayerSkin(playerid,set_skin);
	v_playerinfo[playerid][v_skin] = set_skin;
	SavePlayer(playerid);
	return(true);
}

// showing arenas

Dialog:v_showvdms(playerid, response, listitem, inputtext[]){

	new id = strval(inputtext) - 1;
	if(strval(inputtext) < 1 || strval(inputtext) > MAX_V_ARENAS) return SendErrorMessage(playerid, "Arene od 1 do %d.", MAX_V_ARENAS);
	SetPlayerPos(playerid , v_arenainfo[id][v_arena_posx] , v_arenainfo[id][v_arena_posy] , v_arenainfo[id][v_arena_posz]);
	v_arenainfo[id][players_in_arena]++;
	Bit_Let(joined_arena, playerid);
	which_arena = id;
	return(true);
}

// showing stats

Dialog:v_vastats(playerid, response, listitem, inputtext[]){

	switch(listitem){	

		case 0: { Dialog_Show(playerid, v_changename, DIALOG_STYLE_INPUT, v_header , "{e79eff} > {FFFFFF}Unesite {e79eff}ID {FFFFFF}igraca i {e79eff}ime {FFFFFF}novo za igraca" , "Potvrdi" , "Odustani"); }
		case 1: { Dialog_Show(playerid, v_changepassword, DIALOG_STYLE_INPUT, v_header , "{e79eff} > {FFFFFF}Unesite {e79eff}ID {FFFFFF}igraca i {e79eff}sifru {FFFFFF}novu za igraca" , "Potvrdi" , "Odustani"); }
		case 2: { Dialog_Show(playerid, v_setkills, DIALOG_STYLE_INPUT, v_header , "{e79eff} > {FFFFFF}Unesite {e79eff}ID {FFFFFF}igraca i broj {e79eff}killova {FFFFFF}za igraca" , "Potvrdi" , "Odustani"); }
		case 3: { Dialog_Show(playerid, v_setdeaths, DIALOG_STYLE_INPUT, v_header , "{e79eff} > {FFFFFF}Unesite {e79eff}ID {FFFFFF}igraca i broj {e79eff}smrti {FFFFFF}za igraca" , "Potvrdi" , "Odustani"); } } 

	return(true);
}

Dialog:v_register(playerid, response, listitem, inputtext[])
{	
	new mailstring = strfind( inputtext, "@gmail", true), dotstring = strfind( inputtext, ".", true );
	if(!response)
	{
		SendInfoMessage(playerid,"Odbili ste da se registrujete na server,te ste kickovani!");
		defer KickPlayer(playerid);
	}
	else if(mailstring == -1 || dotstring == -1)
	{
		SendErrorMessage(playerid,"Lozinka koju ste unijeli moze biti netacna!");
		Dialog_Show(playerid, v_register, DIALOG_STYLE_INPUT, v_header , "{e79eff}* PAZLJIVO {FFFFFF}PROCITAJTE\n\n\
		{e79eff}> {FFFFFF}Dobrodosli na "v_header" server.\n\
		{e79eff}> {FFFFFF}Kako bi ste imali mogucnost igrati na serveru,morate se registrovati.\n\
		{e79eff}> {FFFFFF}U prazno polje ispod unesite {e79eff}gmail {FFFFFF}koji cete koristiti.\n\
		{e79eff}> {FFFFFF}Na {e79eff}gmail {FFFFFF}ce vam stici {e79eff}code {FFFFFF}kojeg cete koristiti,\n\
		{e79eff}> {FFFFFF}Za svako sljedece prijavljivanje na {e79eff}V {FFFFFF}- DM server.", "Nastavi", "Odustani");
		return(false);
	}
	else
	{
		new register_save[256];

		v_playerinfo[playerid][v_password] = random(99999);

		mysql_format(database, register_save, sizeof(register_save), "INSERT INTO `users` ( `v_name` ,  `v_password` , `v_mail` , `v_kills` , `v_deaths` , `v_skin` ) VALUES ( '%e' , '%d', '%s' , '0' , '0' , '1')" , v_playerinfo[playerid][v_name] , v_playerinfo[playerid][v_password]  , inputtext , v_playerinfo[playerid][v_kills] , v_playerinfo[playerid][v_deaths] , v_playerinfo[playerid][v_skin] );
		mysql_tquery(database, register_save);

		SetSpawnInfo(playerid, 0, 1, 1728.8882,-1667.8740,22.6094,44.5113, 0, 0, 0, 0, 0, 0);
		SpawnPlayer(playerid);

		Dialog_Show(playerid, v_welcome, DIALOG_STYLE_MSGBOX, v_header, "{e79eff}> {FFFFFF}Dobrodosli na "v_header" server,ugodnu igru i zabavu {e79eff}Vam {FFFFFF}zelimo.\n\
		{e79eff}> {FFFFFF}Ukoliko imate neki problem ili pitanje obratite se administraciji.\n\
		{e79eff}> {FFFFFF}Ako primjetite neku gresku u skripti,molimo da prijavite skripteru.\n\
		{e79eff}\n\t\t\t\t\t\t\t{FFFFFF}Vas "v_header"", "U redu", "");

		SendCodeLogin(playerid);

	}
	return(true);

}

Dialog:v_login(playerid, response, listitem, inputtext[])
{
	new query[128];
	if( !strcmp ( inputtext, v_playerinfo[playerid][v_password], false ) && !isnull( inputtext ) )
	{
		mysql_format(database, query, sizeof(query),"SELECT * FROM `users` WHERE `v_name` = '%e' LIMIT 1", v_playerinfo[playerid][v_name]);
		mysql_tquery(database, query, "LoadAcc", "i", playerid);

	}
	else
	{
		if(!response) return Kick(playerid);
		login_attemp[playerid]++;

		if(login_attemp[playerid] == MAX_LOGIN_ATTEMPS)
		{
			SendInfoMessage(playerid,"Niste unijeli tacnu lozinku,te ste kickovani sa servera!");
			defer KickPlayer(playerid);
		}
		else
		{
			SendInfoMessage(playerid,"Unijeli ste pogresnu lozinku,pokusajte ponovo!");
			Dialog_Show(playerid, v_login, DIALOG_STYLE_PASSWORD, v_header , "{e79eff}> {FFFFFF}Upisite vasu lozinku kako bi se ulogovali.\n\
			{e79eff}> {FFFFFF}Imate {e79eff}(30) {FFFFFF}sekundi da upisete lozinku.\n\
			{e79eff}> {FFFFFF}Imate {e79eff}(3) {FFFFFF}pokusaja ili kick." , "Nastavi" , "Odustani" );
		}
	}

	return(true);
}

// inviting enemy

Dialog:v_duelinv(playerid, response, listitem, inputtext[]){

	new enemy;
	if(sscanf(inputtext, "u" , enemy)) return Dialog_Show(playerid, v_duelinv, DIALOG_STYLE_INPUT, v_header, "{e79eff} > {FFFFFF}Unesite {e79eff}ID {FFFFFF}igraca kojeg zelite pozvati u duel." , "Pozovi" , "Odustani");
	if(enemy == INVALID_PLAYER_ID) return SendErrorMessage(playerid, "Taj igrac je offline!");
	//if(enemy == playerid) return SendErrorMessage(playerid, "Ne mozes sam sebe!");
	if(v_duelinfo[playerid][al_in_duel] == true || v_duelinfo[enemy][al_in_duel]) return SendErrorMessage(playerid, "Duel u toku...");

	Dialog_Show(enemy, v_dueloption , DIALOG_STYLE_MSGBOX , v_header ,  "{e79eff} > {FFFFFF} Igrac {e79eff}%s {FFFFFF}Vas je izazvao na duel!"  , "Prihvati" , "Odustani" , VName(playerid) );

	duel_inviter[enemy] = playerid;
	duel_recieve[playerid] = enemy;
	return(true);
}

// accept or decline duel offer

Dialog:v_dueloption(playerid, response, listitem, inputtext[]){

	new enemyid = duel_inviter[playerid];
	new randomduel = random(sizeof(DuelPositions));
	if(!response){

		SendInfoMessage(playerid,"Odbili ste duel od izazivaca.");
		SendInfoMessage(enemyid, "Igrac je odbio vas poziv na duel.");
	}
	else{

		SetPlayerPos(playerid, DuelPositions[randomduel][0], DuelPositions[randomduel][1], DuelPositions[randomduel][2]);
		SetPlayerPos(enemyid,  DuelPositions[randomduel][0], DuelPositions[randomduel][1], DuelPositions[randomduel][2]);

	}
	return(true);
}
