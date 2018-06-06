////////////////////////////////////////////////////////////////////
//DeRap: ace_spottingscope\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:08 2018 : 'file' last modified on Mon Apr 16 21:48:09 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_spottingscope
	{
		name = "ACE3 - Spotting Scope";
		units[] = {"ACE_B_SpottingScope","ACE_O_SpottingScope","ACE_I_SpottingScope","ACE_B_T_SpottingScope","ACE_O_T_SpottingScope","ACE_Item_SpottingScope"};
		weapons[] = {"ACE_SpottingScope"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_apl","ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Rocko","Scubaman3D","Ruthberg","commy2","p1nga"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_spottingscope
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\spottingscope\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_spottingscope
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\spottingscope\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_spottingscope
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\spottingscope\XEH_postInit.sqf'";
	};
};
class Extended_Init_EventHandlers
{
	class ACE_SpottingScopeObject
	{
		class ace_spottingscope
		{
			init = "_this call ace_dragging_fnc_initObject";
		};
	};
};
class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ace_spottingscope_place
				{
					displayName = "$STR_ace_spottingscope_Placedown";
					condition = "[_player,'ACE_SpottingScope'] call ace_common_fnc_hasItem";
					statement = "[_player,'ACE_SpottingScope'] call ace_spottingscope_fnc_place";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\spottingscope\UI\w_spottingscope_ca.paa";
				};
			};
		};
	};
	class ThingX;
	class ACE_SpottingScope_Tube: ThingX
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		displayName = "$STR_ace_spottingscope_DisplayName";
		model = "\z\ace\addons\spottingscope\data\ace_spottingscope_tube.p3d";
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class ACE_Actions
		{
			class ACE_MainActions;
		};
	};
	class StaticATWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions{};
		};
	};
	class ACE_SpottingScopeObject: StaticATWeapon
	{
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1,0};
		ace_dragging_dragDirection = 0;
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				selection = "main_turret_axis";
				class ACE_Pickup
				{
					selection = "";
					displayName = "$STR_ace_spottingscope_PickUp";
					distance = 5;
					condition = "(alive _target) && (count (crew _target) == 0)";
					statement = "[_target,_player] call ace_spottingscope_fnc_pickup";
					showDisabled = 0;
					exceptions[] = {};
					priority = 5;
					icon = "\z\ace\addons\spottingscope\UI\w_spottingscope_ca.paa";
				};
			};
		};
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base{};
		};
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		side = 1;
		typicalCargo[] = {"Soldier"};
		displayName = "$STR_ace_spottingscope_DisplayName";
		model = "\z\ace\addons\spottingscope\data\ace_spottingscope.p3d";
		mapSize = 0.5;
		transportSoldier = 0;
		getInAction = "PlayerProne";
		getOutAction = "PlayerProne";
		editorSubcategory = "EdSubcat_Turrets";
		threat[] = {0.7,0.3,0};
		accuracy = 0.12;
		cost = 10000;
		icon = "\A3\Static_F_Gamma\data\UI\map_StaticTurret_AT_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_SF_s"};
				speechPlural[] = {"veh_infantry_SF_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound = "veh_infantry_SF_s";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn = -45;
				maxTurn = 45;
				initTurn = 0;
				minElev = -10;
				maxElev = 40;
				initElev = 0;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.75;
					minFov = 0.25;
					maxFov = 1.25;
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.0025;
					maxFov = 0.05;
					initFov = 0.05;
				};
				weapons[] = {};
				magazines[] = {};
				gunnerOpticsColor[] = {1,1,1,1};
				gunnerOpticsModel = "\A3\Weapons_F\empty";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsShowCursor = 0;
				gunnerAction = "ACE_SpottingScope";
				gunnerGetInAction = "PlayerProne";
				gunnerGetOutAction = "PlayerProne";
				gunnerForceOptics = 0;
				ejectDeadGunner = 0;
				turretInfoType = "ace_spottingscope_RscUnitInfo";
				opticsDisablePeripherialVision = 1;
			};
		};
		armor = 80;
		class Damage
		{
			tex[] = {};
			mat[] = {"z\ace\addons\spottingscope\data\ace_spottingscope_metal.rvmat","z\ace\addons\spottingscope\data\ace_spottingscope_metal_damage.rvmat","z\ace\addons\spottingscope\data\ace_spottingscope_metal_destruct.rvmat","z\ace\addons\spottingscope\data\ace_spottingscope_glass.rvmat","z\ace\addons\spottingscope\data\ace_spottingscope_glass_damage.rvmat","z\ace\addons\spottingscope\data\ace_spottingscope_glass_destruct.rvmat","z\ace\addons\spottingscope\data\ace_spottingscope_rubber.rvmat","z\ace\addons\spottingscope\data\ace_spottingscope_rubber_damage.rvmat","z\ace\addons\spottingscope\data\ace_spottingscope_rubber_damage.rvmat"};
		};
		editorPreview = "\z\ace\addons\spottingscope\data\preview_spottingscope.jpg";
	};
	class ACE_B_SpottingScope: ACE_SpottingScopeObject
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_B_SpottingScope";
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_spotter_F";
	};
	class ACE_O_SpottingScope: ACE_SpottingScopeObject
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_O_SpottingScope";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_spotter_F";
	};
	class ACE_I_SpottingScope: ACE_SpottingScopeObject
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_I_SpottingScope";
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_spotter_F";
	};
	class ACE_B_T_SpottingScope: ACE_SpottingScopeObject
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_B_T_SpottingScope";
		scope = 2;
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Spotter_F";
	};
	class ACE_O_T_SpottingScope: ACE_SpottingScopeObject
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_O_T_SpottingScope";
		scope = 2;
		side = 0;
		faction = "OPF_T_F";
		crew = "O_T_Spotter_F";
	};
	class Item_Base_F;
	class ACE_Item_SpottingScope: Item_Base_F
	{
		author[] = {"Rocko","Scubaman3D"};
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_spottingscope_DisplayName";
		vehicleClass = "Items";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		editorPreview = "\z\ace\addons\spottingscope\data\preview_spottingscope.jpg";
		class TransportItems
		{
			class _xx_ACE_SpottingScope
			{
				name = "ACE_SpottingScope";
				count = 1;
			};
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_SpottingScope
			{
				name = "ACE_SpottingScope";
				count = 2;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_SpottingScope: ACE_ItemCore
	{
		scope = 2;
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_spottingscope_DisplayName";
		descriptionShort = "";
		picture = "\z\ace\addons\spottingscope\UI\w_spottingscope_ca.paa";
		model = "\z\ace\addons\spottingscope\data\ace_spottingscope.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 40;
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ACE_SpottingScope = "ACE_SpottingScope";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class ACE_KIA_SpottingScope: DefaultDie
		{
			actions = "DeadActions";
			file = "\A3\anims_f\Data\Anim\Sdr\dth\pne\stp\ras\Rfl\AdthPpneMstpSrasWrflDnon_1";
			speed = 1;
			looped = "false";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class Crew;
		class ACE_SpottingScope: Crew
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\pne\stp\non\non\AmovPpneMstpSnonWnonDnon";
			interpolateTo[] = {"ACE_KIA_SpottingScope",1};
		};
	};
};
class RscOpticsValue;
class RscMapControl;
class RscText;
class RscPicture;
class RscInGameUI
{
	class RscUnitInfo;
	class ace_spottingscope_RscUnitInfo: RscUnitInfo
	{
		onLoad = "[""onLoad"",_this,""RscUnitInfo"",'IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); {((_this select 0) displayCtrl _x) ctrlShow false} forEach [10000,10001,10002,10003]";
		controls[] = {"CA_FOVMode","ScriptedReticleHelper","trippleHeadLeft","trippleHeadRight","Reticle","Body"};
		class CA_FOVMode: RscOpticsValue
		{
			idc = 154;
			w = 0;
			h = 0;
		};
		class ScriptedReticleHelper: RscMapControl
		{
			onDraw = "ctrlParent (_this select 0) call ace_spottingscope_fnc_animateReticle";
			idc = -1;
			w = 0;
			h = 0;
		};
		class Reticle: RscPicture
		{
			idc = 10000;
			text = "\z\ace\addons\spottingscope\rsc\spotting_scope_reticle_co.paa";
			x = "safezoneX + 0.5 * safezoneW - 0.5 * (1.05) / (getResolution select 5)";
			y = "safezoneY + 0.5 * safezoneH - 0.5 * (1.05) / (getResolution select 5) * 4/3";
			w = "(1.05) / (getResolution select 5)";
			h = "(1.05) / (getResolution select 5) * 4/3";
		};
		class Body: Reticle
		{
			idc = 10001;
			text = "\z\ace\addons\spottingscope\rsc\spotting_scope_body_co.paa";
		};
		class trippleHeadLeft: RscText
		{
			idc = 10002;
			x = "safeZoneXAbs";
			Y = "safezoneY";
			w = "safezoneX + 0.5 * safezoneW - 0.5 * (1.05) / (getResolution select 5)- safeZoneXAbs";
			h = "safeZoneH";
			colorBackground[] = {0,0,0,1};
		};
		class trippleHeadRight: trippleHeadLeft
		{
			idc = 10003;
			x = "safeZoneXAbs + safeZoneWAbs - (safezoneX + 0.5 * safezoneW - 0.5 * (1.05) / (getResolution select 5)- safeZoneXABS)";
		};
	};
};
