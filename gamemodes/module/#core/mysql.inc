
#include    "YSI_Coding\y_hooks"

/* MySQL information */

static const mysql_host[10] =   "localhost";
static const mysql_user[5]  =   "root";
static const mysql_pass[0]  =   "";
static const mysql_data[6]  =   "v_dm";

new MySQL:database;


/* Mysql connection */

hook OnGameModeInit()
{
	database = mysql_connect(mysql_host,mysql_user ,mysql_pass, mysql_data);
    if(database == MYSQL_INVALID_HANDLE || mysql_errno(database) != 0) 
	{
		printf("Databaza nije uspjesno konektovana na %s@%s -> %s", mysql_user, mysql_host, mysql_data);
		SendRconCommand("exit");
		return (false);
	}
	else
	{
		printf("Databaza je uspjesno konektovana na %s@%s -> %s", mysql_user, mysql_host, mysql_data);
	}
    return(true);
}