////////////////////////////////////////////////////////////////////
//DeRap: ace_magazinerepack\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:03 2018 : 'file' last modified on Mon Apr 16 21:45:41 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_magazinerepack
	{
		name = "ACE3 - Magazine Repack";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","esteldunedain"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_magazinerepack
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\magazinerepack\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_magazinerepack
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\magazinerepack\XEH_preInit.sqf'";
	};
};
class CfgSounds
{
	class ace_magazinerepack_soundMagazineFinished
	{
		name = "ace_magazinerepack_soundMagazineFinished";
		sound[] = {"\z\ace\addons\magazinerepack\sounds\magrepack_finished.wav",1,1};
		titles[] = {};
	};
	class ace_magazinerepack_soundRoundFinished
	{
		name = "ace_magazinerepack_soundRoundFinished";
		sound[] = {"\z\ace\addons\magazinerepack\sounds\magrepack_single.wav",1,1};
		titles[] = {};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_RepackMagazines
			{
				displayName = "$STR_ace_magazinerepack_RepackMagazines";
				condition = "true";
				exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
				insertChildren = "_this call ace_magazinerepack_fnc_getMagazineChildren";
				priority = -2;
				icon = "\z\ace\addons\common\UI\repack_ca.paa";
			};
		};
	};
};
class ACE_Settings
{
	class ace_magazinerepack_timePerAmmo
	{
		category = "$STR_ace_magazinerepack_DisplayName";
		displayName = "$STR_ace_magazinerepack_timePerAmmo";
		value = 1.5;
		typeName = "SCALAR";
		sliderSettings[] = {1,10,1.5,1};
	};
	class ace_magazinerepack_timePerMagazine
	{
		category = "$STR_ace_magazinerepack_DisplayName";
		displayName = "$STR_ace_magazinerepack_timePerMagazine";
		value = 2.0;
		typeName = "SCALAR";
		sliderSettings[] = {1,10,2,1};
	};
	class ace_magazinerepack_timePerBeltLink
	{
		category = "$STR_ace_magazinerepack_DisplayName";
		displayName = "$STR_ace_magazinerepack_timePerBeltLink";
		value = 8.0;
		typeName = "SCALAR";
		sliderSettings[] = {1,10,8,1};
	};
};
