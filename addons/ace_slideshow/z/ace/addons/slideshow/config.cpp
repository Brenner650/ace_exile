////////////////////////////////////////////////////////////////////
//DeRap: ace_slideshow\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:24 2018 : 'file' last modified on Mon Apr 16 21:48:08 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_slideshow
	{
		name = "ACE3 - Slideshow";
		units[] = {"ace_slideshow_module"};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Jonpas","DaC"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_slideshow
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\slideshow\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_slideshow
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\slideshow\XEH_preInit.sqf'";
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ace_slideshow_module: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE_missionModules";
		displayName = "$STR_ace_slideshow_DisplayName";
		function = "ace_slideshow_fnc_moduleInit";
		scope = 2;
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		icon = "\z\ace\addons\slideshow\UI\Icon_Module_Slideshow_ca.paa";
		class Arguments
		{
			class Objects
			{
				displayName = "$STR_ace_slideshow_Objects_DisplayName";
				description = "$STR_ace_slideshow_Objects_Description";
				typeName = "STRING";
				defaultValue = "";
			};
			class Controllers
			{
				displayName = "$STR_ace_slideshow_Controllers_DisplayName";
				description = "$STR_ace_slideshow_Controllers_Description";
				typeName = "STRING";
				defaultValue = "";
			};
			class Images
			{
				displayName = "$STR_ace_slideshow_Images_DisplayName";
				description = "$STR_ace_slideshow_Images_Description";
				typeName = "STRING";
				defaultValue = "";
			};
			class Names
			{
				displayName = "$STR_ace_slideshow_Names_DisplayName";
				description = "$STR_ace_slideshow_Names_Description";
				typeName = "STRING";
				defaultValue = "";
			};
			class SetName
			{
				displayName = "$STR_ace_slideshow_SetName_DisplayName";
				description = "$STR_ace_slideshow_SetName_Description";
				typeName = "STRING";
				defaultValue = "";
			};
			class Duration
			{
				displayName = "$STR_ace_slideshow_Duration_DisplayName";
				description = "$STR_ace_slideshow_Duration_Description";
				typeName = "NUMBER";
				defaultValue = 0;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_slideshow_Description";
		};
	};
};
