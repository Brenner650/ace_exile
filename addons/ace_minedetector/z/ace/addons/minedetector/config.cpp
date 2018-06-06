////////////////////////////////////////////////////////////////////
//DeRap: ace_minedetector\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:03 2018 : 'file' last modified on Mon Apr 16 21:46:40 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_minedetector
	{
		name = "ACE3 - Mine Detector";
		units[] = {};
		weapons[] = {"ACE_VMH3","ACE_VMM3"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_explosives"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Grey","Glowbal","Rocko","esteldunedain"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		ammo[] = {"TimeBombCore","DirectionalBombBase","BoundingMineBase","MineBase","PipeBombBase"};
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_minedetector
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\minedetector\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_minedetector
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\minedetector\XEH_postInit.sqf'";
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class ACE_VMM3: Pistol_Base_F
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "VMM3";
		descriptionShort = "$STR_ace_minedetector_VMM3_Description";
		model = "\z\ace\addons\minedetector\ace_wallon_vmm3.p3d";
		picture = "\z\ace\addons\minedetector\data\equip\w_vmm3_ca.paa";
		magazines[] = {};
		modes[] = {"Single"};
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		class Single: Mode_SemiAuto
		{
			displayName = "";
			sounds[] = {};
			begin1[] = {"",1.77828,1,1000};
			soundBegin[] = {"begin1",1};
			reloadTime = 0.075;
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			holsterScale = 0;
			mass = 77;
			class CowsSlot{};
			class MuzzleSlot{};
		};
	};
	class ACE_VMH3: ACE_VMM3
	{
		scope = 2;
		displayName = "VMH3";
		author = "$STR_ace_common_ACETeam";
		model = "\z\ace\addons\minedetector\ace_wallon_vmh3.p3d";
		picture = "\z\ace\addons\minedetector\data\equip\w_vmh3_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 55;
		};
	};
};
class CfgAmmo
{
	class Default;
	class TimeBombCore: Default
	{
		ace_minedetector_detectable = 1;
	};
	class DirectionalBombCore;
	class DirectionalBombBase: DirectionalBombCore
	{
		ace_minedetector_detectable = 1;
	};
	class BoundingMineCore;
	class BoundingMineBase: BoundingMineCore
	{
		ace_minedetector_detectable = 1;
	};
	class MineCore;
	class MineBase: MineCore
	{
		ace_minedetector_detectable = 1;
	};
	class PipeBombCore;
	class PipeBombBase: PipeBombCore
	{
		ace_minedetector_detectable = 1;
	};
};
class CfgVehicles
{
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportWeapons
		{
			class _xx_ACE_VMM3
			{
				weapon = "ACE_VMM3";
				count = 4;
			};
			class _xx_ACE_VMH3
			{
				weapon = "ACE_VMH3";
				count = 4;
			};
		};
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ace_minedetector_metalDetector
				{
					displayName = "$STR_ace_minedetector_MetalDetector";
					condition = "[ACE_player] call ace_minedetector_fnc_hasDetector";
					statement = "";
					icon = "\z\ace\addons\minedetector\ui\icon_mineDetector.paa";
					exceptions[] = {};
					class ace_minedetector_activate
					{
						displayName = "$STR_ace_minedetector_ActivateDetector";
						condition = "call ace_minedetector_fnc_canActivateDetector";
						statement = "call ace_minedetector_fnc_activateDetector";
						icon = "\z\ace\addons\minedetector\ui\icon_mineDetectorOn.paa";
						exceptions[] = {};
					};
					class ace_minedetector_deactivate
					{
						displayName = "$STR_ace_minedetector_DeactivateDetector";
						condition = "call ace_minedetector_fnc_canDeactivateDetector";
						statement = "call ace_minedetector_fnc_deactivateDetector";
						icon = "\z\ace\addons\minedetector\ui\icon_mineDetectorOff.paa";
						exceptions[] = {};
					};
					class ace_minedetector_connectHeadphones
					{
						displayName = "$STR_ace_minedetector_ConnectHeadphones";
						condition = "call ace_minedetector_fnc_canConnectHeadphones";
						statement = "[ACE_player,true] call ace_minedetector_fnc_connectHeadphones";
						icon = "";
						exceptions[] = {};
					};
					class ace_minedetector_disconnectHeadphones
					{
						displayName = "$STR_ace_minedetector_DisconnectHeadphones";
						condition = "call ace_minedetector_fnc_canDisconnectHeadphones";
						statement = "[ACE_player,false] call ace_minedetector_fnc_connectHeadphones";
						icon = "";
						exceptions[] = {};
					};
				};
			};
		};
	};
	class Items_base_F;
	class ACE_Explosives_Place: Items_base_F
	{
		ace_minedetector_detectable = 1;
	};
	class Static;
	class MineGeneric: Static
	{
		ace_minedetector_detectable = 1;
	};
	class ModuleEmpty_F;
	class ModuleMine_F: ModuleEmpty_F
	{
		ace_minedetector_detectable = 1;
	};
};
class CfgSounds
{
	class ace_detector_1
	{
		name = "ace_detector_1";
		sound[] = {"\z\ace\addons\minedetector\sounds\metal_detector.wss","db+3",1};
		titles[] = {};
	};
	class ace_detector_2
	{
		name = "ace_detector_2";
		sound[] = {"\z\ace\addons\minedetector\sounds\metal_detector.wss","db+3",0.9};
		titles[] = {};
	};
	class ace_detector_3
	{
		name = "ace_detector_3";
		sound[] = {"\z\ace\addons\minedetector\sounds\metal_detector.wss","db+3",0.8};
		titles[] = {};
	};
	class ace_detector_4
	{
		name = "ace_detector_4";
		sound[] = {"\z\ace\addons\minedetector\sounds\metal_detector.wss","db+3",0.7};
		titles[] = {};
	};
};
class ACE_detector
{
	class detectors
	{
		class ACE_VMM3
		{
			radius = 2.5;
			sounds[] = {"ace_detector_1","ace_detector_2","ace_detector_3","ace_detector_4"};
		};
		class ACE_VMH3: ACE_VMM3{};
	};
};
