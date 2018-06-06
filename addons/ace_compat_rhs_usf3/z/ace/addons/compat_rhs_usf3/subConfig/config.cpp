////////////////////////////////////////////////////////////////////
//DeRap: ace_compat_rhs_usf3\subConfig\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:29 2018 : 'file' last modified on Mon Apr 16 21:50:17 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_compat_rhs_usf3_sub
	{
		name = "ACE3 - RHS USF Compatibility";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_compat_rhs_usf3"};
		author = "$STR_ace_common_ACETeam";
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class CfgWeapons
{
	class arifle_MX_Base_F;
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		class M203_GL;
		class M320_GL: M203_GL
		{
			magazines[] += {"ACE_HuntIR_M203"};
		};
	};
};
