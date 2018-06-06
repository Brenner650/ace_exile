////////////////////////////////////////////////////////////////////
//DeRap: hlc_ace3_compat_G36\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:42:10 2018 : 'file' last modified on Mon Jul 24 20:40:03 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class HLC_COMPAT_ACE3_G36
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","ace_common","hlcweapons_G36"};
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
	class hlc_G36_base;
	class hlc_rifle_G36MLIC: hlc_G36_base
	{
		magazines[] += {"ACE_100Rnd_65x39_caseless_mag_Tracer_Dim","ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"};
	};
};
