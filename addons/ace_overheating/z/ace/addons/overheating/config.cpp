////////////////////////////////////////////////////////////////////
//DeRap: ace_overheating\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:06 2018 : 'file' last modified on Mon Apr 16 21:47:16 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_overheating
	{
		name = "ACE3 - Overheating";
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
		magazines[] = {"ACE_SpareBarrel"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_overheating
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\overheating\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_overheating
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\overheating\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_overheating
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\overheating\XEH_postInit.sqf'";
	};
};
class CfgSounds
{
	class ACE_BarrelSwap
	{
		sound[] = {"\z\ace\addons\overheating\sounds\barrelswap.ogg",5,1,200};
		titles[] = {};
	};
	class ace_overheating_jamming_rifle
	{
		name = "ace_overheating_jamming_rifle";
		sound[] = {"\z\ace\addons\overheating\sounds\jamming_rifle.wav",1,1};
		titles[] = {};
	};
	class ace_overheating_jamming_pistol
	{
		name = "ace_overheating_jamming_pistol";
		sound[] = {"\z\ace\addons\overheating\sounds\jamming_pistol.wav",1,1};
		titles[] = {};
	};
	class ace_overheating_fixing_rifle
	{
		name = "ace_overheating_fixing_rifle";
		sound[] = {"\z\ace\addons\overheating\sounds\fixing_rifle.wav",1,1};
		titles[] = {};
	};
	class ace_overheating_fixing_pistol
	{
		name = "ace_overheating_fixing_pistol";
		sound[] = {"\z\ace\addons\overheating\sounds\fixing_pistol.wav",1,1};
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
			class ACE_Equipment
			{
				class ace_overheating_UnJam
				{
					displayName = "$STR_ace_overheating_UnjamWeapon";
					condition = "ace_overheating_enabled&& {[_player] call ace_overheating_fnc_canUnjam}";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					statement = "[_player,currentMuzzle _player] call ace_overheating_fnc_clearJam;";
					showDisabled = 0;
					priority = 4;
					icon = "\z\ace\addons\common\UI\repack_ca.paa";
				};
				class ace_overheating_SwapBarrel
				{
					displayName = "$STR_ace_overheating_SwapBarrel";
					condition = "[_player,currentWeapon _player] call ace_overheating_fnc_canSwapBarrel";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					statement = "[_player,_player,currentWeapon _player] call ace_overheating_fnc_swapBarrel;";
					showDisabled = 0;
					priority = 3;
					icon = "\z\ace\addons\overheating\UI\spare_barrel_ca.paa";
				};
				class ace_overheating_CheckTemperature
				{
					displayName = "$STR_ace_overheating_CheckTemperatureShort";
					condition = "ace_overheating_enabled&& {switch (currentWeapon _player) do {case (''): {false}; case (primaryWeapon _player); case (handgunWeapon _player): {true}; default {false}}}";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					statement = "[_player,_player,currentWeapon _player] call ace_overheating_fnc_checkTemperature;";
					showDisabled = 0;
					priority = 2.9;
					icon = "\z\ace\addons\overheating\UI\temp_ca.paa";
				};
				class ace_overheating_CheckTemperatureSpareBarrels
				{
					displayName = "$STR_ace_overheating_CheckTemperatureSpareBarrelsShort";
					condition = "(_player) call ace_overheating_fnc_canCheckSpareBarrelsTemperatures";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					statement = "[_player] call ace_overheating_fnc_checkSpareBarrelsTemperatures;";
					showDisabled = 0;
					priority = 2.8;
					icon = "\z\ace\addons\overheating\UI\temp_ca.paa";
				};
			};
		};
		class ACE_Actions
		{
			class ACE_Weapon
			{
				class ace_overheating_SwapBarrel
				{
					displayName = "$STR_ace_overheating_SwapBarrel";
					condition = "[_player,currentWeapon _target] call ace_overheating_fnc_canSwapBarrel";
					statement = "[_player,_target,currentWeapon _target] call ace_overheating_fnc_swapBarrelAssistant;";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					icon = "\z\ace\addons\overheating\UI\spare_barrel_ca.paa";
				};
				class ace_overheating_CheckTemperature
				{
					displayName = "$STR_ace_overheating_CheckTemperatureShort";
					condition = "ace_overheating_enabled&& {switch (currentWeapon _target) do {case ('ACE_FakePrimaryWeapon'); case (''): {false}; case (primaryWeapon _target); case (handgunWeapon _target): {true}; default {false}}}";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					statement = "[_player,_target,currentWeapon _target] call ace_overheating_fnc_checkTemperature;";
					icon = "\z\ace\addons\overheating\UI\temp_ca.paa";
				};
			};
		};
	};
	class ReammoBox_F;
	class NATO_Box_Base;
	class EAST_Box_Base;
	class IND_Box_Base;
	class FIA_Box_Base_F;
	class Box_NATO_Support_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 2;
			};
		};
	};
	class B_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 2;
			};
		};
	};
	class Box_East_Support_F: EAST_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 2;
			};
		};
	};
	class O_supplyCrate_F: B_supplyCrate_F
	{
		class TransportMagazines
		{
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 2;
			};
		};
	};
	class Box_IND_Support_F: IND_Box_Base
	{
		class TransportMagazines
		{
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 2;
			};
		};
	};
	class Box_FIA_Support_F: FIA_Box_Base_F
	{
		class TransportMagazines
		{
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 2;
			};
		};
	};
	class I_supplyCrate_F: B_supplyCrate_F
	{
		class TransportMagazines
		{
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 2;
			};
		};
	};
	class IG_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 2;
			};
		};
	};
	class C_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 2;
			};
		};
	};
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportMagazines
		{
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 6;
			};
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class ACE_SpareBarrel: CA_Magazine
	{
		displayName = "$STR_ace_overheating_SpareBarrelName";
		author = "$STR_ace_common_ACETeam";
		scope = 2;
		descriptionshort = "$STR_ace_overheating_SpareBarrelDescription";
		picture = "\z\ace\addons\overheating\UI\spare_barrel_ca.paa";
		count = 1;
		mass = 60;
		ACE_isUnique = 1;
	};
};
class CfgWeapons
{
	class RifleCore;
	class Rifle: RifleCore
	{
		ace_overheating_mrbs = 3000;
		ace_overheating_dispersion = 1;
		ace_overheating_slowdownFactor = 1;
	};
	class Rifle_Base_F: Rifle{};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		ace_overheating_dispersion = 0.75;
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		ACE_clearJamAction = "GestureReloadMX";
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		ACE_clearJamAction = "";
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_dispersion = 0.75;
	};
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
	};
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
	};
};
class ACE_Settings
{
	class ace_overheating_displayTextOnJam
	{
		category = "$STR_ace_overheating_DisplayName";
		typeName = "BOOL";
		isClientSettable = 1;
		value = 1;
		displayName = "$STR_ace_overheating_DisplayTextOnJam_displayName";
		description = "$STR_ace_overheating_DisplayTextOnJam_description";
	};
	class ace_overheating_showParticleEffects
	{
		category = "$STR_ace_overheating_DisplayName";
		typeName = "BOOL";
		isClientSettable = 1;
		value = 1;
		displayName = "$STR_ace_overheating_showParticleEffects_displayName";
		description = "$STR_ace_overheating_showParticleEffects_description";
	};
	class ace_overheating_showParticleEffectsForEveryone
	{
		category = "$STR_ace_overheating_DisplayName";
		typeName = "BOOL";
		isClientSettable = 1;
		value = 0;
		displayName = "$STR_ace_overheating_showParticleEffectsForEveryone_displayName";
		description = "$STR_ace_overheating_showParticleEffectsForEveryone_description";
	};
	class ace_overheating_overheatingDispersion
	{
		category = "$STR_ace_overheating_DisplayName";
		typeName = "BOOL";
		value = 1;
		displayName = "$STR_ace_overheating_overheatingDispersion_displayName";
		description = "$STR_ace_overheating_overheatingDispersion_description";
	};
	class ace_overheating_unJamOnreload
	{
		category = "$STR_ace_overheating_DisplayName";
		typeName = "BOOL";
		value = 0;
		displayName = "$STR_ace_overheating_unJamOnreload_displayName";
		description = "$STR_ace_overheating_unJamOnreload_description";
	};
	class ace_overheating_unJamFailChance
	{
		category = "$STR_ace_overheating_DisplayName";
		typeName = "SCALAR";
		value = 0.1;
		displayName = "$STR_ace_overheating_unJamFailChance_displayName";
		description = "$STR_ace_overheating_unJamFailChance_description";
		sliderSettings[] = {0,1,0.1,2};
	};
	class ace_overheating_enabled
	{
		category = "$STR_ace_overheating_DisplayName";
		typeName = "BOOL";
		value = 1;
		displayName = "$STR_ace_overheating_enabled_displayName";
		description = "$STR_ace_overheating_enabled_description";
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		ace_overheating_GestureMountMuzzle = "ace_overheating_GestureMountMuzzle";
		ace_overheating_GestureDismountMuzzle = "ace_overheating_GestureDismountMuzzle";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			ace_overheating_GestureMountMuzzle[] = {"ace_overheating_GestureMountMuzzle","Gesture"};
			ace_overheating_GestureDismountMuzzle[] = {"ace_overheating_GestureDismountMuzzle","Gesture"};
		};
	};
};
class CfgGesturesMale
{
	class States
	{
		class GestureMountMuzzle;
		class ace_overheating_GestureMountMuzzle: GestureMountMuzzle
		{
			speed = 0.3;
		};
		class GestureDismountMuzzle;
		class ace_overheating_GestureDismountMuzzle: GestureDismountMuzzle
		{
			speed = 0.3;
		};
	};
};
