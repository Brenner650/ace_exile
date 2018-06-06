////////////////////////////////////////////////////////////////////
//DeRap: ace_rangecard\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:24 2018 : 'file' last modified on Mon Apr 16 21:47:18 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_rangecard
	{
		name = "ACE3 - Range Card";
		units[] = {"ACE_Item_RangeCard"};
		weapons[] = {"ACE_RangeCard"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ACE_Advanced_Ballistics","ace_scopes"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Ruthberg"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_rangecard
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\rangecard\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_rangecard
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\rangecard\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_rangecard
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\rangecard\XEH_postInit.sqf'";
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
				class ace_rangecard_copyRangeCard
				{
					displayName = "$STR_ace_rangecard_CopyRangeCard";
					distance = 2.0;
					condition = "_target call ace_rangecard_fnc_canCopy";
					statement = "_target call ace_rangecard_fnc_updateClassNames";
					icon = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ace_rangecard_open
				{
					displayName = "$STR_ace_rangecard_OpenRangeCard";
					condition = "call ace_rangecard_fnc_canShow&& !ace_rangecard_RangeCardOpened";
					statement = "false call ace_rangecard_fnc_openRangeCard";
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
					exceptions[] = {"notOnMap"};
					class ace_rangecard_openCopy
					{
						displayName = "$STR_ace_rangecard_OpenRangeCardCopy";
						condition = "call ace_rangecard_fnc_canShowCopy&& !ace_rangecard_RangeCardOpened";
						statement = "true call ace_rangecard_fnc_openRangeCard";
						showDisabled = 0;
						priority = 0.1;
						icon = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
						exceptions[] = {"notOnMap"};
					};
					class ace_rangecard_makeCopy
					{
						displayName = "$STR_ace_rangecard_CopyRangeCard";
						condition = "call ace_rangecard_fnc_canShow&& !ace_rangecard_RangeCardOpened";
						statement = "ace_rangecard_zeroRangeCopy=ace_rangecard_zeroRange; ace_rangecard_boreHeightCopy=ace_rangecard_boreHeight; ace_rangecard_ammoClassCopy=ace_rangecard_ammoClass; ace_rangecard_magazineClassCopy=ace_rangecard_magazineClass; ace_rangecard_weaponClassCopy=ace_rangecard_weaponClass;";
						showDisabled = 0;
						priority = 0.1;
						icon = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
						exceptions[] = {"notOnMap"};
					};
				};
			};
		};
	};
	class Item_Base_F;
	class ACE_Item_RangeCard: Item_Base_F
	{
		author = "Ruthberg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Range Card";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_RangeCard
			{
				name = "ACE_RangeCard";
				count = 1;
			};
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_RangeCard
			{
				name = "ACE_RangeCard";
				count = 6;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_RangeCard: ACE_ItemCore
	{
		author = "Ruthberg";
		scope = 2;
		displayName = "$STR_ace_rangecard_Name";
		descriptionShort = "$STR_ace_rangecard_Description";
		picture = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
		icon = "iconObject_circle";
		mapSize = 0.034;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};
class RscListNBox;
class ScrollBar;
class RangeCard_RscText
{
	idc = -1;
	type = 0;
	style = 2;
	colorDisabled[] = {0,0,0,0.0};
	colorBackground[] = {0,0,0,0};
	colorText[] = {0,0,0,1};
	text = "";
	x = 0;
	y = 0;
	h = 0.028;
	w = 0.06;
	font = "TahomaB";
	SizeEx = 0.025;
	shadow = 0;
};
class RangeCard_RscListNBox: RscListNBox
{
	idc = -1;
	type = 102;
	style = 0;
	font = "TahomaB";
	sizeEx = 0.026;
	rowHeight = 0.027;
	colorDisabled[] = {0,0,0,0.0};
	colorBackground[] = {1,1,1,1};
	colorText[] = {0,0,0,1};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {1,1,1,0};
	colorSelectBackground2[] = {1,1,1,0};
	period = 0;
	LineSpacing = 0;
	maxHistoryDelay = 1.0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	soundSelect[] = {"",0.09,1};
	drawSideArrows = 0;
	idcLeft = -1;
	idcRight = -1;
	class ScrollBar
	{
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
	};
	class ListScrollBar: ScrollBar{};
};
class ACE_RangeCard_Dialog
{
	idd = -1;
	movingEnable = 1;
	onLoad = "uiNamespace setVariable ['RangleCard_Display', (_this select 0)]";
	onUnload = "_this call ace_rangecard_fnc_onCloseDialog";
	objects[] = {};
	class controls
	{
		class BACKGROUND
		{
			moving = 1;
			type = 0;
			font = "TahomaB";
			SizeEX = 0.025;
			idc = -1;
			style = 48;
			x = "safezoneX";
			y = "safezoneY+0.181889";
			w = "1.62727*3/4";
			h = "1.62727";
			colorBackground[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			text = "\z\ace\addons\rangecard\UI\RangeCard.paa";
		};
		class CAPTION_TEXT_1: RangeCard_RscText
		{
			idc = 770000;
			style = 0;
			x = "safezoneX+0.18";
			y = "safezoneY+0.181889+0.0";
			w = "0.56*1.62727*3/4";
			text = ".408 CheyTac - 410 gr Predator Projectiles";
		};
		class CAPTION_TEXT_2: CAPTION_TEXT_1
		{
			idc = 770001;
			SizeEx = 0.022;
			y = "safezoneY+0.181889+0.03";
			text = "Drop Tables for B.P.: 1013.25mb; Corrected for MVV at Air/Ammo Temperatures -15-35 °C";
		};
		class CAPTION_TEXT_3: CAPTION_TEXT_2
		{
			idc = 770002;
			y = "safezoneY+0.181889+0.06";
			text = "CheyTac Intervention - 29'' 1:13'' twist (M-200)";
		};
		class ZERO_RANGE_TEXT: RangeCard_RscText
		{
			idc = 77003;
			style = 0;
			SizeEx = 0.028;
			x = "safezoneX+0.885";
			y = "safezoneY+0.181889+0.01";
			w = "0.125*1.62727*3/4";
			text = "100m ZERO";
		};
		class BAROMETRIC_PRESSURE_TEXT: ZERO_RANGE_TEXT
		{
			idc = 77004;
			colorText[] = {1,0,0,0.8};
			y = "safezoneY+0.181889+0.05";
			text = "B.P.: 1013.25mb";
		};
		class TARGET_RANGE_TEXT_1: RangeCard_RscText
		{
			idc = 770010;
			colorText[] = {1,1,1,1};
			x = "safezoneX+0.185";
			y = "safezoneY+0.181889+0.098";
			text = "Target";
		};
		class TARGET_RANGE_TEXT_2: TARGET_RANGE_TEXT_1
		{
			idc = 770011;
			SizeEx = 0.03;
			y = "safezoneY+0.181889+0.125";
			text = "Range";
		};
		class TARGET_RANGE_TEXT_3: TARGET_RANGE_TEXT_1
		{
			idc = 770012;
			y = "safezoneY+0.181889+0.152";
			text = "(m)";
		};
		class BULLET_DROP_TEXT_1: RangeCard_RscText
		{
			idc = 770013;
			x = "safezoneX+0.25";
			y = "safezoneY+0.181889+0.095";
			w = "0.405*1.62727*3/4";
			text = "Bullet Drop (MRADs)";
		};
		class WIND_LEAD_CAPTION_LIST: RangeCard_RscListNBox
		{
			idc = 770100;
			sizeEx = 0.021;
			x = "safezoneX+0.728";
			y = "safezoneY+0.181889+0.091";
			w = "0.25*1.62727*3/4";
			h = "0.0909445";
			columns[] = {"(0.03/2)","(0.985/2)"};
			idcLeft = 770101;
			idcRight = 770102;
		};
		class TEMPERATURE_CAPTION_LIST_1: RangeCard_RscListNBox
		{
			idc = 770200;
			x = "safezoneX+0.24";
			y = "safezoneY+0.181889+0.125";
			w = "0.405*1.62727*3/4";
			h = "0.0909445";
			columns[] = {"(0/9)","(1/9)","(2/9)","(3/9)","(4/9)","(5/9)","(5.9/9)","(6.9/9)","(7.8/9)"};
			idcLeft = 770201;
			idcRight = 770202;
		};
		class TEMPERATURE_CAPTION_LIST_2: RangeCard_RscListNBox
		{
			idc = 770300;
			x = "safezoneX+0.728";
			y = "safezoneY+0.181889+0.15";
			w = "0.25*1.62727*3/4";
			h = "0.0909445";
			columns[] = {"(0/6)","(0.9/6)","(1.8/6)","(2.9/6)","(3.8/6)","(4.8/6)"};
			idcLeft = 770301;
			idcRight = 770302;
		};
		class RANGE_CARD_DATA: RangeCard_RscListNBox
		{
			idc = 770400;
			x = "safezoneX+0.182";
			y = "safezoneY+0.181889+0.194";
			w = "0.72*1.62727*3/4";
			h = "1.62727";
			columns[] = {"(0/16)","(1.2/16)","(2.2/16)","(3.2/16)","(4.2/16)","(5.1/16)","(6.1/16)","(7.1/16)","(8.1/16)","(9/16)","(10.2/16)","(11/16)","(11.9/16)","(12.8/16)","(13.7/16)","(14.6/16)"};
			idcLeft = 770401;
			idcRight = 770402;
		};
		class FOOTNOTE_TEXT_1: CAPTION_TEXT_1
		{
			idc = 770020;
			SizeEx = 0.022;
			y = "safezoneY+1.72431";
			w = "0.705*1.62727*3/4";
			text = "For best results keep ammunition at ambient air temperature. Tables calculated for the above listed barrel";
		};
		class FOOTNOTE_TEXT_2: FOOTNOTE_TEXT_1
		{
			idc = 770021;
			y = "safezoneY+1.72431+0.024";
			text = "and load with optic mounted 1.5'' above line of bore.";
		};
	};
};
