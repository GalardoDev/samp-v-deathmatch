
/* All arenas that are available on server */


enum v_arenadata{

    v_arena_name[15],
    Float:v_arena_posx,
    Float:v_arena_posy,
    Float:v_arena_posz,
    players_in_arena

}

new v_arenainfo[MAX_V_ARENAS][v_arenadata] = {

    { "Island"         , { 1909.8385 }, { -1597.4097 }, { 14.3062 } , players_in_arena },
    { "Basketball"     , { 1982.4323 }, { -1542.3532 }, { 15.1324 } , players_in_arena }, 
    { "fy_snow"        , { 8.5036    }, {  1509.9604 }, { 12.7560 } , players_in_arena }

};