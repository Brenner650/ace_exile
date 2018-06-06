////////////////////////////////////////////////////////////////////
//DeRap: ace_spectator\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:08 2018 : 'file' last modified on Mon Apr 16 21:48:09 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_spectator
	{
		name = "ACE3 - Spectator";
		units[] = {"ace_spectator_virtual"};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"F3 Project","Head","SilentSpike","voiper"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_spectator_enableAI
	{
		category = "$STR_ace_spectator_Module_DisplayName";
		displayName = "$STR_ace_spectator_ai_DisplayName";
		description = "$STR_ace_spectator_ai_Description";
		typeName = "BOOL";
		value = 0;
	};
	class ace_spectator_restrictModes
	{
		category = "$STR_ace_spectator_Module_DisplayName";
		displayName = "$STR_ace_spectator_modes_DisplayName";
		description = "$STR_ace_spectator_modes_Description";
		typeName = "SCALAR";
		value = 0;
		values[] = {"$STR_ace_spectator_modes_all","$STR_ace_spectator_modes_unit","$STR_A3_Spectator_free_camera_tooltip","$STR_A3_Spectator_1pp_camera_tooltip","$STR_A3_Spectator_3pp_camera_tooltip"};
	};
	class ace_spectator_restrictVisions
	{
		category = "$STR_ace_spectator_Module_DisplayName";
		displayName = "$STR_ace_spectator_visions_DisplayName";
		description = "$STR_ace_spectator_visions_Description";
		typeName = "SCALAR";
		value = 0;
		values[] = {"$STR_ace_spectator_modes_all","$STR_ace_spectator_visions_nv","$STR_ace_spectator_visions_ti","$STR_Special_None"};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_spectator
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\spectator\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_spectator
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\spectator\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_spectator
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\spectator\XEH_postInit.sqf'";
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscRespawnCounter
	{
		ace_spectator = "_this call ace_spectator_fnc_compat_counter";
	};
	class RscDisplayEGSpectator
	{
		ace_spectator = "_this call ace_spectator_fnc_compat_spectatorBI";
	};
	class RscDisplayCurator
	{
		ace_spectator = "_this call ace_spectator_fnc_compat_zeus";
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ace_spectator_moduleSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_spectator_Settings_DisplayName";
		icon = "\z\ace\addons\spectator\data\Icon_Module_Spectator_ca.paa";
		category = "ACE";
		function = "ace_spectator_fnc_moduleSpectatorSettings";
		isGlobal = 1;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class enableAI
			{
				displayName = "$STR_ace_spectator_ai_DisplayName";
				description = "$STR_ace_spectator_ai_Description";
				typeName = "BOOL";
				defaultValue = 0;
			};
			class cameraModes
			{
				displayName = "$STR_ace_spectator_modes_DisplayName";
				description = "$STR_ace_spectator_modes_Description";
				typeName = "NUMBER";
				class values
				{
					class all
					{
						name = "$STR_ace_spectator_modes_all";
						value = 0;
						default = 1;
					};
					class unit
					{
						name = "$STR_ace_spectator_modes_unit";
						value = 1;
					};
					class free
					{
						name = "$STR_A3_Spectator_free_camera_tooltip";
						value = 2;
					};
					class internal
					{
						name = "$STR_A3_Spectator_1pp_camera_tooltip";
						value = 3;
					};
					class external
					{
						name = "$STR_A3_Spectator_3pp_camera_tooltip";
						value = 4;
					};
				};
			};
			class visionModes
			{
				displayName = "$STR_ace_spectator_visions_DisplayName";
				description = "$STR_ace_spectator_visions_Description";
				typeName = "NUMBER";
				class values
				{
					class all
					{
						name = "$STR_ace_spectator_modes_all";
						value = 0;
						default = 1;
					};
					class nv
					{
						name = "$STR_ace_spectator_visions_nv";
						value = 1;
					};
					class ti
					{
						name = "$STR_ace_spectator_visions_ti";
						value = 2;
					};
					class none
					{
						name = "$STR_Special_None";
						value = 3;
					};
				};
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_spectator_Settings_Description";
		};
	};
	class VirtualMan_F;
	class ace_spectator_virtual: VirtualMan_F
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_spectator_Settings_DisplayName";
		scope = 2;
		scopeArsenal = 0;
		scopeCurator = 0;
		weapons[] = {};
		delete ACE_Actions;
		delete ACE_SelfActions;
	};
};
class RscButton;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscListNBox
{
	class ScrollBar;
};
class RscMapControl;
class RscPicture;
class RscPictureKeepAspect;
class RscText;
class RscToolbox;
class RscTree;
class ace_common_CompassControl;
class ace_spectator_display
{
	idd = 60000;
	enableSimulation = 1;
	movingEnable = 0;
	closeOnMissionEnd = 1;
	onLoad = "_this call ace_spectator_fnc_ui_handleLoad";
	onKeyDown = "_this call ace_spectator_fnc_ui_handleKeyDown";
	onKeyUp = "_this call ace_spectator_fnc_ui_handleKeyUp";
	onMouseMoving = "_this call ace_spectator_fnc_ui_handleMouseMoving";
	onChildDestroyed = "_this call ace_spectator_fnc_ui_handleChildDestroyed";
	class ControlsBackground
	{
		class MouseHandler: RscText
		{
			idc = 60001;
			onMouseButtonDown = "_this call ace_spectator_fnc_ui_handleMouseButtonDown";
			onMouseButtonUp = "if ((_this select 1) == 1) then { ace_spectator_holdingRMB= false; };";
			onMouseButtonDblClick = "_this call ace_spectator_fnc_ui_handleMouseButtonDblClick";
			onMouseZChanged = "_this call ace_spectator_fnc_ui_handleMouseZChanged";
			text = "";
			x = "safeZoneXAbs";
			y = "safeZoneY";
			w = "safeZoneWAbs";
			h = "safeZoneH";
			colorBackground[] = {1,1,1,0};
			style = 16;
		};
	};
	class Controls
	{
		class List: RscTree
		{
			idc = 60003;
			onMouseEnter = "[false] call ace_spectator_fnc_ui_fadeList";
			onMouseExit = "[true] call ace_spectator_fnc_ui_fadeList";
			onTreeSelChanged = "[false,_this] call ace_spectator_fnc_ui_handleListClick";
			onTreeDblClick = "[true,_this] call ace_spectator_fnc_ui_handleListClick";
			x = "safeZoneX";
			y = "safeZoneY + (1.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			w = "(13.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = "safeZoneH - (1.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			disableKeyboardSearch = 1;
			multiselectEnabled = 0;
			colorBorder[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0.75};
			expandOnDoubleclick = 1;
			fade = 0.8;
			shadow = 1;
			colorLines[] = {0,0,0,0};
			class ScrollBar
			{
				width = 0;
				height = 0;
				scrollSpeed = 0.1;
				color[] = {1,1,1,0};
			};
		};
		class Tabs: RscToolbox
		{
			idc = 60004;
			onMouseEnter = "[false] call ace_spectator_fnc_ui_fadeList";
			onMouseExit = "[true] call ace_spectator_fnc_ui_fadeList";
			x = "safeZoneX";
			y = "safezoneY";
			w = "(13.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = "(1.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			fade = 0.5;
			rows = 1;
			columns = 1;
			strings[] = {"$STR_A3_Spectator_Entities"};
			values[] = {0};
			sizeEx = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			colorBackground[] = {0,0,0,0.75};
			colorSelectedBg[] = {0,0,0,0.65};
		};
		class CameraTypesGroup: RscControlsGroupNoScrollbars
		{
			idc = 60005;
			x = "((15.5 * (((safezoneW / safezoneH) min 1.2)/ 40))+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			y = "safezoneY + safezoneH - (2.38 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			w = "(8.6 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = 2.6;
			class controls
			{
				class CameraTypesBackground: RscText
				{
					x = "(0.6 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(0.4 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(7.5 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					colorBackground[] = {0,0,0,0.75};
				};
				class Free: RscButton
				{
					style = 48;
					idc = 60006;
					onButtonClick = "[0] call ace_spectator_fnc_cam_setCameraMode";
					x = "(1.3 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(0.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(1.63 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(1.37 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					colorBackground[] = {0,0,0,0};
					colorBackgroundDisabled[] = {0,0,0,0};
					colorBackgroundActive[] = {0,0,0,0};
					colorFocused[] = {0,0,0,0};
					text = "a3\Ui_f\data\GUI\Rsc\RscDisplayEGSpectator\FreeSelected.paa";
					tooltip = "$STR_A3_Spectator_free_camera_tooltip";
				};
				class Follow: RscButton
				{
					style = 48;
					idc = 60007;
					onButtonClick = "[2] call ace_spectator_fnc_cam_setCameraMode";
					x = "(3.6 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(0.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(1.63 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(1.37 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					colorBackground[] = {0,0,0,0};
					colorBackgroundDisabled[] = {0,0,0,0};
					colorBackgroundActive[] = {0,0,0,0};
					colorFocused[] = {0,0,0,0};
					text = "a3\Ui_f\data\GUI\Rsc\RscDisplayEGSpectator\FollowSelected.paa";
					tooltip = "$STR_A3_Spectator_3pp_camera_tooltip";
				};
				class Fps: RscButton
				{
					style = 48;
					idc = 60008;
					onButtonClick = "[1] call ace_spectator_fnc_cam_setCameraMode";
					x = "(5.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(0.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(1.63 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(1.37 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					colorBackground[] = {0,0,0,0};
					colorBackgroundDisabled[] = {0,0,0,0};
					colorBackgroundActive[] = {0,0,0,0};
					colorFocused[] = {0,0,0,0};
					text = "a3\Ui_f\data\GUI\Rsc\RscDisplayEGSpectator\FpsSelected.paa";
					tooltip = "$STR_A3_Spectator_1pp_camera_tooltip";
				};
			};
		};
		class MapGroup: RscControlsGroupNoScrollbars
		{
			idc = 60010;
			x = 0;
			y = 0.1;
			w = 1;
			h = 0.8;
			class controls
			{
				class MapHeader: RscText
				{
					x = 0;
					y = 0;
					w = 1;
					h = 0.05;
					colorBackground[] = {0,0,0,0.75};
				};
				class MapFooter: RscText
				{
					idc = 60012;
					x = 0;
					y = 0.75;
					w = 1;
					h = 0.05;
					text = "";
					style = 2;
					colorBackground[] = {0,0,0,0.75};
					sizeEx = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class GameTimeText: RscText
				{
					idc = 60002;
					x = 0.01;
					y = 0.76;
					w = 0.29;
					h = 0.03;
					text = "00:00:00";
					sizeEx = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class MapTitle: RscText
				{
					idc = 60011;
					x = 0.01;
					y = 0.01;
					w = 0.69;
					h = 0.03;
					text = "";
					colorText[] = {1,1,1,1};
					sizeEx = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class SpectatorsCount: RscText
				{
					idc = 60013;
					x = 0.97;
					y = 0.01;
					w = 0.03;
					h = 0.03;
					text = "";
					colorText[] = {1,1,1,1};
					sizeEx = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class SpectatorsIcon: RscPictureKeepAspect
				{
					x = 0.94;
					y = 0.01;
					w = 0.03;
					h = 0.03;
					text = "a3\Ui_f\data\GUI\Rsc\RscDisplayEGSpectator\Fps.paa";
				};
			};
		};
		class Map: RscMapControl
		{
			idc = 60014;
			onDraw = "_this call ace_spectator_fnc_ui_handleMapDraw";
			onMouseButtonClick = "_this call ace_spectator_fnc_ui_handleMapClick";
			x = 0;
			y = 0.15;
			w = 1;
			h = 0.7;
			maxSatelliteAlpha = 0.75;
			colorBackground[] = {1,1,1,1};
		};
		class HelpBackground: RscText
		{
			idc = 60020;
			x = "safezoneX + safezoneW - (12 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			y = "safezoneY + safezoneH - (8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			w = "(12 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = "(8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			colorBackground[] = {0,0,0,0.75};
		};
		class Help: RscListNBox
		{
			class ListScrollBar: ScrollBar{};
			disableOverflow = 0;
			rowHeight = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			idc = 60021;
			x = "safezoneX + safezoneW - (12 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			y = "safezoneY + safezoneH - (12 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			w = "(12 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = "(12 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
		};
		class FocusInfo: RscControlsGroupNoScrollbars
		{
			idc = 60030;
			x = "((12.9 * (((safezoneW / safezoneH) min 1.2)/ 40))+ (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2))";
			y = "((24 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))+ (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2)/ 1.2))/2))";
			w = "(14.2 * (((safezoneW / safezoneH) min 1.2)/ 40))";
			h = "(3.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
			class controls
			{
				class UpperBackground: RscText
				{
					x = 0;
					y = 0;
					w = "(14.2 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(1.4 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					colorBackground[] = {0,0,0,0.75};
				};
				class StatsBackground: RscText
				{
					x = 0;
					y = "(1.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(6 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					colorBackground[] = {0,0,0,0.75};
				};
				class WeaponBackground: RscText
				{
					x = "(6.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(1.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(6 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					colorBackground[] = {1,1,1,0.4};
				};
				class ThrowableBackground: RscText
				{
					x = "(12.2 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(1.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(2 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					colorBackground[] = {1,1,1,0.4};
				};
				class Name: RscText
				{
					shadow = 0;
					idc = 60033;
					text = "";
					x = "(0.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(0.1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(10.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(1.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					sizeEx = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class VehiclePos: RscPictureKeepAspect
				{
					idc = 60034;
					text = "";
					x = "(11 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(0.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class VehicleType: RscPicture
				{
					idc = 60031;
					text = "";
					x = "(12.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(0.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(2 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class UnitType: RscPictureKeepAspect
				{
					idc = 60032;
					text = "";
					x = "(13.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(0.2 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(1 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class Kills: RscPictureKeepAspect
				{
					text = "a3\Ui_f\data\IGUI\Cfg\MPTable\infantry_ca.paa";
					x = "(0.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(1.6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(0.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(0.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class LandKills: RscPictureKeepAspect
				{
					text = "a3\Ui_f\data\IGUI\Cfg\MPTable\soft_ca.paa";
					x = "(1.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(1.6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(0.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(0.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class ArmoredKills: RscPictureKeepAspect
				{
					text = "a3\Ui_f\data\IGUI\Cfg\MPTable\armored_ca.paa";
					x = "(2.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(1.6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(0.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(0.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class AirKills: RscPictureKeepAspect
				{
					text = "a3\Ui_f\data\IGUI\Cfg\MPTable\air_ca.paa";
					x = "(3.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(1.6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(0.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(0.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class Deaths: RscPictureKeepAspect
				{
					text = "a3\Ui_f\data\IGUI\Cfg\MPTable\killed_ca.paa";
					x = "(4.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(1.6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(0.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(0.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class Total: RscPictureKeepAspect
				{
					text = "a3\Ui_f\data\IGUI\Cfg\MPTable\total_ca.paa";
					x = "(5.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(1.6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(0.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(0.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class Kills_Count: RscText
				{
					style = 2;
					shadow = 0;
					idc = 60035;
					text = "";
					x = "(0.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(0.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(0.9 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					sizeEx = "(0.7 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class LandKills_Count: RscText
				{
					style = 2;
					shadow = 0;
					idc = 60036;
					text = "";
					x = "(1.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(0.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(0.9 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					sizeEx = "(0.7 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class ArmoredKills_Count: RscText
				{
					style = 2;
					shadow = 0;
					idc = 60037;
					text = "";
					x = "(2.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(0.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(0.9 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					sizeEx = "(0.7 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class AirKills_Count: RscText
				{
					style = 2;
					shadow = 0;
					idc = 60038;
					text = "";
					x = "(3.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(0.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(0.9 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					sizeEx = "(0.7 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class Deaths_Count: RscText
				{
					style = 2;
					shadow = 0;
					idc = 60039;
					text = "";
					x = "(4.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(0.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(0.9 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					sizeEx = "(0.7 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class Total_Count: RscText
				{
					style = 2;
					shadow = 0;
					idc = 60040;
					text = "";
					x = "(5.1 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(2.5 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(0.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(0.9 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					sizeEx = "(0.7 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class WeaponPicture: RscPictureKeepAspect
				{
					idc = 60041;
					text = "";
					x = "(6.2 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(1.6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(5.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(1.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
				class ThrowablePicture: RscPictureKeepAspect
				{
					idc = 60042;
					text = "";
					x = "(12.3 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					y = "(1.6 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
					w = "(1.8 * (((safezoneW / safezoneH) min 1.2)/ 40))";
					h = "(1.8 * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25))";
				};
			};
		};
		class compass: ace_common_CompassControl{};
	};
};
class CfgRespawnTemplates
{
	class ace_spectator
	{
		displayName = "$STR_ace_spectator_Settings_DisplayName";
		onPlayerKilled = "ace_spectator_fnc_respawnTemplate";
		onPlayerRespawn = "ace_spectator_fnc_respawnTemplate";
		respawnTypes[] = {1,2,3,4,5};
	};
};
