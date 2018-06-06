////////////////////////////////////////////////////////////////////
//DeRap: ace_modules\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:20 2018 : 'file' last modified on Mon Apr 16 21:46:48 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_modules
	{
		name = "ACE3 - Modules";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_main"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Glowbal"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits{};
	};
	class ACE_Module: Module_F
	{
		class EventHandlers
		{
			init = "_this call ace_modules_fnc_moduleInit";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_modules
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\modules\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_modules
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\modules\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class _ACE_modules
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\modules\XEH_postInit.sqf'";
	};
};
