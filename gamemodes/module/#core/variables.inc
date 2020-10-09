
new BitArray:first_spawn<MAX_PLAYERS>,      // -> message on 1st spawn
    BitArray:joined_arena<MAX_PLAYERS>,     // -> managing arenas
    login_attemp[MAX_PLAYERS],          // -> number of login attemps
    which_arena,                        // -> managing number of players in each arena
    duel_inviter[MAX_PLAYERS],          // -> to get info about who's inviter and reciever
    duel_recieve[MAX_PLAYERS];          // -> to get info about who'll reciever in duel
