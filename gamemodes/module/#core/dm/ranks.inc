
/* ranking system */

getDMName(playerid)
{
	new rank[32];
	if(v_playerinfo[playerid][v_kills] < 10) 		rank = "Unranked";
	else if(v_playerinfo[playerid][v_kills] > 10)   rank = "Beginner";
	else if(v_playerinfo[playerid][v_kills] > 30)   rank = "Sage";
	else if(v_playerinfo[playerid][v_kills] > 50)   rank = "Prime";
	else if(v_playerinfo[playerid][v_kills] > 80)   rank = "Librarian";
	else if(v_playerinfo[playerid][v_kills] > 120)  rank = "Neophyte";
	else if(v_playerinfo[playerid][v_kills] > 150)  rank = "Lord";
	return rank;
}
