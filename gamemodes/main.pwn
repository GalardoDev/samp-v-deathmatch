
/* ------------------------------------------------------------------------------- /

				██╗   ██╗          ██████╗ ███╗   ███╗
				██║   ██║          ██╔═ ██╗████╗ ████║
				╚██╗ ██╔╝  █████╗  ██║  ██║██╔████╔██║ 
				 ╚████╔╝   ╚════╝  ██║  ██║██║╚██╔ ██║
				  ╚██╔╝            ██████╔╝██║ ╚═╝ ██║
				   ╚═╝             ╚═════╝ ╚═╝     ╚═╝

		   Galardo's deathmatch gamemode from zero.
		   Git: https://github.com/Galardo420/samp-v-deathmatch

		   Credits:
				   Southclaws - sampctl
				   Y_Less - YSI includes...
				   bruxo00 - SAMPMailJS
				   JustMichael - SKY & weapon-config
				   pBlueG - MySQL
				   urShadow - Pawn.CMD
				   maddinato0r - sscanf
				   incognito - streamer
				   V01D - fy_snow map

			Copyright (©) 2020 | 10th October

/ ------------------------------------------------------------------------------ */


/* ----------------------------------------------------------------------------- */

#include 															    <a_samp>  // -> default samp include

#include 												    <YSI_Data\y_iterate>  // -> https://github.com/pawn-lang/YSI-Includes
#include 															  <YSI\y_va>  // -> https://github.com/pawn-lang/YSI-Includes
#include 													    <YSI_Data\y_bit>
#include 												   <YSI_Coding\y_timers>  // -> https://github.com/pawn-lang/YSI-Includes

#include 															   <a_mysql>  // -> https://github.com/pBlueG/SA-MP-MySQ
#include 															  <Pawn.CMD>  // -> https://github.com/urShadow/Pawn.CMD
#include															  <streamer>  // -> https://github.com/samp-incognito/samp-streamer-plugin
#include 															   <sscanf2>  // -> https://github.com/maddinat0r/sscanf
#include 																   <SKY>  // -> https://github.com/oscar-broman/SKY
#include 														    <easyDialog>  // -> https://github.com/Awsomedude/easyDialog
#include 														 <weapon-config>  // -> https://github.com/oscar-broman/samp-weapon-config

/* ----------------------------------------------------------------------------- */


// ---------------------------------------------------------------------------- //

#include 										  "module\#core\definitions.inc"
#include 										  "module\#core\mysql.inc"
#include 									      "module\#core\enums.inc"
#include 										  "module\#core\variables.inc"
#include 										  "module\#core\dm\arenas.inc"
#include 								          "module\#core\dm\ranks.inc"
#include 										  "module\#core\dm\duelpos.inc"
#include 									      "module\#core\callbacks.inc"
#include 										  "module\#core\functions.inc"
#include										  "module\#core\dialogs.inc"
#include 										  "module\#core\mailer\function.inc"
#include 										  "module\#core\mailer\mailer.inc"

// --------------------------------------------------------------------------- //

#include 										  "module\player side\commands.inc"
#include 										  "module\player side\admin\cmds.inc"
#include 									      "module\server side\settings.inc"
#include 										  "module\server side\timers.inc"

// --------------------------------------------------------------------------- //

#if USE_ACTORS == true

#include 										  "module\actors\actor_a.inc"

#endif

// --------------------------------------------------------------------------- //

#if USE_MAPS == true

#include 									      "module\map\v_mspawn.inc"
#include 									      "module\map\v_fysnow.inc"

#endif

// --------------------------------------------------------------------------- //

#include 								          "module\other\weapon-config.inc"

/* ----------------------------------------------------------------------------- */

#if IN_LOCAL == true

main()
{
    print(" ");
	print("=====================================");
	print(" ");
	print("> V // V - DM");
	print(" ");
	print("> Scripter: \t\t"v_scripter"");
	print("> Owner: \t\t"v_owner"");
	print("> Mapper: \t\t"v_mapper"");
	print(" ");
	print("> Language: \t\t"v_lang"");
	print("> Version: \t\t"v_version"");
	print("> Last update: \t\t"v_lastup"");
	print(" ");
	print("=====================================");
}

#endif

/* ----------------------------------------------------------------------------- */

public OnGameModeInit(){
	// moved to modules
	return(true);
}

public OnPlayerConnect(playerid){
	// moved to modules
	return(true);
}

public OnPlayerSpawn(playerid){
	// moved to modules
	return(true);
}


public OnPlayerDeath(playerid, killerid, reason) {
	// moved to modules
	return (true);
}

public OnPlayerDamage(&playerid, &Float:amount, &issuerid, &weapon, &bodypart){

	return(true);
}

public OnPlayerDisconnect(playerid, reason){
	// moved to modules
	return(true);
}

public OnGameModeExit(){
	// moved to modules
	return(false);

}

/* ----------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------- */
