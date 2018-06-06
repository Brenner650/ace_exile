////////////////////////////////////////////////////////////////////
//DeRap: ace_logistics_wirecutter\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:03 2018 : 'file' last modified on Mon Apr 16 21:45:40 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_logistics_wirecutter
	{
		name = "ACE3 - Logistics Wire Cutter";
		units[] = {};
		weapons[] = {"ACE_wirecutter"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"gpgpgpgp","PabstMirror"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_logistics_wirecutter
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\logistics_wirecutter\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_logistics_wirecutter
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\logistics_wirecutter\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_logistics_wirecutter
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\logistics_wirecutter\XEH_clientInit.sqf'";
	};
};
class CfgWeapons
{
	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;
	class ACE_wirecutter: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		displayName = "$STR_ace_logistics_wirecutter_wirecutterName";
		descriptionShort = "$STR_ace_logistics_wirecutter_wirecutterDescription";
		model = "\z\ace\addons\logistics_wirecutter\data\ace_wirecutter.p3d";
		picture = "\z\ace\addons\logistics_wirecutter\ui\item_wirecutter_ca.paa";
		scope = 2;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 25;
		};
	};
};
class CfgVehicles
{
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_wirecutter
			{
				name = "ACE_wirecutter";
				count = 4;
			};
		};
	};
	class Wall_F;
	class NonStrategic;
	class Land_Net_Fence_4m_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_Net_Fence_8m_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_New_WiredFence_5m_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_New_WiredFence_10m_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_SportGround_fence_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_Wired_Fence_4m_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_Wired_Fence_8m_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_SportGround_fence_noLC_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_Mil_WiredFence_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_IndFnc_Corner_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_IndFnc_9_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_IndFnc_3_Hole_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_IndFnc_3_F: Wall_F
	{
		ace_logistics_wirecutter_isFence = 1;
	};
	class Land_Razorwire_F: NonStrategic
	{
		ace_logistics_wirecutter_isFence = 1;
	};
};
