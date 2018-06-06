////////////////////////////////////////////////////////////////////
//DeRap: ace_advanced_fatigue\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:11 2018 : 'file' last modified on Mon Apr 16 21:40:22 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_advanced_fatigue
	{
		name = "ACE3 - Advanced Fatigue";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"BaerMitUmlaut"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_advanced_fatigue_enabled
	{
		category = "$STR_ace_advanced_fatigue_DisplayName";
		displayName = "$STR_ace_advanced_fatigue_Enabled";
		description = "$STR_ace_advanced_fatigue_Enabled_Description";
		typeName = "BOOL";
		value = 1;
	};
	class ace_advanced_fatigue_enableStaminaBar
	{
		category = "$STR_ace_advanced_fatigue_DisplayName";
		displayName = "$STR_ace_advanced_fatigue_EnableStaminaBar";
		description = "$STR_ace_advanced_fatigue_EnableStaminaBar_Description";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
	};
	class ace_advanced_fatigue_performanceFactor
	{
		category = "$STR_ace_advanced_fatigue_DisplayName";
		displayName = "$STR_ace_advanced_fatigue_PerformanceFactor";
		description = "$STR_ace_advanced_fatigue_PerformanceFactor_Description";
		typeName = "SCALAR";
		value = 1;
		sliderSettings[] = {0,5,1,1};
	};
	class ace_advanced_fatigue_recoveryFactor
	{
		category = "$STR_ace_advanced_fatigue_DisplayName";
		displayName = "$STR_ace_advanced_fatigue_RecoveryFactor";
		description = "$STR_ace_advanced_fatigue_RecoveryFactor_Description";
		typeName = "SCALAR";
		value = 1;
		sliderSettings[] = {0,5,1,1};
	};
	class ace_advanced_fatigue_loadFactor
	{
		category = "$STR_ace_advanced_fatigue_DisplayName";
		displayName = "$STR_ace_advanced_fatigue_LoadFactor";
		description = "$STR_ace_advanced_fatigue_LoadFactor_Description";
		typeName = "SCALAR";
		value = 1;
		sliderSettings[] = {0,5,1,1};
	};
	class ace_advanced_fatigue_terrainGradientFactor
	{
		category = "$STR_ace_advanced_fatigue_DisplayName";
		displayName = "$STR_ace_advanced_fatigue_TerrainGradientFactor";
		description = "$STR_ace_advanced_fatigue_TerrainGradientFactor_Description";
		typeName = "SCALAR";
		value = 1;
		sliderSettings[] = {0,5,1,1};
	};
};
class Cfg3DEN
{
	class Attributes
	{
		class Slider;
		class ace_advanced_fatigue_slider: Slider
		{
			attributeLoad = "params [""_ctrlGroup""]; private _slider = _ctrlGroup controlsGroupCtrl 100; private _edit = _ctrlGroup controlsGroupCtrl 101; _slider sliderSetPosition _value; _edit ctrlSetText ([_value, 1, 1] call CBA_fnc_formatNumber); ";
			attributeSave = "params [""_ctrlGroup""]; sliderPosition (_ctrlGroup controlsGroupCtrl 100); ";
			onLoad = "params [""_ctrlGroup""]; private _slider = _ctrlGroup controlsGroupCtrl 100; private _edit = _ctrlGroup controlsGroupCtrl 101; _slider sliderSetRange [0, 2]; _slider ctrlAddEventHandler [""SliderPosChanged"", { params [""_slider""]; private _edit = (ctrlParentControlsGroup _slider) controlsGroupCtrl 101; private _value = sliderPosition _slider;  _edit ctrlSetText ([_value, 1, 1] call CBA_fnc_formatNumber); }]; _edit ctrlAddEventHandler [""KillFocus"", { params [""_edit""]; private _slider = (ctrlParentControlsGroup _edit) controlsGroupCtrl 100; private _value = ((parseNumber ctrlText _edit) min 2) max 0; _slider sliderSetPosition _value; _edit ctrlSetText str _value; }];";
		};
	};
	class Object
	{
		class AttributeCategories
		{
			class ace_attributes
			{
				class Attributes
				{
					class ace_advanced_fatigue_performanceFactor
					{
						property = "ace_advanced_fatigue_performanceFactor";
						control = "ace_advanced_fatigue_slider";
						displayName = "$STR_ace_advanced_fatigue_PerformanceFactor";
						tooltip = "$STR_ace_advanced_fatigue_PerformanceFactor_EdenDescription";
						expression = "_this setVariable [""ace_advanced_fatigue_performanceFactor"",_value,true]";
						typeName = "NUMBER";
						condition = "objectControllable";
						defaultValue = 1;
					};
				};
			};
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_advanced_fatigue
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\advanced_fatigue\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_advanced_fatigue
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\advanced_fatigue\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_advanced_fatigue
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\advanced_fatigue\XEH_postInit.sqf'";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMission
	{
		ace_advanced_fatigue = "call ace_advanced_fatigue_fnc_createStaminaBar";
	};
};
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AmovPercMstpSlowWrflDnon;
		class AmovPercMrunSlowWrflDf: AmovPercMstpSlowWrflDnon
		{
			speed = 0.63457;
		};
		class AmovPercMrunSlowWrflDfl: AmovPercMrunSlowWrflDf
		{
			speed = 0.63457;
		};
		class AmovPercMrunSlowWrflDl: AmovPercMrunSlowWrflDfl
		{
			speed = 0.691626;
		};
		class AmovPercMrunSlowWrflDr: AmovPercMrunSlowWrflDfl
		{
			speed = 0.727404;
		};
		class AmovPercMstpSrasWrflDnon;
		class AmovPercMrunSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			speed = 0.677068;
		};
		class AmovPercMwlkSlowWrflDf_ver2;
		class AmovPercMwlkSlowWrflDfl_ver2;
		class AmovPercMtacSlowWrflDf_ver2: AmovPercMwlkSlowWrflDf_ver2
		{
			speed = 0.528808;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDf";
		};
		class AmovPercMtacSlowWrflDfl_ver2: AmovPercMwlkSlowWrflDfl_ver2
		{
			speed = 0.528808;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDfl";
		};
		class AmovPercMtacSlowWrflDfr_ver2: AmovPercMtacSlowWrflDf_ver2
		{
			speed = 0.528808;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDfr";
		};
		class AmovPercMtacSlowWrflDr_ver2: AmovPercMtacSlowWrflDf_ver2
		{
			speed = 0.528808;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDr";
		};
		class AmovPercMtacSlowWrflDl_ver2: AmovPercMtacSlowWrflDf_ver2
		{
			speed = 0.528808;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDl";
		};
		class AmovPercMtacSlowWrflDb_ver2: AmovPercMtacSlowWrflDf_ver2
		{
			speed = 0.684541;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDb";
			soundEdge[] = {0.25,0.5,0.75,1};
		};
		class AmovPercMtacSlowWrflDbl_ver2: AmovPercMtacSlowWrflDb_ver2
		{
			speed = 0.684541;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDbl";
		};
		class AmovPercMtacSlowWrflDbr_ver2: AmovPercMtacSlowWrflDb_ver2
		{
			speed = 0.684541;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\low\Rfl\AmovPercMrunSlowWrflDbr";
		};
	};
};
class CfgSounds
{
	class ace_advanced_fatigue_breathLow0
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Low_1",0.6,1,7};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathLow1
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Low_2",0.6,1,7};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathLow2
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Low_3",0.6,1,7};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathLow3
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Low_4",0.6,1,7};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathLow4
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Low_5",0.6,1,7};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathLow5
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Low_6",0.6,1,7};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathMid0
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Mid_1",0.8,1,13};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathMid1
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Mid_2",0.8,1,13};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathMid2
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Mid_3",0.8,1,13};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathMid3
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Mid_4",0.8,1,13};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathMid4
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Mid_5",0.8,1,13};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathMid5
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Mid_6",0.8,1,13};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathMax0
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Max_1",1,1,17};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathMax1
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Max_2",1,1,17};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathMax2
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Max_3",1,1,17};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathMax3
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Max_4",1,1,17};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathMax4
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Max_5",1,1,17};
		titles[] = {};
	};
	class ace_advanced_fatigue_breathMax5
	{
		sound[] = {"A3\sounds_f\characters\human-sfx\P04\Breath_Max_6",1,1,17};
		titles[] = {};
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ace_advanced_fatigue_moduleSettings: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_advanced_fatigue_DisplayName";
		function = "ace_advanced_fatigue_fnc_moduleSettings";
		scope = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		icon = "\z\ace\addons\advanced_fatigue\UI\Icon_Module.paa";
		class Arguments
		{
			class Enabled
			{
				displayName = "$STR_ace_advanced_fatigue_Enabled";
				description = "$STR_ace_advanced_fatigue_Enabled_Description";
				typeName = "BOOL";
				defaultValue = 1;
			};
			class PerformanceFactor
			{
				displayName = "$STR_ace_advanced_fatigue_PerformanceFactor";
				description = "$STR_ace_advanced_fatigue_PerformanceFactor_Description";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class RecoveryFactor
			{
				displayName = "$STR_ace_advanced_fatigue_RecoveryFactor";
				description = "$STR_ace_advanced_fatigue_RecoveryFactor_Description";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class LoadFactor
			{
				displayName = "$STR_ace_advanced_fatigue_LoadFactor";
				description = "$STR_ace_advanced_fatigue_LoadFactor_Description";
				typeName = "NUMBER";
				defaultValue = 1;
			};
			class TerrainGradientFactor
			{
				displayName = "$STR_ace_advanced_fatigue_TerrainGradientFactor";
				description = "$STR_ace_advanced_fatigue_TerrainGradientFactor_Description";
				typeName = "NUMBER";
				defaultValue = 1;
			};
		};
	};
};
class RscControlsGroupNoScrollbars;
class RscPicture;
class ace_advanced_fatigue_StaminaBarContainer: RscControlsGroupNoScrollbars
{
	x = "(profilenamespace getvariable [""IGUI_GRID_STAMINA_X"", ((safezoneX + safezoneW) - (10 * (((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * (((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_STAMINA_Y"", (safezoneY + 4.05 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
	h = "0.15 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class Controls
	{
		class StaminaBar: RscPicture
		{
			idc = 10;
			x = 0;
			y = 0;
			w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.15 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscUnitInfo\stamina_ca.paa";
		};
	};
};
