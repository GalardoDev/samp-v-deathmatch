
CMD:cc(playerid){

    for(new i = 1; i <= 25; i++) SendClientMessageToAll(-1, "");
    va_SendClientMessageToAll(-1, "Chat ociscen od strane %s" , VName(playerid));
    return(true);
}