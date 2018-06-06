////////////////////////////////////////////////////////////////////
//DeRap: ace_gforces\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:14 2018 : 'file' last modified on Mon Apr 16 21:43:22 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_gforces
	{
		name = "ACE3 - G-Forces";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"KoffeinFlummi","esteldunedain"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		addonRootClass = "A3_Characters_F";
	};
};
class ACE_Settings
{
	class ace_gforces_enabledFor
	{
		displayName = "$STR_ace_gforces_enabledFor_displayName";
		typeName = "SCALAR";
		value = 1;
		values[] = {"$STR_ace_Common_Disabled","$STR_ace_gforces_enabledFor_onlyAircraft","$STR_ace_Common_Enabled"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_gforces
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\gforces\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_gforces
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\gforces\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_gforces
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\gforces\XEH_postInit.sqf'";
	};
};
class CfgWeapons
{
	class ItemCore;
	class Uniform_Base: ItemCore
	{
		ACE_GForceCoef = 1;
	};
	class U_B_PilotCoveralls: Uniform_Base
	{
		ACE_GForceCoef = 0.8;
	};
	class U_I_pilotCoveralls: Uniform_Base
	{
		ACE_GForceCoef = 0.8;
	};
	class U_O_PilotCoveralls: Uniform_Base
	{
		ACE_GForceCoef = 0.8;
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		ACE_GForceCoef = 1;
	};
	class B_Soldier_05_f;
	class B_Pilot_F: B_Soldier_05_f
	{
		ACE_GForceCoef = 0.55;
	};
	class I_Soldier_04_F;
	class I_pilot_F: I_Soldier_04_F
	{
		ACE_GForceCoef = 0.55;
	};
	class O_helipilot_F;
	class O_Pilot_F: O_helipilot_F
	{
		ACE_GForceCoef = 0.55;
	};
};
class ace_arsenal_stats
{
	class statBase;
	class ACE_gReduction: statBase
	{
		scope = 2;
		priority = 1;
		stats[] = {"ACE_GForceCoef"};
		displayName = "$STR_ace_gforces_statGReduction";
		showBar = 1;
		barStatement = "[(_this select 0) select 0,_this select 1,[[1,0],[0.01,1],false]] call ace_arsenal_fnc_statBarStatement_default";
		condition = "getNumber (_this select 1 >> (_this select 0) select 0) > 0";
		tabs[] = {{3},{}};
	};
};
