////////////////////////////////////////////////////////////////////
//DeRap: ace_microdagr\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:03 2018 : 'file' last modified on Mon Apr 16 21:46:38 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_microdagr
	{
		name = "ACE3 - MicroDAGR";
		units[] = {"ACE_microDAGR_Item"};
		weapons[] = {"ACE_microDAGR"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"PabstMirror"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_microdagr
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\microdagr\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_microdagr
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\microdagr\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_microdagr
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\microdagr\XEH_clientInit.sqf'";
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_microDAGR: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		scope = 2;
		displayName = "$STR_ace_microdagr_itemName";
		descriptionShort = "$STR_ace_microdagr_itemDescription";
		model = "\z\ace\addons\microdagr\data\MicroDAGR.p3d";
		picture = "\z\ace\addons\microdagr\images\microDAGR_item.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2;
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
				class ace_microdagr_configure
				{
					displayName = "$STR_ace_microdagr_configure";
					condition = "([2] call ace_microdagr_fnc_canShow) && {ace_microdagr_currentShowMode!= 2}";
					statement = "[2] call ace_microdagr_fnc_openDisplay";
					icon = "\z\ace\addons\microdagr\UI\icon_microDAGR.paa";
					exceptions[] = {"notOnMap","isNotInside","isNotSitting"};
					class ace_microdagr_show
					{
						displayName = "$STR_ace_microdagr_show";
						condition = "([1] call ace_microdagr_fnc_canShow) && {ace_microdagr_currentShowMode!= 1}";
						statement = "[1] call ace_microdagr_fnc_openDisplay";
						icon = "\z\ace\addons\microdagr\UI\icon_microDAGR.paa";
						exceptions[] = {"notOnMap","isNotInside","isNotSitting"};
					};
					class ace_microdagr_close
					{
						displayName = "$STR_ace_microdagr_closeUnit";
						condition = "ace_microdagr_currentShowMode!= 0";
						statement = "[0] call ace_microdagr_fnc_openDisplay";
						icon = "\z\ace\addons\microdagr\UI\icon_microDAGR.paa";
						exceptions[] = {"notOnMap","isNotInside","isNotSitting"};
					};
				};
			};
		};
	};
	class ACE_Module;
	class ace_microdagr_dagrModule: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_microdagr_Module_DisplayName";
		function = "ace_microdagr_fnc_moduleMapFill";
		scope = 1;
		isGlobal = 1;
		isSingular = 1;
		icon = "\z\ace\addons\microdagr\UI\Icon_Module_microDAGR_ca.paa";
		functionPriority = 0;
		class Arguments
		{
			class MapDataAvailable
			{
				displayName = "$STR_ace_microdagr_MapDataAvailable_DisplayName";
				description = "$STR_ace_microdagr_MapDataAvailable_Description";
				typeName = "NUMBER";
				class values
				{
					class Full
					{
						name = "$STR_ace_microdagr_MapFill_Full";
						value = 2;
						default = 1;
					};
					class Roads
					{
						name = "$STR_ace_microdagr_MapFill_OnlyRoads";
						value = 1;
					};
					class Disabled
					{
						name = "$STR_ace_microdagr_MapFill_None";
						value = 0;
					};
				};
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_microdagr_Module_Description";
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_microDAGR
			{
				name = "ACE_microDAGR";
				count = 10;
			};
		};
	};
	class Item_Base_F;
	class ACE_microDAGR_Item: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_microdagr_itemName";
		author = "$STR_ace_common_ACETeam";
		vehicleClass = "Items";
		icon = "\z\ace\addons\microdagr\UI\icon_microDAGR.paa";
		class TransportItems
		{
			class _xx_ACE_microDAGR
			{
				name = "ACE_microDAGR";
				count = 1;
			};
		};
	};
};
class RscActiveText;
class RscText;
class RscPicture;
class RscMapControl
{
	class hospital;
	class church;
	class lighthouse;
	class power;
	class fuelstation;
	class transmitter;
};
class RscMapControlEmpty;
class RscControlsGroupNoScrollbars;
class RscEdit;
class RscButton;
class RscListBox;
class ace_microdagr_RscActiveTextPicture: RscActiveText
{
	style = 48;
	colorText[] = {1,1,1,1};
	colorActive[] = {1,1,1,1};
	color[] = {1,1,1,1};
	color2[] = {1,1,1,1};
	colorFocused[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,1};
	colorBackground[] = {1,1,1,1};
	colorBackground2[] = {1,1,1,1};
	colorBackgroundFocused[] = {1,1,1,1};
};
class ace_microdagr_RscText: RscText
{
	font = "EtelkaMonospacePro";
	colorText[] = {0.75,0.75,0.75,1};
};
class ace_microdagr_TheDialog
{
	idd = -1;
	movingEnable = 1;
	duration = 9999999;
	fadein = 0;
	fadeout = 0;
	onLoad = "uiNamespace setVariable [""ace_microdagr_DialogDisplay"",_this select 0];";
	onUnload = "[] call ace_microdagr_fnc_dialogClosedEH";
	class controlsBackground
	{
		class BackgroundBlackScreen: ace_microdagr_RscText
		{
			idc = -1;
			x = "(((60 - 25)/2) + (-1)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (-1)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(27) * (safeZoneH / 64)";
			h = "(27) * (safeZoneH / 36)";
			colorBackground[] = {0,0,0,1};
		};
		class StatusBarBS: RscPicture
		{
			idc = -1;
			text = "\z\ace\addons\microdagr\images\microDAGR_topBar.paa";
			x = "(((60 - 25)/2) + (0)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (0)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(25) * (safeZoneH / 64)";
			h = "(2) * (safeZoneH / 36)";
		};
		class RangefinderConnectedIcon: RscPicture
		{
			idc = 77700;
			text = "\z\ace\addons\microdagr\images\icon_menuLaser.paa";
			x = "(((60 - 25)/2) + (6.35)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (0.1)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(2.7) * (safeZoneH / 64)";
			h = "(1.8) * (safeZoneH / 36)";
		};
		class ClockText: ace_microdagr_RscText
		{
			idc = 77701;
			style = 1;
			x = "(((60 - 25)/2) + (0)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (0.2)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(15) * (safeZoneH / 64)";
			h = "(1.8) * (safeZoneH / 36)";
			sizeEx = "(1.5) * (safeZoneH / 36)";
			colorText[] = {0,0.67,0.22,1};
		};
		class ClockText2: ace_microdagr_RscText
		{
			idc = -1;
			style = 0;
			text = "L";
			x = "(((60 - 25)/2) + (14.75)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (0.2)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(2) * (safeZoneH / 64)";
			h = "(1.8) * (safeZoneH / 36)";
			sizeEx = "(1.5) * (safeZoneH / 36)";
		};
		class MapPlain: RscMapControl
		{
			idc = 77702;
			x = "(((60 - 25)/2) + (0)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (2)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(25) * (safeZoneH / 64)";
			h = "(19) * (safeZoneH / 36)";
			onDraw = "_this call ace_microdagr_fnc_mapOnDrawEH";
			onMouseButtonDblClick = "_this call ace_microdagr_fnc_mapDoubleTapEH";
			onMouseButtonDown = "_this call ace_microdagr_fnc_mapButtonDownEH";
			scaleMin = 0.005;
			scaleMax = 10;
			drawObjects = 0;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			maxSatelliteAlpha = 0;
			alphaFadeStartScale = 100;
			alphaFadeEndScale = 100;
			colorSea[] = {0.467,0.631,0.851,0.25};
			colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
			colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
			colorGrid[] = {0,0,0,0.15};
			colorGridMap[] = {0,0,0,0.2};
			sizeExLabel = 0;
			sizeExGrid = "(0.5) * (safeZoneH / 36)";
			sizeExUnits = 0;
			sizeExNames = "(2) * (safeZoneH / 36)";
			sizeExInfo = 0;
			sizeExLevel = 0;
			sizeEx = "(1) * (safeZoneH / 36)";
			ptsPerSquareRoad = 0.75;
			ptsPerSquareObj = 2000;
			showCountourInterval = 0;
			colorTracks[] = {1.0,0.0,0.0,1};
			colorTracksFill[] = {1.0,1.0,0.0,1};
			colorRoads[] = {0.0,0.0,0.0,1};
			colorRoadsFill[] = {1,1,0,1};
			colorMainRoads[] = {0.0,0.0,0.0,1};
			colorMainRoadsFill[] = {1,0.6,0.4,1};
			colorRailWay[] = {0.8,0.2,0,1};
			colorBackground[] = {0.929412,0.929412,0.929412,1.0};
			colorOutside[] = {0.929412,0.929412,0.929412,1.0};
			colorCountlines[] = {0.647059,0.533333,0.286275,0.5};
			colorMainCountlines[] = {0.858824,0,0,0.5};
			colorForest[] = {0.6,0.8,0.2,0.1};
			colorForestBorder[] = {0,1,0,0.25};
			colorLevels[] = {0.0,0.0,0.0,0.5};
			colorRocks[] = {0.5,0.5,0.5,0};
		};
		class MapDetails: MapPlain
		{
			idc = 77703;
			x = "(((60 - 25)/2) + (0)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (2)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(25) * (safeZoneH / 64)";
			h = "(19) * (safeZoneH / 36)";
			onDraw = "_this call ace_microdagr_fnc_mapOnDrawEH";
			onMouseButtonDblClick = "_this call ace_microdagr_fnc_mapDoubleTapEH";
			onMouseButtonDown = "_this call ace_microdagr_fnc_mapButtonDownEH";
			ptsPerSquareObj = 9;
			maxSatelliteAlpha = 0.5;
			colorRocks[] = {0.5,0.5,0.5,0.5};
			class hospital: Hospital
			{
				color[] = {0,0,0,0.25};
			};
			class church: Church
			{
				color[] = {0,0,0,0.25};
			};
			class lighthouse: Lighthouse
			{
				color[] = {0,0,0,0.25};
			};
			class power: power
			{
				color[] = {0,0,0,0.25};
			};
			class fuelstation: Fuelstation
			{
				color[] = {0,0,0,0.25};
			};
			class transmitter: Transmitter
			{
				color[] = {0,0,0,0.25};
			};
		};
		class MapCompass: RscMapControlEmpty
		{
			idc = 77704;
			x = "(((60 - 25)/2) + (0)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (2)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(25) * (safeZoneH / 64)";
			h = "(19) * (safeZoneH / 36)";
			onDraw = "_this call ace_microdagr_fnc_mapOnDrawEH";
			colorBackground[] = {0,0,0,1};
			colorOutside[] = {0,0,0,1};
			moveOnEdges = 0;
		};
	};
	class controls
	{
		class TopMenuClick: ace_microdagr_RscActiveTextPicture
		{
			idc = 144030;
			text = "#(argb,8,8,3)color(0,0,0,0)";
			x = "(((60 - 25)/2) + (0)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (0)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(25) * (safeZoneH / 64)";
			h = "(2) * (safeZoneH / 36)";
			onbuttonclick = "[3] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
		};
		class ModeDisplay: RscControlsGroupNoScrollbars
		{
			idc = 144000;
			x = "(((60 - 25)/2) + (0)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (2)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(25) * (safeZoneH / 64)";
			h = "(19) * (safeZoneH / 36)";
			class Controls
			{
				class MGRSNew: ace_microdagr_RscText
				{
					idc = -1;
					text = "$STR_ace_microdagr_controlMGRS";
					x = "(0.5) * (safeZoneH / 64)";
					y = "(0) * (safeZoneH / 36)";
					w = "(10) * (safeZoneH / 64)";
					h = "(1) * (safeZoneH / 36)";
					sizeEx = "(1) * (safeZoneH / 36)";
				};
				class WGD: ace_microdagr_RscText
				{
					idc = -1;
					style = 1;
					text = "$STR_ace_microdagr_controlWGD";
					x = "(14.5) * (safeZoneH / 64)";
					y = "(0) * (safeZoneH / 36)";
					w = "(10) * (safeZoneH / 64)";
					h = "(1) * (safeZoneH / 36)";
					sizeEx = "(1) * (safeZoneH / 36)";
				};
				class UTMGrid: ace_microdagr_RscText
				{
					idc = 144001;
					x = "(4.5) * (safeZoneH / 64)";
					y = "(1.5) * (safeZoneH / 36)";
					w = "(10) * (safeZoneH / 64)";
					h = "(2) * (safeZoneH / 36)";
					sizeEx = "(2) * (safeZoneH / 36)";
				};
				class selfIcon: RscPicture
				{
					idc = -1;
					text = "\z\ace\addons\microdagr\images\icon_self.paa";
					x = "(0.5) * (safeZoneH / 64)";
					y = "(2) * (safeZoneH / 36)";
					w = "(4) * (safeZoneH / 64)";
					h = "(3) * (safeZoneH / 36)";
				};
				class Easting: ace_microdagr_RscText
				{
					idc = 144002;
					style = 1;
					x = "(14.5) * (safeZoneH / 64)";
					y = "(1.5) * (safeZoneH / 36)";
					w = "(10) * (safeZoneH / 64)";
					h = "(2) * (safeZoneH / 36)";
					sizeEx = "(2) * (safeZoneH / 36)";
				};
				class Northing: ace_microdagr_RscText
				{
					idc = 144003;
					style = 1;
					x = "(14.5) * (safeZoneH / 64)";
					y = "(3.5) * (safeZoneH / 36)";
					w = "(10) * (safeZoneH / 64)";
					h = "(2) * (safeZoneH / 36)";
					sizeEx = "(2) * (safeZoneH / 36)";
				};
				class ElevationText: ace_microdagr_RscText
				{
					idc = -1;
					text = "$STR_A3_disp_editor_elevation";
					x = "(0.5) * (safeZoneH / 64)";
					y = "(6) * (safeZoneH / 36)";
					w = "(10) * (safeZoneH / 64)";
					h = "(1.5) * (safeZoneH / 36)";
					sizeEx = "(1.25) * (safeZoneH / 36)";
				};
				class ElevationNum: ace_microdagr_RscText
				{
					idc = 144004;
					style = 1;
					x = "(12) * (safeZoneH / 64)";
					y = "(6) * (safeZoneH / 36)";
					w = "(12.5) * (safeZoneH / 64)";
					h = "(1.5) * (safeZoneH / 36)";
					sizeEx = "(1.5) * (safeZoneH / 36)";
				};
				class RscPicture_1201: RscPicture
				{
					idc = -1;
					text = "#(argb,8,8,3)color(1,1,1,0.75)";
					x = "(0.5) * (safeZoneH / 64)";
					y = "(8.115) * (safeZoneH / 36)";
					w = "(24) * (safeZoneH / 64)";
					h = "(0.05) * (safeZoneH / 36)";
				};
				class CompasIcon: RscPicture
				{
					idc = -1;
					text = "\z\ace\addons\microdagr\images\icon_infoCompass.paa";
					x = "(0.5) * (safeZoneH / 64)";
					y = "(8.5) * (safeZoneH / 36)";
					w = "(2) * (safeZoneH / 64)";
					h = "(1.5) * (safeZoneH / 36)";
				};
				class HeadingNum: ace_microdagr_RscText
				{
					idc = 144005;
					x = "(4) * (safeZoneH / 64)";
					y = "(8.5) * (safeZoneH / 36)";
					w = "(10) * (safeZoneH / 64)";
					h = "(1.5) * (safeZoneH / 36)";
					sizeEx = "(1.5) * (safeZoneH / 36)";
				};
				class SpeedNum: ace_microdagr_RscText
				{
					idc = 144006;
					style = 1;
					x = "(14.5) * (safeZoneH / 64)";
					y = "(8.5) * (safeZoneH / 36)";
					w = "(7.5) * (safeZoneH / 64)";
					h = "(1.5) * (safeZoneH / 36)";
					sizeEx = "(1.5) * (safeZoneH / 36)";
				};
				class RscPicture_1204: RscPicture
				{
					idc = -1;
					text = "#(argb,8,8,3)color(1,1,1,0.75)";
					x = "(0.5) * (safeZoneH / 64)";
					y = "(10.45) * (safeZoneH / 36)";
					w = "(24) * (safeZoneH / 64)";
					h = "(0.05) * (safeZoneH / 36)";
				};
				class modePosTimeCG: RscControlsGroupNoScrollbars
				{
					idc = 144010;
					x = "(0) * (safeZoneH / 64)";
					y = "(10.5) * (safeZoneH / 36)";
					w = "(25) * (safeZoneH / 64)";
					h = "(8.5) * (safeZoneH / 36)";
					class controls
					{
						class TimeIcon: RscPicture
						{
							idc = -1;
							text = "\z\ace\addons\microdagr\images\icon_infoClock.paa";
							x = "(0.5) * (safeZoneH / 64)";
							y = "(3.5) * (safeZoneH / 36)";
							w = "(2) * (safeZoneH / 64)";
							h = "(1.5) * (safeZoneH / 36)";
						};
						class TimeDisplayGreen1: ace_microdagr_RscText
						{
							idc = 144011;
							x = "(5) * (safeZoneH / 64)";
							y = "(2.75) * (safeZoneH / 36)";
							w = "(15) * (safeZoneH / 64)";
							h = "(1.5) * (safeZoneH / 36)";
							style = 2;
							sizeEx = "(1.5) * (safeZoneH / 36)";
							colorText[] = {0,0.67,0.22,1};
						};
						class TimeDisplayGreen2: TimeDisplayGreen1
						{
							idc = 144012;
							y = "(4.25) * (safeZoneH / 36)";
						};
					};
				};
				class modePosTargetCG: RscControlsGroupNoScrollbars
				{
					idc = 144020;
					x = "(0) * (safeZoneH / 64)";
					y = "(10.5) * (safeZoneH / 36)";
					w = "(25) * (safeZoneH / 64)";
					h = "(8.5) * (safeZoneH / 36)";
					class controls
					{
						class TargetIcon: RscPicture
						{
							idc = 144021;
							text = "\z\ace\addons\microdagr\images\icon_menuMark.paa";
							x = "(0.5) * (safeZoneH / 64)";
							y = "(0.5) * (safeZoneH / 36)";
							w = "(2) * (safeZoneH / 64)";
							h = "(1.5) * (safeZoneH / 36)";
						};
						class TrackNum: ace_microdagr_RscText
						{
							idc = 144022;
							x = "(4) * (safeZoneH / 64)";
							y = "(0.5) * (safeZoneH / 36)";
							w = "(10) * (safeZoneH / 64)";
							h = "(1.5) * (safeZoneH / 36)";
							sizeEx = "(1.5) * (safeZoneH / 36)";
						};
						class TargetRangeText: ace_microdagr_RscText
						{
							idc = -1;
							text = "$STR_ace_microdagr_controlRange";
							x = "(0.5) * (safeZoneH / 64)";
							y = "(2) * (safeZoneH / 36)";
							w = "(7.5) * (safeZoneH / 64)";
							h = "(1.5) * (safeZoneH / 36)";
							sizeEx = "(1.25) * (safeZoneH / 36)";
						};
						class TargetRangeNum: ace_microdagr_RscText
						{
							idc = 144023;
							style = 1;
							x = "(14.5) * (safeZoneH / 64)";
							y = "(2) * (safeZoneH / 36)";
							w = "(10) * (safeZoneH / 64)";
							h = "(1.5) * (safeZoneH / 36)";
							sizeEx = "(1.5) * (safeZoneH / 36)";
						};
						class TargetElevationText: ace_microdagr_RscText
						{
							idc = -1;
							text = "$STR_A3_disp_editor_elevation";
							x = "(0.5) * (safeZoneH / 64)";
							y = "(3.5) * (safeZoneH / 36)";
							w = "(10) * (safeZoneH / 64)";
							h = "(1.5) * (safeZoneH / 36)";
							sizeEx = "(1.25) * (safeZoneH / 36)";
						};
						class TargetElevationNum: ace_microdagr_RscText
						{
							idc = 144024;
							style = 1;
							x = "(12) * (safeZoneH / 64)";
							y = "(3.5) * (safeZoneH / 36)";
							w = "(12.5) * (safeZoneH / 64)";
							h = "(1.5) * (safeZoneH / 36)";
							sizeEx = "(1.5) * (safeZoneH / 36)";
						};
						class TargetName: ace_microdagr_RscText
						{
							idc = 144025;
							style = 2;
							x = "(1) * (safeZoneH / 64)";
							y = "(5.5) * (safeZoneH / 36)";
							w = "(23) * (safeZoneH / 64)";
							h = "(2) * (safeZoneH / 36)";
							sizeEx = "(2) * (safeZoneH / 36)";
						};
					};
				};
			};
		};
		class ModeCompass: RscControlsGroupNoScrollbars
		{
			idc = 144100;
			x = "(((60 - 25)/2) + (0)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (2)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(25) * (safeZoneH / 64)";
			h = "(19) * (safeZoneH / 36)";
			class Controls
			{
				class CompassHeader: ace_microdagr_RscText
				{
					idc = -1;
					style = 2;
					text = "$STR_ace_microdagr_compasDirection";
					x = "(0) * (safeZoneH / 64)";
					y = "(0) * (safeZoneH / 36)";
					w = "(25) * (safeZoneH / 64)";
					h = "(1.5) * (safeZoneH / 36)";
					sizeEx = "(1.5) * (safeZoneH / 36)";
				};
				class CompassHeading: ace_microdagr_RscText
				{
					idc = 144110;
					style = 0;
					x = "(0) * (safeZoneH / 64)";
					y = "(1.5) * (safeZoneH / 36)";
					w = "(25) * (safeZoneH / 64)";
					h = "(1.25) * (safeZoneH / 36)";
					sizeEx = "(1.25) * (safeZoneH / 36)";
					colorText[] = {0.533,0.769,0.76,1};
				};
				class CompassSpeed: CompassHeading
				{
					idc = 144111;
					style = 1;
				};
				class CompassBearing: CompassHeading
				{
					idc = 144112;
					y = "(16.25) * (safeZoneH / 36)";
					style = 0;
					colorText[] = {1,0.564,0.564,1};
				};
				class CompassRange: CompassHeading
				{
					idc = 144113;
					y = "(16.25) * (safeZoneH / 36)";
					style = 1;
					colorText[] = {1,0.564,0.564,1};
				};
				class CompassTARGET: CompassHeader
				{
					idc = 144114;
					y = "(17.5) * (safeZoneH / 36)";
				};
			};
		};
		class mapTrackButton: ace_microdagr_RscActiveTextPicture
		{
			onbuttonclick = "['autotrack'] call ace_microdagr_fnc_modeMapButtons";
			idc = 144211;
			text = "\z\ace\addons\microdagr\images\icon_mapTrack.paa";
			x = "(((60 - 25)/2) + (11)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (18.75)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(3) * (safeZoneH / 64)";
			h = "(2.25) * (safeZoneH / 36)";
		};
		class mapZoomIn: mapTrackButton
		{
			onbuttonclick = "['zoomin'] call ace_microdagr_fnc_modeMapButtons";
			idc = 144212;
			text = "\z\ace\addons\microdagr\images\icon_mapPlus.paa";
			color[] = {1,1,1,0.4};
			x = "(((60 - 25)/2) + (4)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
		};
		class mapZoomOut: mapTrackButton
		{
			onbuttonclick = "['zoomout'] call ace_microdagr_fnc_modeMapButtons";
			idc = 144213;
			text = "\z\ace\addons\microdagr\images\icon_mapMinus.paa";
			color[] = {1,1,1,0.4};
			x = "(((60 - 25)/2) + (18)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
		};
		class ModeMenu: RscControlsGroupNoScrollbars
		{
			idc = 144300;
			x = "(((60 - 25)/2) + (0)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (2)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(25) * (safeZoneH / 64)";
			h = "(19) * (safeZoneH / 36)";
			class Controls
			{
				class ButtonTL: ace_microdagr_RscActiveTextPicture
				{
					idc = -1;
					text = "\z\ace\addons\microdagr\images\icon_menuMark.paa";
					x = "(3) * (safeZoneH / 64)";
					y = "(1.5) * (safeZoneH / 36)";
					w = "(8) * (safeZoneH / 64)";
					h = "(6) * (safeZoneH / 36)";
					onbuttonclick = "[4] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
				};
				class ButtonTR: ButtonTL
				{
					text = "\z\ace\addons\microdagr\images\icon_menuWaypoints.paa";
					x = "(14) * (safeZoneH / 64)";
					y = "(1.5) * (safeZoneH / 36)";
					onbuttonclick = "[5] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
				};
				class ButtonBL: ButtonTL
				{
					text = "\z\ace\addons\microdagr\images\icon_menuLaser.paa";
					x = "(3) * (safeZoneH / 64)";
					y = "(10.5) * (safeZoneH / 36)";
					onbuttonclick = "_this call ace_microdagr_fnc_appMenuButtonConnectRangefinder";
				};
				class ButtonBR: ButtonTL
				{
					text = "\z\ace\addons\microdagr\images\icon_menuSettings.paa";
					x = "(14) * (safeZoneH / 64)";
					y = "(10.5) * (safeZoneH / 36)";
					onbuttonclick = "[6] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
				};
				class TextTL: ace_microdagr_RscText
				{
					idc = -1;
					style = 2;
					text = "$STR_ace_microdagr_menuMark";
					x = "(0) * (safeZoneH / 64)";
					y = "(7.5) * (safeZoneH / 36)";
					w = "(14) * (safeZoneH / 64)";
					h = "(1.2) * (safeZoneH / 36)";
					sizeEx = "(1.2) * (safeZoneH / 36)";
				};
				class TextTR: TextTL
				{
					text = "$STR_ace_microdagr_menuWaypoints";
					x = "(11) * (safeZoneH / 64)";
					y = "(7.5) * (safeZoneH / 36)";
				};
				class TextBL: TextTL
				{
					text = "$STR_ace_microdagr_menuConnectTo";
					x = "(0) * (safeZoneH / 64)";
					y = "(16.5) * (safeZoneH / 36)";
				};
				class TextBR: TextTL
				{
					text = "$STR_ace_microdagr_menuSettings";
					x = "(11) * (safeZoneH / 64)";
					y = "(16.5) * (safeZoneH / 36)";
				};
			};
		};
		class ModeMark: RscControlsGroupNoScrollbars
		{
			idc = 144400;
			x = "(((60 - 25)/2) + (0)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (2)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(25) * (safeZoneH / 64)";
			h = "(19) * (safeZoneH / 36)";
			class Controls
			{
				class InfoText: ace_microdagr_RscText
				{
					idc = 144411;
					x = "(3) * (safeZoneH / 64)";
					y = "(1) * (safeZoneH / 36)";
					w = "(19) * (safeZoneH / 64)";
					h = "(1.5) * (safeZoneH / 36)";
					sizeEx = "(1.5) * (safeZoneH / 36)";
					colorText[] = {0.95,0.95,0.95,1};
				};
				class RscEdit_1400: RscEdit
				{
					idc = 144412;
					x = "(3) * (safeZoneH / 64)";
					y = "(2.75) * (safeZoneH / 36)";
					w = "(17) * (safeZoneH / 64)";
					h = "(1.5) * (safeZoneH / 36)";
					size = "(1.5) * (safeZoneH / 36)";
					sizeEx = "(1.5) * (safeZoneH / 36)";
					colorText[] = {0.95,0.95,0.95,1};
					font = "EtelkaMonospacePro";
				};
				class DeleteButton: ace_microdagr_RscActiveTextPicture
				{
					idc = -1;
					text = "\z\ace\addons\microdagr\images\icon_deleteButton.paa";
					x = "(20) * (safeZoneH / 64)";
					y = "(2.75) * (safeZoneH / 36)";
					w = "(2) * (safeZoneH / 64)";
					h = "(1.5) * (safeZoneH / 36)";
					sizeEx = "(1.5) * (safeZoneH / 36)";
					onbuttonclick = "['del'] call ace_microdagr_fnc_appMarkKeypadEntry";
				};
				class Keypad1: RscButton
				{
					idc = -1;
					text = "1";
					x = "(3) * (safeZoneH / 64)";
					y = "(5) * (safeZoneH / 36)";
					w = "(6) * (safeZoneH / 64)";
					h = "(3) * (safeZoneH / 36)";
					sizeEx = "(3) * (safeZoneH / 36)";
					colorText[] = {0.95,0.95,0.95,1};
					colorBackground[] = {0.3,0.3,0.3,1};
					colorBackgroundDisabled[] = {0.3,0.3,0.3,1};
					colorBackgroundActive[] = {0.3,0.3,0.3,1};
					colorFocused[] = {0.3,0.3,0.3,1};
					onbuttonclick = "['1'] call ace_microdagr_fnc_appMarkKeypadEntry";
				};
				class Keypad2: Keypad1
				{
					text = "2";
					x = "(9.5) * (safeZoneH / 64)";
					onbuttonclick = "['2'] call ace_microdagr_fnc_appMarkKeypadEntry";
				};
				class Keypad3: Keypad1
				{
					text = "3";
					x = "(16) * (safeZoneH / 64)";
					onbuttonclick = "['3'] call ace_microdagr_fnc_appMarkKeypadEntry";
				};
				class Keypad4: Keypad1
				{
					text = "4";
					x = "(3) * (safeZoneH / 64)";
					y = "(8.5) * (safeZoneH / 36)";
					onbuttonclick = "['4'] call ace_microdagr_fnc_appMarkKeypadEntry";
				};
				class Keypad5: Keypad4
				{
					text = "5";
					x = "(9.5) * (safeZoneH / 64)";
					onbuttonclick = "['5'] call ace_microdagr_fnc_appMarkKeypadEntry";
				};
				class Keypad6: Keypad4
				{
					text = "6";
					x = "(16) * (safeZoneH / 64)";
					onbuttonclick = "['6'] call ace_microdagr_fnc_appMarkKeypadEntry";
				};
				class Keypad7: Keypad1
				{
					text = "7";
					x = "(3) * (safeZoneH / 64)";
					y = "(12) * (safeZoneH / 36)";
					onbuttonclick = "['7'] call ace_microdagr_fnc_appMarkKeypadEntry";
				};
				class Keypad8: Keypad7
				{
					text = "8";
					x = "(9.5) * (safeZoneH / 64)";
					onbuttonclick = "['8'] call ace_microdagr_fnc_appMarkKeypadEntry";
				};
				class Keypad9: Keypad7
				{
					text = "9";
					x = "(16) * (safeZoneH / 64)";
					onbuttonclick = "['9'] call ace_microdagr_fnc_appMarkKeypadEntry";
				};
				class Keypad0: Keypad1
				{
					text = "0";
					x = "(3) * (safeZoneH / 64)";
					y = "(15.5) * (safeZoneH / 36)";
					w = "(12.5) * (safeZoneH / 64)";
					onbuttonclick = "['0'] call ace_microdagr_fnc_appMarkKeypadEntry";
				};
				class KeypadEnter: Keypad1
				{
					text = "OK";
					x = "(16) * (safeZoneH / 64)";
					y = "(15.5) * (safeZoneH / 36)";
					onbuttonclick = "['ok'] call ace_microdagr_fnc_appMarkKeypadEntry";
				};
			};
		};
		class ModeWaypoints: RscControlsGroupNoScrollbars
		{
			idc = 144500;
			x = "(((60 - 25)/2) + (0)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (2)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(25) * (safeZoneH / 64)";
			h = "(19) * (safeZoneH / 36)";
			class Controls
			{
				class ListOfWaypoints: RscListBox
				{
					idc = 144501;
					sizeEx = "(1.5) * (safeZoneH / 36)";
					sizeEx2 = "(1.5) * (safeZoneH / 36)";
					rowHeight = "(1.75) * (safeZoneH / 36)";
					colorText[] = {0.75,0.75,0.75,1};
					colorSelect[] = {0.75,0.75,0.75,1};
					colorSelect2[] = {0.75,0.75,0.75,1};
					colorBackground[] = {0,0,0,1};
					colorSelectBackground[] = {0.3,0.3,0.3,1};
					colorSelectBackground2[] = {0.3,0.3,0.3,1};
					itemSpacing = 0.001;
					x = "(0.2) * (safeZoneH / 64)";
					y = "(0.5) * (safeZoneH / 36)";
					w = "(24.6) * (safeZoneH / 64)";
					h = "(16.5) * (safeZoneH / 36)";
				};
				class ButtonSetWP: RscButton
				{
					idc = -1;
					text = "$STR_ace_microdagr_waypointsSet";
					x = "(1) * (safeZoneH / 64)";
					y = "(17) * (safeZoneH / 36)";
					w = "(7) * (safeZoneH / 64)";
					h = "(1.5) * (safeZoneH / 36)";
					sizeEx = "(1.5) * (safeZoneH / 36)";
					font = "EtelkaMonospacePro";
					colorText[] = {0.95,0.95,0.95,1};
					colorBackground[] = {0.3,0.3,0.3,1};
					colorBackgroundDisabled[] = {0.3,0.3,0.3,1};
					colorBackgroundActive[] = {0.3,0.3,0.3,1};
					colorFocused[] = {0.3,0.3,0.3,1};
					onbuttonclick = "_this call ace_microdagr_fnc_appWaypointsButtonSetWP";
				};
				class ButtonAdd: ButtonSetWP
				{
					text = "$STR_ace_microdagr_waypointsAdd";
					x = "(9) * (safeZoneH / 64)";
					onbuttonclick = "[4] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
				};
				class ButtonDelete: ButtonSetWP
				{
					text = "$STR_ace_microdagr_waypointsDelete";
					x = "(17) * (safeZoneH / 64)";
					onbuttonclick = "_this call ace_microdagr_fnc_appWaypointsButtonDeleteWP";
				};
			};
		};
		class SettingsMenu: RscListBox
		{
			idc = 144600;
			x = "(((60 - 25)/2) + (0.2)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (2)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(24.6) * (safeZoneH / 64)";
			h = "(19) * (safeZoneH / 36)";
			onLBSelChanged = "_this call ace_microdagr_fnc_appSettingsLBClick";
			sizeEx = "(1.5) * (safeZoneH / 36)";
			sizeEx2 = "(1.5) * (safeZoneH / 36)";
			rowHeight = "(1.75) * (safeZoneH / 36)";
			itemSpacing = 0.001;
			colorText[] = {0.75,0.75,0.75,1};
			colorTextRight[] = {0.75,0.75,0.75,1};
			colorSelect[] = {0.75,0.75,0.75,1};
			colorSelect2[] = {0.75,0.75,0.75,1};
			colorSelectRight[] = {0.75,0.75,0.75,1};
			colorSelect2Right[] = {0.75,0.75,0.75,1};
			colorBackground[] = {0.05,0.05,0.05,1};
			colorSelectBackground[] = {0.05,0.05,0.05,1};
			colorSelectBackground2[] = {0.05,0.05,0.05,1};
		};
		class ButtonBG0: RscPicture
		{
			idc = 77710;
			text = "\z\ace\addons\microdagr\images\button_pushedDown.paa";
			x = "(((60 - 25)/2) + (0 * (25/3))) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (21)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "((25/3)) * (safeZoneH / 64)";
			h = "(4) * (safeZoneH / 36)";
		};
		class ButtonBG1: ButtonBG0
		{
			idc = 77711;
			x = "(((60 - 25)/2) + (1 * (25/3))) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
		};
		class ButtonBG2: ButtonBG0
		{
			idc = 77712;
			x = "(((60 - 25)/2) + (2 * (25/3))) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
		};
		class ButtonIcon0: ace_microdagr_RscActiveTextPicture
		{
			idc = -1;
			text = "\z\ace\addons\microdagr\images\icon_info.paa";
			x = "(((60 - 25)/2) + (0 * (25/3))) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (21)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "((25/3)) * (safeZoneH / 64)";
			h = "(4) * (safeZoneH / 36)";
			onbuttonclick = "[0] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
		};
		class ButtonIcon1: ButtonIcon0
		{
			text = "\z\ace\addons\microdagr\images\icon_compass.paa";
			x = "(((60 - 25)/2) + (1 * (25/3))) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			onbuttonclick = "[1] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
		};
		class ButtonIcon2: ButtonIcon0
		{
			text = "\z\ace\addons\microdagr\images\icon_map.paa";
			x = "(((60 - 25)/2) + (2 * (25/3))) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			onbuttonclick = "[2] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
		};
		class MicroDagrShell: RscPicture
		{
			idc = 77713;
			text = "\z\ace\addons\microdagr\images\microDAGR_shellPicture.paa";
			x = "(((60 - 25)/2) + (-14.77)) * (safeZoneH / 64) + (safezoneX + (safezoneW - safeZoneH)/2)";
			y = "(0 + (-5.875)) * (safeZoneH / 36) + (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
			w = "(53.62) * (safeZoneH / 64)";
			h = "(39.9) * (safeZoneH / 36)";
		};
	};
};
class RscTitles
{
	class ace_microdagr_TheRscTitleDisplay
	{
		idd = -1;
		movingEnable = 1;
		duration = 9999999;
		fadein = 0;
		fadeout = 0;
		onLoad = "uiNamespace setVariable [""ace_microdagr_RscTitleDisplay"",_this select 0];";
		class controlsBackground
		{
			class BackgroundBlackScreen: ace_microdagr_RscText
			{
				idc = -1;
				x = "(-1) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(-1) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(27) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(27) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				colorBackground[] = {0,0,0,1};
			};
			class StatusBarBS: RscPicture
			{
				idc = -1;
				text = "\z\ace\addons\microdagr\images\microDAGR_topBar.paa";
				x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(0) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
			};
			class RangefinderConnectedIcon: RscPicture
			{
				idc = 77700;
				text = "\z\ace\addons\microdagr\images\icon_menuLaser.paa";
				x = "(6.35) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(0.1) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(2.7) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(1.8) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
			};
			class ClockText: ace_microdagr_RscText
			{
				idc = 77701;
				style = 1;
				x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(0.2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(15) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(1.8) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				colorText[] = {0,0.67,0.22,1};
			};
			class ClockText2: ace_microdagr_RscText
			{
				idc = -1;
				style = 0;
				text = "L";
				x = "(14.75) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(0.2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(2) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(1.8) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
			};
			class MapPlain: RscMapControl
			{
				idc = 77702;
				x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(19) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				onDraw = "_this call ace_microdagr_fnc_mapOnDrawEH";
				onMouseButtonDblClick = "_this call ace_microdagr_fnc_mapDoubleTapEH";
				onMouseButtonDown = "_this call ace_microdagr_fnc_mapButtonDownEH";
				scaleMin = 0.005;
				scaleMax = 10;
				drawObjects = 0;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				maxSatelliteAlpha = 0;
				alphaFadeStartScale = 100;
				alphaFadeEndScale = 100;
				colorSea[] = {0.467,0.631,0.851,0.25};
				colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
				colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
				colorGrid[] = {0,0,0,0.15};
				colorGridMap[] = {0,0,0,0.2};
				sizeExLabel = 0;
				sizeExGrid = "(0.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				sizeExUnits = 0;
				sizeExNames = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				sizeExInfo = 0;
				sizeExLevel = 0;
				sizeEx = "(1) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				ptsPerSquareRoad = 0.75;
				ptsPerSquareObj = 2000;
				showCountourInterval = 0;
				colorTracks[] = {1.0,0.0,0.0,1};
				colorTracksFill[] = {1.0,1.0,0.0,1};
				colorRoads[] = {0.0,0.0,0.0,1};
				colorRoadsFill[] = {1,1,0,1};
				colorMainRoads[] = {0.0,0.0,0.0,1};
				colorMainRoadsFill[] = {1,0.6,0.4,1};
				colorRailWay[] = {0.8,0.2,0,1};
				colorBackground[] = {0.929412,0.929412,0.929412,1.0};
				colorOutside[] = {0.929412,0.929412,0.929412,1.0};
				colorCountlines[] = {0.647059,0.533333,0.286275,0.5};
				colorMainCountlines[] = {0.858824,0,0,0.5};
				colorForest[] = {0.6,0.8,0.2,0.1};
				colorForestBorder[] = {0,1,0,0.25};
				colorLevels[] = {0.0,0.0,0.0,0.5};
				colorRocks[] = {0.5,0.5,0.5,0};
			};
			class MapDetails: MapPlain
			{
				idc = 77703;
				x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(19) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				onDraw = "_this call ace_microdagr_fnc_mapOnDrawEH";
				onMouseButtonDblClick = "_this call ace_microdagr_fnc_mapDoubleTapEH";
				onMouseButtonDown = "_this call ace_microdagr_fnc_mapButtonDownEH";
				ptsPerSquareObj = 9;
				maxSatelliteAlpha = 0.5;
				colorRocks[] = {0.5,0.5,0.5,0.5};
				class hospital: Hospital
				{
					color[] = {0,0,0,0.25};
				};
				class church: Church
				{
					color[] = {0,0,0,0.25};
				};
				class lighthouse: Lighthouse
				{
					color[] = {0,0,0,0.25};
				};
				class power: power
				{
					color[] = {0,0,0,0.25};
				};
				class fuelstation: Fuelstation
				{
					color[] = {0,0,0,0.25};
				};
				class transmitter: Transmitter
				{
					color[] = {0,0,0,0.25};
				};
			};
			class MapCompass: RscMapControlEmpty
			{
				idc = 77704;
				x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(19) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				onDraw = "_this call ace_microdagr_fnc_mapOnDrawEH";
				colorBackground[] = {0,0,0,1};
				colorOutside[] = {0,0,0,1};
				moveOnEdges = 0;
			};
		};
		class controls
		{
			class TopMenuClick: ace_microdagr_RscActiveTextPicture
			{
				idc = 144030;
				text = "#(argb,8,8,3)color(0,0,0,0)";
				x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(0) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				onbuttonclick = "[3] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
			};
			class ModeDisplay: RscControlsGroupNoScrollbars
			{
				idc = 144000;
				x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(19) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				class Controls
				{
					class MGRSNew: ace_microdagr_RscText
					{
						idc = -1;
						text = "$STR_ace_microdagr_controlMGRS";
						x = "(0.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(0) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(10) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class WGD: ace_microdagr_RscText
					{
						idc = -1;
						style = 1;
						text = "$STR_ace_microdagr_controlWGD";
						x = "(14.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(0) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(10) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class UTMGrid: ace_microdagr_RscText
					{
						idc = 144001;
						x = "(4.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(10) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class selfIcon: RscPicture
					{
						idc = -1;
						text = "\z\ace\addons\microdagr\images\icon_self.paa";
						x = "(0.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(4) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(3) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class Easting: ace_microdagr_RscText
					{
						idc = 144002;
						style = 1;
						x = "(14.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(10) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class Northing: ace_microdagr_RscText
					{
						idc = 144003;
						style = 1;
						x = "(14.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(3.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(10) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class ElevationText: ace_microdagr_RscText
					{
						idc = -1;
						text = "$STR_A3_disp_editor_elevation";
						x = "(0.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(6) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(10) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1.25) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class ElevationNum: ace_microdagr_RscText
					{
						idc = 144004;
						style = 1;
						x = "(12) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(6) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(12.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class RscPicture_1201: RscPicture
					{
						idc = -1;
						text = "#(argb,8,8,3)color(1,1,1,0.75)";
						x = "(0.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(8.115) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(24) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(0.05) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class CompasIcon: RscPicture
					{
						idc = -1;
						text = "\z\ace\addons\microdagr\images\icon_infoCompass.paa";
						x = "(0.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(8.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(2) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class HeadingNum: ace_microdagr_RscText
					{
						idc = 144005;
						x = "(4) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(8.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(10) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class SpeedNum: ace_microdagr_RscText
					{
						idc = 144006;
						style = 1;
						x = "(14.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(8.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(7.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class RscPicture_1204: RscPicture
					{
						idc = -1;
						text = "#(argb,8,8,3)color(1,1,1,0.75)";
						x = "(0.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(10.45) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(24) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(0.05) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class modePosTimeCG: RscControlsGroupNoScrollbars
					{
						idc = 144010;
						x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(10.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(8.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						class controls
						{
							class TimeIcon: RscPicture
							{
								idc = -1;
								text = "\z\ace\addons\microdagr\images\icon_infoClock.paa";
								x = "(0.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								y = "(3.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								w = "(2) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
							};
							class TimeDisplayGreen1: ace_microdagr_RscText
							{
								idc = 144011;
								x = "(5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								y = "(2.75) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								w = "(15) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								style = 2;
								sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								colorText[] = {0,0.67,0.22,1};
							};
							class TimeDisplayGreen2: TimeDisplayGreen1
							{
								idc = 144012;
								y = "(4.25) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
							};
						};
					};
					class modePosTargetCG: RscControlsGroupNoScrollbars
					{
						idc = 144020;
						x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(10.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(8.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						class controls
						{
							class TargetIcon: RscPicture
							{
								idc = 144021;
								text = "\z\ace\addons\microdagr\images\icon_menuMark.paa";
								x = "(0.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								y = "(0.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								w = "(2) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
							};
							class TrackNum: ace_microdagr_RscText
							{
								idc = 144022;
								x = "(4) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								y = "(0.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								w = "(10) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
							};
							class TargetRangeText: ace_microdagr_RscText
							{
								idc = -1;
								text = "$STR_ace_microdagr_controlRange";
								x = "(0.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								y = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								w = "(7.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								sizeEx = "(1.25) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
							};
							class TargetRangeNum: ace_microdagr_RscText
							{
								idc = 144023;
								style = 1;
								x = "(14.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								y = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								w = "(10) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
							};
							class TargetElevationText: ace_microdagr_RscText
							{
								idc = -1;
								text = "$STR_A3_disp_editor_elevation";
								x = "(0.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								y = "(3.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								w = "(10) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								sizeEx = "(1.25) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
							};
							class TargetElevationNum: ace_microdagr_RscText
							{
								idc = 144024;
								style = 1;
								x = "(12) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								y = "(3.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								w = "(12.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
							};
							class TargetName: ace_microdagr_RscText
							{
								idc = 144025;
								style = 2;
								x = "(1) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								y = "(5.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								w = "(23) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
								h = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
								sizeEx = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
							};
						};
					};
				};
			};
			class ModeCompass: RscControlsGroupNoScrollbars
			{
				idc = 144100;
				x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(19) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				class Controls
				{
					class CompassHeader: ace_microdagr_RscText
					{
						idc = -1;
						style = 2;
						text = "$STR_ace_microdagr_compasDirection";
						x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(0) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class CompassHeading: ace_microdagr_RscText
					{
						idc = 144110;
						style = 0;
						x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1.25) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1.25) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						colorText[] = {0.533,0.769,0.76,1};
					};
					class CompassSpeed: CompassHeading
					{
						idc = 144111;
						style = 1;
					};
					class CompassBearing: CompassHeading
					{
						idc = 144112;
						y = "(16.25) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						style = 0;
						colorText[] = {1,0.564,0.564,1};
					};
					class CompassRange: CompassHeading
					{
						idc = 144113;
						y = "(16.25) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						style = 1;
						colorText[] = {1,0.564,0.564,1};
					};
					class CompassTARGET: CompassHeader
					{
						idc = 144114;
						y = "(17.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
				};
			};
			class mapTrackButton: ace_microdagr_RscActiveTextPicture
			{
				onbuttonclick = "['autotrack'] call ace_microdagr_fnc_modeMapButtons";
				idc = 144211;
				text = "\z\ace\addons\microdagr\images\icon_mapTrack.paa";
				x = "(11) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(18.75) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(3) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(2.25) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
			};
			class mapZoomIn: mapTrackButton
			{
				onbuttonclick = "['zoomin'] call ace_microdagr_fnc_modeMapButtons";
				idc = 144212;
				text = "\z\ace\addons\microdagr\images\icon_mapPlus.paa";
				color[] = {1,1,1,0.4};
				x = "(4) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
			};
			class mapZoomOut: mapTrackButton
			{
				onbuttonclick = "['zoomout'] call ace_microdagr_fnc_modeMapButtons";
				idc = 144213;
				text = "\z\ace\addons\microdagr\images\icon_mapMinus.paa";
				color[] = {1,1,1,0.4};
				x = "(18) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
			};
			class ModeMenu: RscControlsGroupNoScrollbars
			{
				idc = 144300;
				x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(19) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				class Controls
				{
					class ButtonTL: ace_microdagr_RscActiveTextPicture
					{
						idc = -1;
						text = "\z\ace\addons\microdagr\images\icon_menuMark.paa";
						x = "(3) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(8) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(6) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						onbuttonclick = "[4] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
					};
					class ButtonTR: ButtonTL
					{
						text = "\z\ace\addons\microdagr\images\icon_menuWaypoints.paa";
						x = "(14) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						onbuttonclick = "[5] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
					};
					class ButtonBL: ButtonTL
					{
						text = "\z\ace\addons\microdagr\images\icon_menuLaser.paa";
						x = "(3) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(10.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						onbuttonclick = "_this call ace_microdagr_fnc_appMenuButtonConnectRangefinder";
					};
					class ButtonBR: ButtonTL
					{
						text = "\z\ace\addons\microdagr\images\icon_menuSettings.paa";
						x = "(14) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(10.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						onbuttonclick = "[6] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
					};
					class TextTL: ace_microdagr_RscText
					{
						idc = -1;
						style = 2;
						text = "$STR_ace_microdagr_menuMark";
						x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(7.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(14) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1.2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1.2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class TextTR: TextTL
					{
						text = "$STR_ace_microdagr_menuWaypoints";
						x = "(11) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(7.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class TextBL: TextTL
					{
						text = "$STR_ace_microdagr_menuConnectTo";
						x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(16.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class TextBR: TextTL
					{
						text = "$STR_ace_microdagr_menuSettings";
						x = "(11) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(16.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
				};
			};
			class ModeMark: RscControlsGroupNoScrollbars
			{
				idc = 144400;
				x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(19) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				class Controls
				{
					class InfoText: ace_microdagr_RscText
					{
						idc = 144411;
						x = "(3) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(1) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(19) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						colorText[] = {0.95,0.95,0.95,1};
					};
					class RscEdit_1400: RscEdit
					{
						idc = 144412;
						x = "(3) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(2.75) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(17) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						size = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						colorText[] = {0.95,0.95,0.95,1};
						font = "EtelkaMonospacePro";
					};
					class DeleteButton: ace_microdagr_RscActiveTextPicture
					{
						idc = -1;
						text = "\z\ace\addons\microdagr\images\icon_deleteButton.paa";
						x = "(20) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(2.75) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(2) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						onbuttonclick = "['del'] call ace_microdagr_fnc_appMarkKeypadEntry";
					};
					class Keypad1: RscButton
					{
						idc = -1;
						text = "1";
						x = "(3) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(6) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(3) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(3) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						colorText[] = {0.95,0.95,0.95,1};
						colorBackground[] = {0.3,0.3,0.3,1};
						colorBackgroundDisabled[] = {0.3,0.3,0.3,1};
						colorBackgroundActive[] = {0.3,0.3,0.3,1};
						colorFocused[] = {0.3,0.3,0.3,1};
						onbuttonclick = "['1'] call ace_microdagr_fnc_appMarkKeypadEntry";
					};
					class Keypad2: Keypad1
					{
						text = "2";
						x = "(9.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						onbuttonclick = "['2'] call ace_microdagr_fnc_appMarkKeypadEntry";
					};
					class Keypad3: Keypad1
					{
						text = "3";
						x = "(16) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						onbuttonclick = "['3'] call ace_microdagr_fnc_appMarkKeypadEntry";
					};
					class Keypad4: Keypad1
					{
						text = "4";
						x = "(3) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(8.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						onbuttonclick = "['4'] call ace_microdagr_fnc_appMarkKeypadEntry";
					};
					class Keypad5: Keypad4
					{
						text = "5";
						x = "(9.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						onbuttonclick = "['5'] call ace_microdagr_fnc_appMarkKeypadEntry";
					};
					class Keypad6: Keypad4
					{
						text = "6";
						x = "(16) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						onbuttonclick = "['6'] call ace_microdagr_fnc_appMarkKeypadEntry";
					};
					class Keypad7: Keypad1
					{
						text = "7";
						x = "(3) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(12) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						onbuttonclick = "['7'] call ace_microdagr_fnc_appMarkKeypadEntry";
					};
					class Keypad8: Keypad7
					{
						text = "8";
						x = "(9.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						onbuttonclick = "['8'] call ace_microdagr_fnc_appMarkKeypadEntry";
					};
					class Keypad9: Keypad7
					{
						text = "9";
						x = "(16) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						onbuttonclick = "['9'] call ace_microdagr_fnc_appMarkKeypadEntry";
					};
					class Keypad0: Keypad1
					{
						text = "0";
						x = "(3) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(15.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(12.5) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						onbuttonclick = "['0'] call ace_microdagr_fnc_appMarkKeypadEntry";
					};
					class KeypadEnter: Keypad1
					{
						text = "OK";
						x = "(16) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(15.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						onbuttonclick = "['ok'] call ace_microdagr_fnc_appMarkKeypadEntry";
					};
				};
			};
			class ModeWaypoints: RscControlsGroupNoScrollbars
			{
				idc = 144500;
				x = "(0) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(25) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(19) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				class Controls
				{
					class ListOfWaypoints: RscListBox
					{
						idc = 144501;
						sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx2 = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						rowHeight = "(1.75) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						colorText[] = {0.75,0.75,0.75,1};
						colorSelect[] = {0.75,0.75,0.75,1};
						colorSelect2[] = {0.75,0.75,0.75,1};
						colorBackground[] = {0,0,0,1};
						colorSelectBackground[] = {0.3,0.3,0.3,1};
						colorSelectBackground2[] = {0.3,0.3,0.3,1};
						itemSpacing = 0.001;
						x = "(0.2) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(0.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(24.6) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(16.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
					};
					class ButtonSetWP: RscButton
					{
						idc = -1;
						text = "$STR_ace_microdagr_waypointsSet";
						x = "(1) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						y = "(17) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						w = "(7) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						h = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
						font = "EtelkaMonospacePro";
						colorText[] = {0.95,0.95,0.95,1};
						colorBackground[] = {0.3,0.3,0.3,1};
						colorBackgroundDisabled[] = {0.3,0.3,0.3,1};
						colorBackgroundActive[] = {0.3,0.3,0.3,1};
						colorFocused[] = {0.3,0.3,0.3,1};
						onbuttonclick = "_this call ace_microdagr_fnc_appWaypointsButtonSetWP";
					};
					class ButtonAdd: ButtonSetWP
					{
						text = "$STR_ace_microdagr_waypointsAdd";
						x = "(9) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						onbuttonclick = "[4] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
					};
					class ButtonDelete: ButtonSetWP
					{
						text = "$STR_ace_microdagr_waypointsDelete";
						x = "(17) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
						onbuttonclick = "_this call ace_microdagr_fnc_appWaypointsButtonDeleteWP";
					};
				};
			};
			class SettingsMenu: RscListBox
			{
				idc = 144600;
				x = "(0.2) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(2) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(24.6) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(19) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				onLBSelChanged = "_this call ace_microdagr_fnc_appSettingsLBClick";
				sizeEx = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				sizeEx2 = "(1.5) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				rowHeight = "(1.75) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				itemSpacing = 0.001;
				colorText[] = {0.75,0.75,0.75,1};
				colorTextRight[] = {0.75,0.75,0.75,1};
				colorSelect[] = {0.75,0.75,0.75,1};
				colorSelect2[] = {0.75,0.75,0.75,1};
				colorSelectRight[] = {0.75,0.75,0.75,1};
				colorSelect2Right[] = {0.75,0.75,0.75,1};
				colorBackground[] = {0.05,0.05,0.05,1};
				colorSelectBackground[] = {0.05,0.05,0.05,1};
				colorSelectBackground2[] = {0.05,0.05,0.05,1};
			};
			class ButtonBG0: RscPicture
			{
				idc = 77710;
				text = "\z\ace\addons\microdagr\images\button_pushedDown.paa";
				x = "(0 * (25/3)) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(21) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "((25/3)) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(4) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
			};
			class ButtonBG1: ButtonBG0
			{
				idc = 77711;
				x = "(1 * (25/3)) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
			};
			class ButtonBG2: ButtonBG0
			{
				idc = 77712;
				x = "(2 * (25/3)) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
			};
			class ButtonIcon0: ace_microdagr_RscActiveTextPicture
			{
				idc = -1;
				text = "\z\ace\addons\microdagr\images\icon_info.paa";
				x = "(0 * (25/3)) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(21) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "((25/3)) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(4) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
				onbuttonclick = "[0] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
			};
			class ButtonIcon1: ButtonIcon0
			{
				text = "\z\ace\addons\microdagr\images\icon_compass.paa";
				x = "(1 * (25/3)) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				onbuttonclick = "[1] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
			};
			class ButtonIcon2: ButtonIcon0
			{
				text = "\z\ace\addons\microdagr\images\icon_map.paa";
				x = "(2 * (25/3)) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				onbuttonclick = "[2] call ace_microdagr_fnc_saveCurrentAndSetNewMode";
			};
			class MicroDagrShell: RscPicture
			{
				idc = 77713;
				text = "\z\ace\addons\microdagr\images\microDAGR_shellPicture.paa";
				x = "(-14.77) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_X',0])";
				y = "(-5.875) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))+ (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_Y',0])";
				w = "(53.62) / 25 * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1])";
				h = "(39.9) / 25 * ((16/9) * (profilenamespace getVariable ['IGUI_grid_ACE_microDagr_W',1]))";
			};
		};
	};
};
class CfgUIGrids
{
	class IGUI
	{
		class Presets
		{
			class Arma3
			{
				class Variables
				{
					grid_ACE_microDagr[] = {{"(safezoneX + safezoneW - 11 * (((safezoneW / safezoneH) min 1.2) / 40))","(safezoneY + safezoneH - 15 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))","(10 * (((safezoneW / safezoneH) min 1.2) / 40))","(10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"},"(((safezoneW / safezoneH) min 1.2) / 40)","((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
				};
			};
		};
		class Variables
		{
			class grid_ACE_microDagr
			{
				displayName = "ACE3 - MicroDAGR";
				description = "ACE MicroDagr";
				preview = "\z\ace\addons\microdagr\ui\IGUI_preview_ca.paa";
				saveToProfile[] = {0,1,2,3};
				canResize = 1;
			};
		};
	};
};
class ACE_Settings
{
	class ace_microdagr_mapDataAvailable
	{
		displayName = "$STR_ace_microdagr_MapDataAvailable_DisplayName";
		description = "$STR_ace_microdagr_MapDataAvailable_Description";
		value = 2;
		typeName = "SCALAR";
		isClientSettable = 0;
		values[] = {"$STR_ace_microdagr_MapFill_None","$STR_ace_microdagr_MapFill_OnlyRoads","$STR_ace_microdagr_MapFill_Full"};
	};
};
