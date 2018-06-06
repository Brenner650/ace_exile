////////////////////////////////////////////////////////////////////
//DeRap: ace_hearing\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:59 2018 : 'file' last modified on Mon Apr 16 21:44:30 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_hearing
	{
		name = "ACE3 - Hearing";
		units[] = {};
		weapons[] = {"ACE_EarPlugs"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"KoffeinFlummi","esteldunedain","HopeJ","commy2","Rocko","Rommel","Ruthberg"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		ammo[] = {"B_127x108_Ball"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_hearing
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\hearing\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_hearing
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\hearing\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_hearing
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\hearing\XEH_postInit.sqf'";
	};
};
class Extended_Init_EventHandlers
{
	class CAManBase
	{
		class ace_hearing_AddEarPlugs
		{
			serverInit = "_this call ace_hearing_fnc_addEarPlugs";
		};
	};
};
class Extended_Respawn_EventHandlers
{
	class CAManBase
	{
		class ace_hearing
		{
			respawn = "_this call ace_hearing_fnc_handleRespawn";
		};
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
				class ACE_PutInEarplugs
				{
					displayName = "$STR_ace_hearing_EarPlugs_On";
					condition = "ace_hearing_EnableCombatDeafness&& {!([_player] call ace_hearing_fnc_hasEarPlugsIn) && {'ACE_EarPlugs' in items _player}}";
					exceptions[] = {"isNotSwimming","isNotInside","isNotSitting"};
					statement = "[_player] call ace_hearing_fnc_putInEarPlugs";
					showDisabled = 0;
					priority = 2.5;
					icon = "\z\ace\addons\hearing\UI\ACE_earplugs_x_ca.paa";
				};
				class ACE_RemoveEarplugs
				{
					displayName = "$STR_ace_hearing_EarPlugs_Off";
					condition = "ace_hearing_EnableCombatDeafness&& {[_player] call ace_hearing_fnc_hasEarPlugsIn}";
					exceptions[] = {"isNotSwimming","isNotInside","isNotSitting"};
					statement = "[_player] call ace_hearing_fnc_removeEarPlugs";
					showDisabled = 0;
					priority = 2.5;
					icon = "\z\ace\addons\hearing\UI\ACE_earplugs_x_ca.paa";
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
		class TransportItems
		{
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 12;
			};
		};
	};
	class B_supplyCrate_F: ReammoBox_F
	{
		class TransportItems
		{
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 12;
			};
		};
	};
	class Box_East_Support_F: EAST_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 12;
			};
		};
	};
	class O_supplyCrate_F: B_supplyCrate_F
	{
		class TransportItems
		{
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 12;
			};
		};
	};
	class Box_IND_Support_F: IND_Box_Base
	{
		class TransportItems
		{
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 12;
			};
		};
	};
	class Box_FIA_Support_F: FIA_Box_Base_F
	{
		class TransportItems
		{
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 12;
			};
		};
	};
	class I_supplyCrate_F: B_supplyCrate_F
	{
		class TransportItems
		{
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 12;
			};
		};
	};
	class IG_supplyCrate_F: ReammoBox_F
	{
		class TransportItems
		{
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 12;
			};
		};
	};
	class C_supplyCrate_F: ReammoBox_F
	{
		class TransportItems
		{
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 12;
			};
		};
	};
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_EarPlugs
			{
				name = "ACE_EarPlugs";
				count = 12;
			};
		};
	};
	class ACE_Module;
	class ACE_ModuleHearing: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_hearing_Module_DisplayName";
		function = "ace_hearing_fnc_moduleHearing";
		scope = 1;
		isGlobal = 1;
		isSingular = 1;
		icon = "\z\ace\addons\hearing\UI\Icon_Module_Hearing_ca.paa";
		class Arguments
		{
			class EnableCombatDeafness
			{
				displayName = "$STR_ace_hearing_EnableCombatDeafness_DisplayName";
				description = "$STR_ace_hearing_EnableCombatDeafness_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class DisableEarRinging
			{
				displayName = "$STR_ace_hearing_DisableEarRinging_DisplayName";
				description = "$STR_ace_hearing_DisableEarRinging_Description";
				typeName = "NUMBER";
				class values
				{
					class DoNotForce
					{
						default = 1;
						name = "$STR_ace_common_DoNotForce";
						value = -1;
					};
					class IsDisabled
					{
						name = "$STR_ace_common_Yes";
						value = 1;
					};
				};
			};
			class enabledForZeusUnits
			{
				displayName = "$STR_ace_hearing_enabledForZeusUnits_DisplayName";
				description = "$STR_ace_hearing_enabledForZeusUnits_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class autoAddEarplugsToUnits
			{
				displayName = "$STR_ace_hearing_autoAddEarplugsToUnits_DisplayName";
				description = "$STR_ace_hearing_autoAddEarplugsToUnits_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_hearing_Module_Description";
		};
	};
};
class CfgSounds
{
	class ACE_EarRinging_Weak
	{
		sound[] = {"\z\ace\addons\hearing\sounds\ACE_earringing_weak.wav",8,1.7};
		titles[] = {};
	};
	class ACE_EarRinging_Medium
	{
		sound[] = {"\z\ace\addons\hearing\sounds\ACE_earringing_medium.wav",8,1.7};
		titles[] = {};
	};
	class ACE_EarRinging_Heavy
	{
		sound[] = {"\z\ace\addons\hearing\sounds\ACE_earringing_heavy.wav",8,1.7};
		titles[] = {};
	};
	class ACE_Combat_Deafness_Heavy
	{
		sound[] = {"\z\ace\addons\hearing\sounds\deafness.ogg",8,1};
		titles[] = {};
	};
	class ACE_Combat_Deafness_Medium
	{
		sound[] = {"\z\ace\addons\hearing\sounds\deafness.ogg",3,1};
		titles[] = {};
	};
	class ACE_Combat_Deafness_Heavy_NoRing
	{
		sound[] = {"\z\ace\addons\hearing\sounds\deafness_noring.ogg",8,1};
		titles[] = {};
	};
	class ACE_Combat_Deafness_Medium_NoRing
	{
		sound[] = {"\z\ace\addons\hearing\sounds\deafness_noring.ogg",3,1};
		titles[] = {};
	};
	class ACE_Ring_Backblast
	{
		sound[] = {"\z\ace\addons\hearing\sounds\backblast_ring.ogg",1,1};
		titles[] = {};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_EarPlugs: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_hearing_EarPlugs_Name";
		descriptionShort = "$STR_ace_hearing_EarPlugs_Description";
		model = "\z\ace\addons\hearing\data\ace_earplugs.p3d";
		picture = "\z\ace\addons\hearing\UI\ACE_earplugs_x_ca.paa";
		scope = 2;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class H_HelmetB;
	class H_HelmetCrew_B: H_HelmetB
	{
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.6;
	};
	class H_CrewHelmetHeli_B: H_HelmetB
	{
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.6;
	};
	class H_PilotHelmetHeli_B: H_HelmetB
	{
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.6;
	};
	class H_PilotHelmetFighter_B: H_HelmetB
	{
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.6;
	};
	class HelmetBase;
	class H_Cap_headphones: HelmetBase
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0.5;
	};
	class H_Construction_earprot_base_F: HelmetBase
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0.5;
	};
	class H_Construction_headset_base_F: HelmetBase
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0.5;
	};
	class H_EarProtectors_base_F: HelmetBase
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0.5;
	};
	class H_HeadSet_base_F: HelmetBase
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0.5;
	};
	class H_HelmetB_light: H_HelmetB
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class H_HelmetB_camo: H_HelmetB
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class H_HelmetB_plain_mcamo;
	class H_HelmetSpecB: H_HelmetB_plain_mcamo
	{
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_127x108_Ball: BulletBase
	{
		audibleFire = 15;
	};
};
class ACE_Settings
{
	class ace_hearing_enableCombatDeafness
	{
		category = "$STR_ace_hearing_Module_DisplayName";
		value = 1;
		typeName = "BOOL";
		displayName = "$STR_ace_hearing_EnableCombatDeafness_DisplayName";
		description = "$STR_ace_hearing_EnableCombatDeafness_Description";
	};
	class ace_hearing_earplugsVolume
	{
		category = "$STR_ace_hearing_Module_DisplayName";
		displayName = "$STR_ace_hearing_earplugsVolume_DisplayName";
		description = "$STR_ace_hearing_earplugsVolume_Description";
		value = 0.5;
		typeName = "SCALAR";
		sliderSettings[] = {0,1,0.5,1};
	};
	class ace_hearing_unconsciousnessVolume
	{
		category = "$STR_ace_hearing_Module_DisplayName";
		displayName = "$STR_ace_hearing_unconsciousnessVolume_DisplayName";
		description = "$STR_ace_hearing_unconsciousnessVolume_Description";
		value = 0.4;
		typeName = "SCALAR";
		sliderSettings[] = {0,1,0.4,1};
	};
	class ace_hearing_disableEarRinging
	{
		category = "$STR_ace_hearing_Module_DisplayName";
		value = 0;
		typeName = "BOOL";
		isClientSettable = 1;
		displayName = "$STR_ace_hearing_DisableEarRinging_DisplayName";
		description = "$STR_ace_hearing_DisableEarRinging_Description";
	};
	class ace_hearing_enabledForZeusUnits
	{
		category = "$STR_ace_hearing_Module_DisplayName";
		value = 1;
		typeName = "BOOL";
		displayName = "$STR_ace_hearing_enabledForZeusUnits_DisplayName";
		description = "$STR_ace_hearing_enabledForZeusUnits_Description";
	};
	class ace_hearing_autoAddEarplugsToUnits
	{
		category = "$STR_ace_hearing_Module_DisplayName";
		value = 1;
		typeName = "BOOL";
		displayName = "$STR_ace_hearing_autoAddEarplugsToUnits_DisplayName";
		description = "$STR_ace_hearing_autoAddEarplugsToUnits_Description";
	};
};
class ace_arsenal_stats
{
	class statBase;
	class ACE_hearingProtection: statBase
	{
		scope = 2;
		priority = 2;
		stats[] = {"ace_hearing_protection"};
		displayName = "$STR_ace_hearing_statHearingProtection";
		showBar = 1;
		barStatement = "[(_this select 0) select 0,_this select 1,[[0,1],[0.01,1],false]] call ace_arsenal_fnc_statBarStatement_default";
		tabs[] = {{6},{}};
	};
	class ACE_volumeMuffling: statBase
	{
		scope = 2;
		priority = 1;
		stats[] = {"ace_hearing_lowerVolume"};
		displayName = "$STR_ace_hearing_statHearingLowerVolume";
		showBar = 1;
		barStatement = "[(_this select 0) select 0,_this select 1,[[0,1],[0.01,1],false]] call ace_arsenal_fnc_statBarStatement_default";
		tabs[] = {{6},{}};
	};
};
