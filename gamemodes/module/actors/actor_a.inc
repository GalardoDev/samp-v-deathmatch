
#include    "YSI_Coding\y_hooks"

new actor_a;

hook OnGameModeInit(){

    actor_a = CreateActor(294, 1728.5403, -1661.3330, 20.2378, 44.8247);
    Create3DTextLabel("DM Zones\nShoot me!", 0xDABB3EAA, 1728.5403, -1661.3330, 20.2378+1.2, 10.0, 0, 0);
    SetActorInvulnerable(actor_a, 0);

    print(" ");
    print("vdm_loading >> actor_a successfully created!");
    return(true);
}

hook OnPlayerGiveDamageActor(playerid, damaged_actorid, Float:amount, weaponid, bodypart){

    if(damaged_actorid == actor_a){

        new dmlist_info[256];
	    if(Bit_Get(joined_arena, playerid) == true) return SendErrorMessage(playerid, "Vec se nalazis u nekoj areni!");
        for(new i; i < MAX_V_ARENAS; i++)
	    {
		    format(dmlist_info, sizeof(dmlist_info), "%s{e79eff}%d). {FFFFFF}Arena: {e79eff}%s\t-\t{FFFFFF}Players: ({e79eff}%d{FFFFFF})\n", dmlist_info , i+1 , v_arenainfo[i][v_arena_name] , v_arenainfo[i][players_in_arena]);
	    }
    	Dialog_Show(playerid, v_showvdms, DIALOG_STYLE_INPUT, v_header, dmlist_info , "Pridruzi se" , "Odustani");
    }
    return(true);
}