
/* all player commands */


CMD:vdm(playerid){

	new dmlist_info[256];
	//if(joined_arena[playerid] == true) return SendErrorMessage(playerid,"Vec se nalazi u nekoj areni!");
	if(Bit_Get(joined_arena, playerid)) SendErrorMessage(playerid,"Vec se nalazis u nekoj areni!");
	for(new i; i < MAX_V_ARENAS; i++)
	{
		format(dmlist_info, sizeof(dmlist_info), "%s{e79eff}%d). {FFFFFF}Arena: {e79eff}%s\t-\t{FFFFFF}Players: ({e79eff}%d{FFFFFF})\n", dmlist_info , i+1 , v_arenainfo[i][v_arena_name] , v_arenainfo[i][players_in_arena]);
	}
	Dialog_Show(playerid, v_showvdms, DIALOG_STYLE_INPUT, v_header, dmlist_info , "Pridruzi se" , "Odustani");
	return(true);
}


CMD:exit(playerid){

	if(!Bit_Get(joined_arena, playerid)) return SendErrorMessage(playerid, "Vec se nalazis u lobby-u!");
	SetPlayerPos(playerid, 1728.8882,-1667.8740,22.6094);
	Bit_Vet(joined_arena, playerid);
	v_arenainfo[which_arena][players_in_arena]--;
	return(true);
}

CMD:stats(playerid){

	Dialog_Show(playerid, v_showrank, DIALOG_STYLE_MSGBOX, v_header, "{e79eff}> Nickname{FFFFFF} - %s\n\
	{e79eff}> Rank{FFFFFF} - %s\n\
	{e79eff}> Kills{FFFFFF} - %d\n\
	{e79eff}> Deaths{FFFFFF} - %d" , "Zatvori" , "" , VName(playerid), getDMName(playerid), v_playerinfo[playerid][v_kills], v_playerinfo[playerid][v_deaths]);
	return(true);
}

CMD:skin(playerid){

	Dialog_Show(playerid, v_changeskin, DIALOG_STYLE_INPUT, v_header, "{e79eff} > {FFFFFF}Unesite ID skina koji zelite. (1-299)" , "Promijeni" , "Odustani" );
	return(true);
}

CMD:duel(playerid){

	Dialog_Show(playerid, v_duelinv, DIALOG_STYLE_INPUT, v_header, "{e79eff} > {FFFFFF}Unesite {e79eff}ID {FFFFFF}igraca kojeg zelite pozvati u duel." , "Pozovi" , "Odustani");
	return(true);
}
