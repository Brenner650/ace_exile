////////////////////////////////////////////////////////////////////
//DeRap: ace_huntir\subConfig\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:59 2018 : 'file' last modified on Mon Apr 16 21:44:33 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_huntir_sub
	{
		name = "ACE3 - HuntIR";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_huntir"};
		author = "$STR_ace_common_ACETeam";
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class CfgWeapons
{
	class UGL_F;
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class GL_3GL_F: UGL_F
		{
			magazines[] += {"ACE_HuntIR_M203"};
		};
	};
};
