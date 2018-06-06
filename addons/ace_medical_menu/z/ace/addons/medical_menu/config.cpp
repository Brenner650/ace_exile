////////////////////////////////////////////////////////////////////
//DeRap: ace_medical_menu\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:03 2018 : 'file' last modified on Mon Apr 16 21:46:37 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_medical_menu
	{
		name = "ACE3 - Medical Menu";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_medical"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Glowbal"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_medical_menu
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\medical_menu\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_medical_menu
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\medical_menu\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_medical_menu
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\medical_menu\XEH_postInit.sqf'";
	};
};
class ACE_gui_backgroundBase
{
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "RobotoCondensed";
	text = "";
	sizeEx = 0.032;
};
class ACE_gui_editBase
{
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {0,0,0,1};
	colorText[] = {0.95,0.95,0.95,1};
	colorSelection[] = {"(profilenamespace getVariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getVariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getVariable ['GUI_BCG_RGB_B',0.8862])",1};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "RobotoCondensed";
	shadow = 2;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorDisabled[] = {1,1,1,0.25};
};
class ACE_gui_buttonBase
{
	idc = -1;
	type = 16;
	style = 0;
	text = "";
	action = "";
	x = 0.0;
	y = 0.0;
	w = 0.25;
	h = 0.04;
	size = 0.03921;
	sizeEx = 0.03921;
	color[] = {1.0,1.0,1.0,1};
	color2[] = {1.0,1.0,1.0,1};
	colorBackground[] = {1,1,1,0.95};
	colorbackground2[] = {1,1,1,0.95};
	colorDisabled[] = {1,1,1,0.6};
	colorFocused[] = {1,1,1,1};
	colorBackgroundFocused[] = {1,1,1,1};
	periodFocus = 1.2;
	periodOver = 0.8;
	default = 0;
	class HitZone
	{
		left = 0.0;
		top = 0.0;
		right = 0.0;
		bottom = 0.0;
	};
	class ShortcutPos
	{
		left = 0.0;
		top = 0.0;
		w = 0.0;
		h = 0.0;
	};
	class TextPos
	{
		left = 0.002;
		top = 0.0004;
		right = 0.0;
		bottom = 0.0;
	};
	textureNoShortcut = "";
	animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.9)";
	animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.8)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	period = 0.5;
	font = "RobotoCondensed";
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.0,0};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.07,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "center";
		shadow = "true";
	};
	class AttributesImage
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
};
class ACE_gui_RscProgress
{
	type = 8;
	style = 0;
	colorFrame[] = {1,1,1,0.7};
	colorBar[] = {1,1,1,0.7};
	texture = "#(argb,8,8,3)color(1,1,1,0.7)";
	x = "1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
	y = "10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	w = "38 * (((safezoneW / safezoneH) min 1.2) / 40)";
	h = "0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
};
class ACE_gui_staticBase
{
	idc = -1;
	type = 0;
	x = 0.0;
	y = 0.0;
	w = 0.183825;
	h = 0.104575;
	style = 0;
	font = "RobotoCondensed";
	sizeEx = 0.03921;
	colorText[] = {0.95,0.95,0.95,1.0};
	colorBackground[] = {0,0,0,0};
	text = "";
};
class RscListBox;
class ACE_gui_listBoxBase: RscListBox
{
	type = 5;
	style = 16;
	font = "RobotoCondensed";
	sizeEx = 0.03921;
	color[] = {1,1,1,1};
	colorText[] = {0.543,0.5742,0.4102,1.0};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorSelect2[] = {0.95,0.95,0.95,1};
	colorSelectBackground[] = {0,0,0,1};
	colorSelectBackground2[] = {0.543,0.5742,0.4102,1.0};
	colorDisabled[] = {"(profilenamespace getVariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getVariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getVariable ['GUI_BCG_RGB_B',0.5])",0.25};
	period = 1.2;
	rowHeight = 0.03;
	colorBackground[] = {0,0,0,1};
	maxHistoryDelay = 1.0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	soundSelect[] = {"",0.1,1};
	soundExpand[] = {"",0.1,1};
	soundCollapse[] = {"",0.1,1};
	class ListScrollBar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 0;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
	class ScrollBar
	{
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		thumb = "";
		arrowFull = "";
		arrowEmpty = "";
		border = "";
	};
};
class ACE_gui_listNBox
{
	type = 102;
	style = 16;
	w = 0.4;
	h = 0.4;
	font = "RobotoCondensed";
	sizeEx = 0.031;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	columns[] = {0.0};
	color[] = {1,1,1,1};
	rowHeight = 0.03;
	colorBackground[] = {0,0,0,0.2};
	colorText[] = {1,1,1,1.0};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorSelect2[] = {0.95,0.95,0.95,1};
	colorSelectBackground[] = {0,0,0,0.0};
	colorSelectBackground2[] = {0.0,0.0,0.0,0.5};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,0.3};
	rows = 1;
	drawSideArrows = 0;
	idcLeft = -1;
	idcRight = -1;
	maxHistoryDelay = 1;
	soundSelect[] = {"",0.1,1};
	period = 1;
	shadow = 2;
	class ScrollBar
	{
		arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
		arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
		border = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		thumb = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class ListScrollBar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 0;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
};
class RscCombo;
class ACE_gui_comboBoxBase: RscCombo
{
	idc = -1;
	type = 4;
	style = "0x10 + 0x200";
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.035;
	color[] = {0,0,0,0.6};
	colorActive[] = {1,0,0,1};
	colorBackground[] = {0,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,1};
	colorSelect[] = {0,0,0,1};
	colorSelectBackground[] = {1,1,1,0.7};
	colorText[] = {1,1,1,1};
	arrowEmpty = "";
	arrowFull = "";
	wholeHeight = 0.45;
	font = "RobotoCondensed";
	sizeEx = 0.031;
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	maxHistoryDelay = 1.0;
	class ScrollBar
	{
		color[] = {0.3,0.3,0.3,0.6};
		colorActive[] = {0.3,0.3,0.3,1};
		colorDisabled[] = {0.3,0.3,0.3,0.3};
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "";
	};
	class ComboScrollBar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 0;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {0.3,0.3,0.3,0.6};
		colorActive[] = {0.3,0.3,0.3,1};
		colorDisabled[] = {0.3,0.3,0.3,0.3};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
};
class ACE_gui_mapBase
{
	moveOnEdges = 1;
	x = "SafeZoneXAbs";
	y = "SafeZoneY + 1.5 *           (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	w = "SafeZoneWAbs";
	h = "SafeZoneH - 1.5 *           (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	type = 100;
	style = 48;
	shadow = 0;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 3;
	ptsPerSquareCLn = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareObj = 9;
	showCountourInterval = 0;
	scaleMin = 0.001;
	scaleMax = 1.0;
	scaleDefault = 0.16;
	maxSatelliteAlpha = 0.85;
	alphaFadeStartScale = 0.35;
	alphaFadeEndScale = 0.4;
	colorBackground[] = {0.969,0.957,0.949,1.0};
	colorSea[] = {0.467,0.631,0.851,0.5};
	colorForest[] = {0.624,0.78,0.388,0.5};
	colorForestBorder[] = {0.0,0.0,0.0,0.0};
	colorRocks[] = {0.0,0.0,0.0,0.3};
	colorRocksBorder[] = {0.0,0.0,0.0,0.0};
	colorLevels[] = {0.286,0.177,0.094,0.5};
	colorMainCountlines[] = {0.572,0.354,0.188,0.5};
	colorCountlines[] = {0.572,0.354,0.188,0.25};
	colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
	colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
	colorPowerLines[] = {0.1,0.1,0.1,1.0};
	colorRailWay[] = {0.8,0.2,0.0,1.0};
	colorNames[] = {0.1,0.1,0.1,0.9};
	colorInactive[] = {1.0,1.0,1.0,0.5};
	colorOutside[] = {0.0,0.0,0.0,1.0};
	colorTracks[] = {0.84,0.76,0.65,0.15};
	colorTracksFill[] = {0.84,0.76,0.65,1.0};
	colorRoads[] = {0.7,0.7,0.7,1.0};
	colorRoadsFill[] = {1.0,1.0,1.0,1.0};
	colorMainRoads[] = {0.9,0.5,0.3,1.0};
	colorMainRoadsFill[] = {1.0,0.6,0.4,1.0};
	colorGrid[] = {0.1,0.1,0.1,0.6};
	colorGridMap[] = {0.1,0.1,0.1,0.6};
	colorText[] = {1,1,1,0.85};
	font = "RobotoCondensed";
	sizeEx = 0.027;
	stickX[] = {0.2,{"Gamma",1.0,1.5}};
	stickY[] = {0.2,{"Gamma",1.0,1.5}};
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	fontLabel = "RobotoCondensed";
	sizeExLabel = "(     (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontGrid = "TahomaB";
	sizeExGrid = 0.02;
	fontUnits = "TahomaB";
	sizeExUnits = "(     (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontNames = "RobotoCondensed";
	sizeExNames = "(     (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
	fontInfo = "RobotoCondensed";
	sizeExInfo = "(      (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontLevel = "TahomaB";
	sizeExLevel = 0.02;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	class ActiveMarker
	{
		color[] = {0.3,0.1,0.9,1.0};
		size = 50;
	};
	class Legend
	{
		x = "SafeZoneX +          (     ((safezoneW / safezoneH) min 1.2) / 40)";
		y = "SafeZoneY + safezoneH - 4.5 *          (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		w = "10 *           (     ((safezoneW / safezoneH) min 1.2) / 40)";
		h = "3.5 *          (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		font = "RobotoCondensed";
		sizeEx = "(     (     (     ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		colorBackground[] = {1,1,1,0.5};
		color[] = {0,0,0,1};
	};
	class Task
	{
		icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		color[] = {"(profilenamespace getVariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getVariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getVariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getVariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorCreated[] = {1,1,1,1};
		colorCanceled[] = {0.7,0.7,0.7,1};
		colorDone[] = {0.7,1,0.3,1};
		colorFailed[] = {1,0.3,0.2,1};
		size = 27;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
	class Waypoint
	{
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		color[] = {0,0,0,1};
		size = 20;
		importance = "1.2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class WaypointCompleted
	{
		icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
		color[] = {0,0,0,1};
		size = 20;
		importance = "1.2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class CustomMark
	{
		icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
		size = 24;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
		color[] = {0,0,0,1};
	};
	class Command
	{
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		size = 18;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
		color[] = {1,1,1,1};
	};
	class Bush
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[] = {0.45,0.64,0.33,0.4};
		size = "14/2";
		importance = "0.2 * 14 * 0.05 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Rock
	{
		icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		color[] = {0.1,0.1,0.1,0.8};
		size = 12;
		importance = "0.5 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class SmallTree
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[] = {0.45,0.64,0.33,0.4};
		size = 12;
		importance = "0.6 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Tree
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[] = {0.45,0.64,0.33,0.4};
		size = 12;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class busstop
	{
		icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class fuelstation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class hospital
	{
		icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class church
	{
		icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class lighthouse
	{
		icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class power
	{
		icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class powersolar
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class powerwave
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class powerwind
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class quay
	{
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class shipwreck
	{
		icon = "\A3\ui_f\data\map\mapcontrol\shipwreck_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class transmitter
	{
		icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class watertower
	{
		icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1,1,1,1};
	};
	class Cross
	{
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {0,0,0,1};
	};
	class Chapel
	{
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {0,0,0,1};
	};
	class Bunker
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		size = 14;
		importance = "1.5 * 14 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Fortress
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Fountain
	{
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		size = 11;
		importance = "1 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Ruin
	{
		icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		size = 16;
		importance = "1.2 * 16 * 0.05";
		coefMin = 1;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Stack
	{
		icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		size = 20;
		importance = "2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class Tourism
	{
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		size = 16;
		importance = "1 * 16 * 0.05";
		coefMin = 0.7;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
	class ViewTower
	{
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		size = 16;
		importance = "2.5 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
		color[] = {0,0,0,1};
	};
};
class ace_medical_menu_medicalMenu
{
	idd = 314412;
	movingEnable = 1;
	onLoad = "uiNamespace setVariable [""ace_medical_menu_medicalMenu"",_this select 0]; [_this select 0] call ace_medical_menu_fnc_onMenuOpen;";
	onUnload = "[] call ace_medical_menu_fnc_onMenuClose";
	class controlsBackground
	{
		class HeaderBackground: ACE_gui_backgroundBase
		{
			idc = -1;
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = "1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "#(argb,8,8,3)color(0,0,0,0)";
		};
		class CenterBackground: HeaderBackground
		{
			y = "2.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			h = "16 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "#(argb,8,8,3)color(0,0,0,0.8)";
			colorText[] = {0,0,0,"(profilenamespace getVariable ['GUI_BCG_RGB_A',0.9])"};
			colorBackground[] = {0,0,0,"(profilenamespace getVariable ['GUI_BCG_RGB_A',0.9])"};
		};
		class BottomBackground: CenterBackground
		{
			y = "(18.6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2))";
			h = "9 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class controls
	{
		class HeaderName
		{
			idc = 1;
			type = 0;
			x = "1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = "0x00+ 0x100";
			font = "RobotoCondensed";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			colorText[] = {0.95,0.95,0.95,0.75};
			colorBackground[] = {"(profilenamespace getVariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getVariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getVariable ['GUI_BCG_RGB_B',0.5])","(profilenamespace getVariable ['GUI_BCG_RGB_A',0.9])"};
			text = "";
		};
		class IconsBackGroundBar: ACE_gui_backgroundBase
		{
			idc = -1;
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = "1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "38 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "3.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "\z\ace\addons\medical_menu\data\background_img.paa";
			colorText[] = {1,1,1,0.0};
		};
		class CatagoryLeft: HeaderName
		{
			x = "1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "12.33 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			colorText[] = {1,1,1.0,0.9};
			colorBackground[] = {0,0,0,0};
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
			text = "$STR_ace_medical_menu_EXAMINE_TREATMENT";
		};
		class CatagoryCenter: CatagoryLeft
		{
			x = "13.33 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			text = "$STR_ace_medical_menu_STATUS";
		};
		class CatagoryRight: CatagoryCenter
		{
			x = "25.66 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			text = "$STR_ace_medical_menu_OVERVIEW";
		};
		class Line: ACE_gui_backgroundBase
		{
			idc = -1;
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			x = "1.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "37 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.03 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "#(argb,8,8,3)color(1,1,1,0.5)";
		};
		class iconImg1: ACE_gui_backgroundBase
		{
			idc = 111;
			x = "1.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.73 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.1)";
			colorBackground[] = {0,0,0,1};
			colorPicture[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			text = "\z\ace\addons\medical_menu\data\icons\triage_card_small.paa";
		};
		class iconImg2: iconImg1
		{
			idc = 112;
			x = "3 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			text = "\z\ace\addons\medical_menu\data\icons\examine_patient_small.paa";
		};
		class iconImg3: iconImg1
		{
			idc = 113;
			x = "4.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			text = "\z\ace\addons\medical_menu\data\icons\bandage_fracture_small.paa";
		};
		class iconImg4: iconImg1
		{
			idc = 114;
			x = "6 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			text = "\z\ace\addons\medical_menu\data\icons\medication_small.paa";
		};
		class iconImg5: iconImg1
		{
			idc = 115;
			x = "7.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			text = "\z\ace\addons\medical_menu\data\icons\airway_management_small.paa";
		};
		class iconImg6: iconImg1
		{
			idc = 116;
			x = "9 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			text = "\z\ace\addons\medical_menu\data\icons\advanced_treatment_small.paa";
		};
		class iconImg7: iconImg1
		{
			idc = 117;
			x = "10.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			text = "\z\ace\addons\medical_menu\data\icons\icon_carry.paa";
		};
		class iconImg8: iconImg1
		{
			idc = 118;
			x = "12 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			text = "\z\ace\addons\medical_menu\data\icons\toggle_self_small.paa";
		};
		class BtnIconLeft1: ACE_gui_buttonBase
		{
			idc = 11;
			x = "1.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.73 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.1)";
			animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureOver = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTexturePressed = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.0)";
			action = "['triage'] call ace_medical_menu_fnc_handleUI_DisplayOptions;";
		};
		class BtnIconLeft2: BtnIconLeft1
		{
			idc = 12;
			x = "3 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			action = "['examine'] call ace_medical_menu_fnc_handleUI_DisplayOptions;";
		};
		class BtnIconLeft3: BtnIconLeft1
		{
			idc = 13;
			x = "4.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			action = "['bandage'] call ace_medical_menu_fnc_handleUI_DisplayOptions;";
		};
		class BtnIconLeft4: BtnIconLeft1
		{
			idc = 14;
			x = "6 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			action = "['medication'] call ace_medical_menu_fnc_handleUI_DisplayOptions;";
		};
		class BtnIconLeft5: BtnIconLeft1
		{
			idc = 15;
			x = "7.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			action = "['airway'] call ace_medical_menu_fnc_handleUI_DisplayOptions;";
		};
		class BtnIconLeft6: BtnIconLeft1
		{
			idc = 16;
			x = "9 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			action = "['advanced'] call ace_medical_menu_fnc_handleUI_DisplayOptions;";
		};
		class BtnIconLeft7: BtnIconLeft1
		{
			idc = 17;
			x = "10.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			action = "['drag'] call ace_medical_menu_fnc_handleUI_DisplayOptions;";
		};
		class BtnIconLeft8: BtnIconLeft1
		{
			idc = 18;
			x = "12 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			action = "['toggle'] call ace_medical_menu_fnc_handleUI_DisplayOptions;";
		};
		class TriageCardList: ACE_gui_listBoxBase
		{
			idc = 212;
			x = "1.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "5.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "12 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			rowHeight = 0.03;
			colorBackground[] = {0,0,0,0.2};
			colorText[] = {1,1,1,1.0};
			colorScrollbar[] = {0.95,0.95,0.95,1};
			colorSelect[] = {0.95,0.95,0.95,1};
			colorSelect2[] = {0.95,0.95,0.95,1};
			colorSelectBackground[] = {0,0,0,0.0};
			colorSelectBackground2[] = {0.0,0.0,0.0,0.0};
		};
		class BtnMenu1: BtnIconLeft1
		{
			idc = 20;
			y = "5.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "12 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.8)";
			animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.5)";
			animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
			animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
			animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
			color[] = {1,1,1,1};
			color2[] = {0,0,0,1};
			colorBackgroundFocused[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			colorbackground2[] = {1,1,1,1};
			colorDisabled[] = {0.5,0.5,0.5,0.8};
			colorFocused[] = {0,0,0,1};
			periodFocus = 1;
			periodOver = 1;
			action = "";
		};
		class BtnMenu2: BtnMenu1
		{
			idc = 21;
			y = "6.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			text = "";
		};
		class BtnMenu3: BtnMenu1
		{
			idc = 22;
			y = "7.6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			text = "";
		};
		class BtnMenu4: BtnMenu1
		{
			idc = 23;
			y = "8.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			text = "";
		};
		class BtnMenu5: BtnMenu1
		{
			idc = 24;
			y = "9.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			text = "";
		};
		class BtnMenu6: BtnMenu1
		{
			idc = 25;
			y = "10.9 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			text = "";
		};
		class BtnMenu7: BtnMenu1
		{
			idc = 26;
			y = "12 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			text = "";
		};
		class BtnMenu8: BtnMenu1
		{
			idc = 27;
			y = "13.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			text = "";
		};
		class bodyImgBackground: ACE_gui_backgroundBase
		{
			idc = -1;
			x = "13.33 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.73 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "12.33 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "12.33 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4)";
			colorBackground[] = {1,1,1,1};
			colorPicture[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			text = "\z\ace\addons\medical\ui\body_background.paa";
		};
		class bodyImgHead: bodyImgBackground
		{
			idc = 50;
			x = "13.33 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.73 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "12.33 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "12.33 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4)";
			colorBackground[] = {1,1,1,1};
			colorPicture[] = {1,1,1,0.75};
			colorText[] = {1,1,1,0.75};
			text = "\z\ace\addons\medical\ui\body_head.paa";
		};
		class bodyImgTorso: bodyImgHead
		{
			idc = 51;
			text = "\z\ace\addons\medical\ui\body_torso.paa";
		};
		class bodyImgArms_l: bodyImgHead
		{
			idc = 52;
			text = "\z\ace\addons\medical\ui\body_arm_left.paa";
		};
		class bodyImgArms_r: bodyImgHead
		{
			idc = 53;
			text = "\z\ace\addons\medical\ui\body_arm_right.paa";
		};
		class bodyImgLegs_l: bodyImgHead
		{
			idc = 54;
			text = "\z\ace\addons\medical\ui\body_leg_left.paa";
		};
		class bodyImgLegs_r: bodyImgHead
		{
			idc = 55;
			text = "\z\ace\addons\medical\ui\body_leg_right.paa";
		};
		class selectHead: ACE_gui_buttonBase
		{
			idc = 301;
			x = "18.8 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "3.9 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.4 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.1)";
			animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureOver = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTexturePressed = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.0)";
			action = "ace_medical_menu_selectedBodyPart= 0;";
		};
		class selectTorso: selectHead
		{
			idc = 302;
			x = "18.4 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "5.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "2.2 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "4.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			action = "ace_medical_menu_selectedBodyPart= 1;";
		};
		class selectLeftArm: selectHead
		{
			idc = 303;
			x = "17.4 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "5.9 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "4.3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			action = "ace_medical_menu_selectedBodyPart= 3;";
		};
		class selectRightArm: selectLeftArm
		{
			idc = 304;
			x = "20.6 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			action = "ace_medical_menu_selectedBodyPart= 2;";
		};
		class selectLeftLeg: selectHead
		{
			idc = 305;
			x = "18.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "1.1 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			action = "ace_medical_menu_selectedBodyPart= 5;";
		};
		class selectRightLeg: selectLeftLeg
		{
			idc = 306;
			x = "19.6 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			action = "ace_medical_menu_selectedBodyPart= 4;";
		};
		class TriageTextBottom: HeaderName
		{
			idc = 2000;
			x = "13.33 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "16.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "12.33 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			colorText[] = {1,1,1.0,1};
			colorBackground[] = {0,0.0,0.0,0.7};
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			text = "";
		};
		class InjuryList: ACE_gui_listBoxBase
		{
			idc = 213;
			x = "25.66 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "5.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "12.33 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			rowHeight = 0.03;
			colorBackground[] = {0,0,0,0.2};
			colorText[] = {1,1,1,1.0};
			colorScrollbar[] = {0.95,0.95,0.95,1};
			colorSelect[] = {0.95,0.95,0.95,1};
			colorSelect2[] = {0.95,0.95,0.95,1};
			colorSelectBackground[] = {0,0,0,0.0};
			colorSelectBackground2[] = {0.0,0.0,0.0,0.5};
		};
		class ActivityLogHeader: CatagoryLeft
		{
			x = "1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "18.6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "18.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			colorText[] = {0.6,0.7,1.0,1};
			colorBackground[] = {0,0,0,0};
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			text = "$STR_ace_medical_menu_ACTIVITY_LOG";
		};
		class QuickViewHeader: ActivityLogHeader
		{
			x = "19.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			text = "$STR_ace_medical_menu_QUICK_VIEW";
		};
		class LineBottomHeaders: Line
		{
			y = "19.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
		};
		class ActivityLog: InjuryList
		{
			idc = 214;
			colorBackground[] = {0,0,0,0};
			x = "1.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "(19.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2))";
			w = "18.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "6.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			drawSideArrows = 0;
		};
		class QuikViewLog: InjuryList
		{
			idc = 215;
			colorBackground[] = {0,0,0,0};
			x = "21.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "(19.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2))";
			w = "18.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "6.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
			colorSelectBackground[] = {0,0,0,0.0};
			colorSelectBackground2[] = {0.0,0.0,0.0,0.0};
			drawSideArrows = 0;
		};
		class selectTriageStatus: ACE_gui_buttonBase
		{
			idc = 2001;
			x = "13.33 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
			y = "16.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "12.33 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			style = 2;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureOver = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTexturePressed = "#(argb,8,8,3)color(0,0,0,0.0)";
			animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.0)";
			action = "[] call ace_medical_menu_fnc_handleUI_dropDownTriageCard;";
		};
		class selectTriageStatusNone: selectTriageStatus
		{
			idc = 2002;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "$STR_ace_Medical_Triage_Status_None";
			style = 2;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureOver = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTexturePressed = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.9)";
			action = "[] call ace_medical_menu_fnc_handleUI_dropDownTriageCard; [ace_medical_menu_INTERACTION_TARGET,0] call ace_medical_menu_fnc_setTriageStatus;";
		};
		class selectTriageStatusMinor: selectTriageStatus
		{
			idc = 2003;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "$STR_ace_Medical_Triage_Status_Minor";
			style = 2;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			animTextureNormal = "#(argb,8,8,3)color(0,0.5,0,0.9)";
			animTextureDisabled = "#(argb,8,8,3)color(0,0.5,0,0.9)";
			animTextureOver = "#(argb,8,8,3)color(0,0.5,0,0.9)";
			animTextureFocused = "#(argb,8,8,3)color(0,0.5,0,0.9)";
			animTexturePressed = "#(argb,8,8,3)color(0,0.5,0,0.9)";
			animTextureDefault = "#(argb,8,8,3)color(0,0.5,0,0.9)";
			action = "[] call ace_medical_menu_fnc_handleUI_dropDownTriageCard; [ace_medical_menu_INTERACTION_TARGET,1] call ace_medical_menu_fnc_setTriageStatus;";
		};
		class selectTriageStatusDelayed: selectTriageStatus
		{
			idc = 2004;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "$STR_ace_Medical_Triage_Status_Delayed";
			style = 2;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			animTextureNormal = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
			animTextureDisabled = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
			animTextureOver = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
			animTextureFocused = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
			animTexturePressed = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
			animTextureDefault = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
			action = "[] call ace_medical_menu_fnc_handleUI_dropDownTriageCard; [ace_medical_menu_INTERACTION_TARGET,2] call ace_medical_menu_fnc_setTriageStatus;";
		};
		class selectTriageStatusImmediate: selectTriageStatus
		{
			idc = 2005;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "$STR_ace_Medical_Triage_Status_Immediate";
			style = 2;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			animTextureNormal = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
			animTextureDisabled = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
			animTextureOver = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
			animTextureFocused = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
			animTexturePressed = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
			animTextureDefault = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
			action = "[] call ace_medical_menu_fnc_handleUI_dropDownTriageCard; [ace_medical_menu_INTERACTION_TARGET,3] call ace_medical_menu_fnc_setTriageStatus;";
		};
		class selectTriageStatusDeceased: selectTriageStatus
		{
			idc = 2006;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			text = "$STR_ace_Medical_Triage_Status_Deceased";
			style = 2;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureOver = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTexturePressed = "#(argb,8,8,3)color(0,0,0,0.9)";
			animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.9)";
			action = "[] call ace_medical_menu_fnc_handleUI_dropDownTriageCard; [ace_medical_menu_INTERACTION_TARGET,4] call ace_medical_menu_fnc_setTriageStatus;";
		};
	};
};
class ACE_Settings
{
	class ace_medical_menu_allow
	{
		displayName = "$STR_ace_medical_menu_allow";
		description = "$STR_ace_medical_menu_allow_Descr";
		value = 1;
		typeName = "SCALAR";
		values[] = {"$STR_ace_common_Disabled","$STR_ace_common_Enabled","$STR_ace_common_VehiclesOnly"};
		category = "$STR_ace_medical_Category_Medical";
	};
	class ace_medical_menu_useMenu
	{
		displayName = "$STR_ace_medical_menu_useMenu";
		description = "$STR_ace_medical_menu_useMenu_Descr";
		value = 0;
		typeName = "SCALAR";
		values[] = {"$STR_ace_common_Disabled","$STR_ace_common_Enabled","$STR_ace_common_VehiclesOnly"};
		isClientSettable = 1;
		category = "$STR_ace_medical_Category_Medical";
	};
	class ace_medical_menu_openAfterTreatment
	{
		displayName = "$STR_ace_medical_menu_openAfterTreatment";
		description = "$STR_ace_medical_menu_openAfterTreatment_Descr";
		typeName = "BOOL";
		value = 1;
		isClientSettable = 1;
		category = "$STR_ace_medical_Category_Medical";
	};
	class ace_medical_menu_maxRange
	{
		displayName = "$STR_ace_medical_menu_maxRange";
		description = "$STR_ace_medical_menu_maxRange_Descr";
		value = 3;
		typeName = "SCALAR";
		category = "$STR_ace_medical_Category_Medical";
		sliderSettings[] = {0,10,3,1};
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ACE_moduleMedicalMenuSettings: ACE_Module
	{
		scope = 1;
		displayName = "$STR_ace_medical_menu_module_DisplayName";
		icon = "\z\ace\addons\medical\UI\Icon_Module_Medical_ca.paa";
		category = "ACE_medical";
		function = "ace_medical_menu_fnc_module";
		functionPriority = 1;
		isGlobal = 1;
		isSingular = 1;
		isTriggerActivated = 0;
		author = "$STR_ace_common_ACETeam";
		class Arguments
		{
			class allow
			{
				displayName = "$STR_ace_medical_menu_allow";
				description = "$STR_ace_medical_menu_allow_Descr";
				typeName = "NUMBER";
				class values
				{
					class disable
					{
						name = "$STR_ace_common_Disabled";
						value = 0;
					};
					class enable
					{
						name = "$STR_ace_common_Enabled";
						value = 1;
						default = 1;
					};
					class VehiclesOnly
					{
						name = "$STR_ace_common_VehiclesOnly";
						value = 2;
					};
				};
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_medical_menu_module_Desc";
			sync[] = {};
		};
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class Medical_Menu
			{
				displayName = "$STR_ace_medical_menu_OpenMenu";
				runOnHover = 0;
				exceptions[] = {"isNotInside","isNotSwimming"};
				condition = "[ACE_player,_target] call ace_medical_menu_fnc_canOpenMenu";
				statement = "[_target] call ace_medical_menu_fnc_openMenu";
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
			};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class Medical_Menu
				{
					displayName = "$STR_ace_medical_menu_OpenMenu";
					runOnHover = 0;
					exceptions[] = {"isNotInside","isNotSwimming"};
					condition = "[ACE_player,_target] call ace_medical_menu_fnc_canOpenMenu";
					statement = "[_target] call ace_medical_menu_fnc_openMenu";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				};
			};
		};
	};
};
class ACE_newEvents
{
	Medical_onMenuOpen = "ace_medicalMenuOpened";
};
