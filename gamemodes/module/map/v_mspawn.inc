
#include 	<YSI_Coding\y_hooks>


/* All maps that are on server */

hook OnGameModeInit()
{	
	new SPAWN;
	SPAWN = CreateObject(14675,1719.750,-1655.770,30.195,0.000,0.000,0.000,300.000);
	SetObjectMaterial(SPAWN, 1, 3820, "boxhses_sfsx", "ws_mixedbrick", 0x00000000);
	SetObjectMaterial(SPAWN, 3, 9514, "711_sfw", "ws_carpark2", 0x00000000);
	SetObjectMaterial(SPAWN, 4, 9514, "711_sfw", "ws_carpark2", 0x00000000);
	SetObjectMaterial(SPAWN, 5, 3820, "boxhses_sfsx", "ws_mixedbrick", 0x00000000);
	SetObjectMaterial(SPAWN, 6, 3820, "boxhses_sfsx", "ws_mixedbrick", 0x00000000);
	SetObjectMaterial(SPAWN, 9, 9514, "711_sfw", "ws_carpark2", 0x00000000);
	SetObjectMaterial(SPAWN, 12, 9514, "711_sfw", "ws_carpark2", 0x00000000);
	SetObjectMaterial(SPAWN, 13, 9514, "711_sfw", "ws_carpark2", 0x00000000);
	SPAWN = CreateObject(19325,1731.110,-1669.069,22.119,0.000,0.000,493.700,300.000);
	SetObjectMaterialText(SPAWN, "3", 0, 140, "GTAWEAPON3", 40, 1, 0xFF000000, 0x00000000, 0);
	SPAWN = CreateObject(1300,1712.087,-1661.883,19.609,0.000,0.000,0.000,300.000);
	SetObjectMaterial(SPAWN, 0, 14581, "ab_mafiasuitea", "cof_wood2", 0x00000000);
	SetObjectMaterial(SPAWN, 1, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(1300,1712.087,-1653.894,19.609,0.000,0.000,0.000,300.000);
	SetObjectMaterial(SPAWN, 0, 14581, "ab_mafiasuitea", "cof_wood2", 0x00000000);
	SetObjectMaterial(SPAWN, 1, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(1300,1712.087,-1657.005,19.609,0.000,0.000,900.000,300.000);
	SetObjectMaterial(SPAWN, 0, 14581, "ab_mafiasuitea", "cof_wood2", 0x00000000);
	SetObjectMaterial(SPAWN, 1, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(1300,1712.087,-1664.936,19.609,0.000,0.000,900.000,300.000);
	SetObjectMaterial(SPAWN, 0, 14581, "ab_mafiasuitea", "cof_wood2", 0x00000000);
	SetObjectMaterial(SPAWN, 1, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(1300,1712.087,-1670.216,19.609,0.000,0.000,1080.000,300.000);
	SetObjectMaterial(SPAWN, 0, 14581, "ab_mafiasuitea", "cof_wood2", 0x00000000);
	SetObjectMaterial(SPAWN, 1, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(19454,1701.985,-1661.519,19.206,0.000,90.000,0.000,300.000);
	SetObjectMaterial(SPAWN, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	SPAWN = CreateObject(19454,1701.985,-1651.970,19.206,0.000,90.000,0.000,300.000);
	SetObjectMaterial(SPAWN, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	SPAWN = CreateObject(19454,1703.686,-1651.970,17.576,0.000,180.000,0.000,300.000);
	SetObjectMaterial(SPAWN, 0, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(19454,1703.686,-1661.482,17.576,0.000,180.000,0.000,300.000);
	SetObjectMaterial(SPAWN, 0, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(19454,1702.026,-1666.302,14.486,90.000,180.000,90.000,300.000);
	SetObjectMaterial(SPAWN, 0, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(19089,1733.972,-1666.350,26.078,0.000,0.000,0.000,300.000);
	SetObjectMaterial(SPAWN, 0, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(19089,1726.321,-1673.721,26.078,0.000,0.000,0.000,300.000);
	SetObjectMaterial(SPAWN, 0, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(1280,1705.972,-1647.972,19.550,0.000,0.000,90.000,300.000);
	SetObjectMaterial(SPAWN, 0, -1, "none", "none", 0xFF000000);
	SetObjectMaterial(SPAWN, 1, 10765, "airportgnd_sfse", "white", 0x00000000);
	SPAWN = CreateObject(1280,1735.073,-1641.610,19.550,0.000,0.000,360.000,300.000);
	SetObjectMaterial(SPAWN, 0, -1, "none", "none", 0xFF000000);
	SetObjectMaterial(SPAWN, 1, 10765, "airportgnd_sfse", "white", 0x00000000);
	SPAWN = CreateObject(1280,1730.184,-1638.352,19.550,0.000,0.000,90.000,300.000);
	SetObjectMaterial(SPAWN, 0, -1, "none", "none", 0xFF000000);
	SetObjectMaterial(SPAWN, 1, 10765, "airportgnd_sfse", "white", 0x00000000);
	SPAWN = CreateObject(1280,1735.073,-1661.372,19.550,0.000,0.000,360.000,300.000);
	SetObjectMaterial(SPAWN, 0, -1, "none", "none", 0xFF000000);
	SetObjectMaterial(SPAWN, 1, 10765, "airportgnd_sfse", "white", 0x00000000);
	SPAWN = CreateObject(1280,1735.073,-1651.670,19.550,0.000,0.000,360.000,300.000);
	SetObjectMaterial(SPAWN, 0, -1, "none", "none", 0xFF000000);
	SetObjectMaterial(SPAWN, 1, 10765, "airportgnd_sfse", "white", 0x00000000);
	SPAWN = CreateObject(1499,1729.060,-1670.932,21.609,0.000,0.000,42.000,300.000);
	SetObjectMaterial(SPAWN, 0, -1, "none", "none", 0xFF000000);
	SetObjectMaterial(SPAWN, 1, 18065, "ab_sfammumain", "shelf_glas", 0x00000000);
	SPAWN = CreateObject(1499,1731.298,-1668.918,21.609,0.000,0.000,222.000,300.000);
	SetObjectMaterial(SPAWN, 0, -1, "none", "none", 0xFF000000);
	SetObjectMaterial(SPAWN, 1, 18065, "ab_sfammumain", "shelf_glas", 0x00000000);
	SPAWN = CreateObject(19325,1728.744,-1671.328,22.439,0.000,0.000,313.600,300.000);
	SetObjectMaterialText(SPAWN, "WELCOME TO ARENA", 0, 140, "Engravers MT", 22, 1, 0xFF000000, 0x00000000, 0);
	SPAWN = CreateObject(19325,1703.880,-1673.821,19.925,0.000,0.000,270.000,300.000);
	SetObjectMaterialText(SPAWN, "TERETANA", 0, 140, "Ariel", 40, 1, 0xFFFFFFFF, 0x00000000, 0);
	SPAWN = CreateObject(352,1721.861,-1668.879,19.786,0.000,0.000,44.000,300.000);
	SetObjectMaterial(SPAWN, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
	SPAWN = CreateObject(352,1729.171,-1661.820,19.786,0.000,0.000,224.000,300.000);
	SetObjectMaterial(SPAWN, 0, 10765, "airportgnd_sfse", "white", 0x00000000);
	SPAWN = CreateObject(1300,1731.077,-1653.863,19.609,0.000,0.000,0.000,300.000);
	SetObjectMaterial(SPAWN, 0, 14581, "ab_mafiasuitea", "cof_wood2", 0x00000000);
	SetObjectMaterial(SPAWN, 1, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(1300,1731.077,-1646.082,19.609,0.000,0.000,0.000,300.000);
	SetObjectMaterial(SPAWN, 0, 14581, "ab_mafiasuitea", "cof_wood2", 0x00000000);
	SetObjectMaterial(SPAWN, 1, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(1300,1731.077,-1649.191,19.609,0.000,0.000,180.000,300.000);
	SetObjectMaterial(SPAWN, 0, 14581, "ab_mafiasuitea", "cof_wood2", 0x00000000);
	SetObjectMaterial(SPAWN, 1, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(1300,1731.077,-1657.021,19.609,0.000,0.000,180.000,300.000);
	SetObjectMaterial(SPAWN, 0, 14581, "ab_mafiasuitea", "cof_wood2", 0x00000000);
	SetObjectMaterial(SPAWN, 1, -1, "none", "none", 0xFF000000);
	SPAWN = CreateObject(14674,1721.630,-1655.189,24.312,0.000,0.000,0.000,300.000);
	SetObjectMaterial(SPAWN, 0, 10442, "graveyard_sfs", "ws_graveydfence", 0xFF000000);
	SetObjectMaterial(SPAWN, 1, 3979, "civic01_lan", "sl_laglasswall2", 0xFF333333);
	SetObjectMaterial(SPAWN, 2, -1, "none", "none", 0xFF003300);
	SetObjectMaterial(SPAWN, 3, -1, "none", "none", 0xFF003300);
	SetObjectMaterial(SPAWN, 4, -1, "none", "none", 0xFF003300);
	//==========================================================================
	//==========================================================================
	//==========================================================================
	SPAWN = CreateObject(1297,2726.500,-1895.439,13.296,0.000,0.000,-89.999,300.000);
	SPAWN = CreateObject(19604,1720.272,-1655.790,19.110,0.000,180.000,0.000,300.000);
	SPAWN = CreateObject(19604,1725.263,-1655.790,19.110,0.000,180.000,0.000,300.000);
	SPAWN = CreateObject(869,1701.620,-1663.812,19.406,0.000,0.000,90.000,300.000);
	SPAWN = CreateObject(738,1721.871,-1661.433,19.280,0.000,0.000,0.000,300.000);
	SPAWN = CreateObject(738,1721.871,-1649.752,19.280,0.000,0.000,0.000,300.000);
	SPAWN = CreateObject(1223,1728.882,-1655.528,19.160,0.000,0.000,180.000,300.000);
	SPAWN = CreateObject(1223,1728.882,-1647.637,19.160,0.000,0.000,180.000,300.000);
	SPAWN = CreateObject(1223,1713.642,-1655.468,19.160,0.000,0.000,360.000,300.000);
	SPAWN = CreateObject(1223,1713.642,-1663.399,19.160,0.000,0.000,360.000,300.000);
	SPAWN = CreateObject(832,1701.882,-1658.810,20.600,0.000,0.000,90.000,300.000);
	SPAWN = CreateObject(869,1701.620,-1654.221,19.406,0.000,0.000,90.000,300.000);
	SPAWN = CreateObject(2671,1705.418,-1650.527,19.220,0.000,0.000,0.000,300.000);
	/*SPAWN = CreateObject(1948,1716.219,-1674.067,20.920,0.000,0.000,180.000,300.000);
	SPAWN = CreateObject(1948,1715.029,-1674.067,20.920,0.000,0.000,180.000,300.000);
	SPAWN = CreateObject(1948,1712.638,-1674.067,20.920,0.000,0.000,180.000,300.000);
	SPAWN = CreateObject(1948,1713.859,-1674.067,20.920,0.000,0.000,180.000,300.000);*/
	SPAWN = CreateObject(2258,1735.396,-1658.770,21.398,0.000,0.000,-90.000,300.000);
	SPAWN = CreateObject(19172,1735.425,-1645.215,21.241,0.000,0.000,270.000,300.000);
	SPAWN = CreateObject(2272,1734.900,-1648.268,20.941,0.000,0.000,-90.000,300.000);
	SPAWN = CreateObject(2272,1734.849,-1660.859,20.941,0.000,0.000,-90.000,300.000);
	SPAWN = CreateObject(2627,1710.113,-1672.890,19.228,0.000,0.000,180.000,300.000);
	SPAWN = CreateObject(14804,1731.498,-1667.629,22.570,0.000,0.000,240.000,300.000);
	SPAWN = CreateObject(14804,1727.805,-1671.443,22.570,0.000,0.000,240.000,300.000);
	SPAWN = CreateObject(2627,1708.893,-1672.890,19.228,0.000,0.000,180.000,300.000);
	SPAWN = CreateObject(2627,1707.662,-1672.890,19.228,0.000,0.000,180.000,300.000);
	SPAWN = CreateObject(2627,1706.332,-1672.890,19.228,0.000,0.000,180.000,300.000);
	SPAWN = CreateObject(2630,1705.003,-1672.885,19.188,0.000,0.000,0.000,300.000);
	SPAWN = CreateObject(2630,1703.613,-1672.885,19.188,0.000,0.000,0.000,300.000);
	SPAWN = CreateObject(2629,1702.125,-1672.699,19.178,0.000,0.000,180.000,300.000);
	SPAWN = CreateObject(11730,1700.695,-1672.648,19.218,0.000,0.000,90.000,300.000);
	SPAWN = CreateObject(11730,1700.695,-1671.588,19.218,0.000,0.000,90.000,300.000);
	SPAWN = CreateObject(19366,1729.592,-1668.277,21.475,0.000,90.000,42.000,300.000);
	SPAWN = CreateObject(19366,1729.592,-1668.277,21.475,0.000,90.000,42.000,300.000);
	SPAWN = CreateObject(19366,1728.692,-1669.087,21.475,0.000,90.000,42.000,300.000);
	SPAWN = CreateObject(19366,1701.803,-1667.961,19.120,0.000,90.000,0.000,300.000);
	SPAWN = CreateObject(19366,1726.824,-1639.071,19.080,0.000,90.000,0.000,300.000);
	return(true);
}
