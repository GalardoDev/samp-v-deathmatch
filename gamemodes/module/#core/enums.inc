
enum data_v_playerinfo{

	ID,
    v_name[25],
    v_password[65],
	v_mail[50],
    //v_level,
	v_kills,
	v_deaths,
	v_skin

}

new v_playerinfo[ MAX_PLAYERS ][ data_v_playerinfo ];

// --------------------------------------------------------------- //

enum data_v_duelinfo{

	duel_player[24],
	bool:al_in_duel
};

new v_duelinfo[ MAX_PLAYERS ][ data_v_duelinfo ];

// --------------------------------------------------------------- //
