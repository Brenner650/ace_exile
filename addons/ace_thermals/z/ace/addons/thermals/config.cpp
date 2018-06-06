////////////////////////////////////////////////////////////////////
//DeRap: ace_thermals\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:26 2018 : 'file' last modified on Mon Apr 16 21:48:57 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_thermals
	{
		name = "ACE3 - Thermals";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"[TF]Nkey"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class CfgVehicles
{
	class Land;
	class Man: Land
	{
		mFact = 1;
		tBody = 32;
	};
	class All;
	class AllVehicles: All
	{
		htMin = 60;
		htMax = 1800;
		afMax = 70;
		mfMax = 50;
		mFact = 0.0;
		tBody = 0;
	};
	class Animal;
	class Animal_Base_F: Animal
	{
		mFact = 1;
		tBody = 32;
	};
};
