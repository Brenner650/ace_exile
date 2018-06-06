////////////////////////////////////////////////////////////////////
//DeRap: ace_reload\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:24 2018 : 'file' last modified on Mon Apr 16 21:47:22 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_reload
	{
		name = "ACE3 - Reload";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"commy2","KoffeinFlummi","esteldunedain"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_Weapon
			{
				class ace_reload_LinkBelt
				{
					displayName = "$STR_ace_reload_LinkBelt";
					distance = 2.0;
					condition = "([_player,_target] call ace_reload_fnc_getAmmoToLinkBelt) > 0";
					statement = "[_player,_target] call ace_reload_fnc_startLinkingBelt";
					exceptions[] = {"isNotInside"};
				};
				class ace_reload_CheckAmmo
				{
					displayName = "$STR_ace_reload_checkAmmo";
					distance = 2.0;
					condition = "[_player,_target] call ace_reload_fnc_canCheckAmmo";
					statement = "[_player,_target] call ace_reload_fnc_checkAmmo";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
				};
			};
		};
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_reload_CheckAmmo
				{
					displayName = "$STR_ace_reload_checkAmmo";
					distance = 2.0;
					condition = "[_player,_target] call ace_reload_fnc_canCheckAmmo";
					statement = "[_player,_target] call ace_reload_fnc_checkAmmo";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
				};
			};
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 150Rnd_762x51_Box: CA_Magazine
	{
		ACE_isBelt = 1;
	};
	class 100Rnd_65x39_caseless_mag;
	class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag
	{
		ACE_isBelt = 1;
	};
	class 150Rnd_93x64_Mag: CA_Magazine
	{
		ACE_isBelt = 1;
	};
	class 130Rnd_338_Mag: CA_Magazine
	{
		ACE_isBelt = 1;
	};
	class 200Rnd_556x45_Box_F: CA_Magazine
	{
		ACE_isBelt = 1;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_reload
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\reload\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_reload
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\reload\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_reload
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\reload\XEH_postInit.sqf'";
	};
};
class Extended_Take_EventHandlers
{
	class CAManBase
	{
		class ACE_AmmoIndicatorReload
		{
			clientTake = "params ['_unit']; if (_unit == ACE_player && {ace_reload_DisplayText} && {(_this select 1) in [uniformContainer _unit, vestContainer _unit, backpackContainer _unit]} && {_this select 2 == currentMagazine _unit}) then {[_unit, vehicle _unit] call ace_reload_fnc_displayAmmo};";
		};
	};
};
class CfgActions
{
	class LoadMagazine;
	class LoadEmptyMagazine: LoadMagazine
	{
		showWindow = 0;
		textDefault = "";
	};
};
class ACE_Settings
{
	class ace_reload_displayText
	{
		category = "$STR_ace_common_ACEKeybindCategoryWeapons";
		typeName = "BOOL";
		isClientSettable = 1;
		value = 1;
		displayName = "$STR_ace_reload_SettingDisplayTextName";
		description = "$STR_ace_reload_SettingDisplayTextDesc";
	};
};
class ACE_UI
{
	class ammoCount
	{
		class conditions
		{
			ace_reload = "cameraOn == (getConnectedUAV ACE_player)";
		};
	};
};
