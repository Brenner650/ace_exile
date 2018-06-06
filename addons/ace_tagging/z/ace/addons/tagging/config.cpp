////////////////////////////////////////////////////////////////////
//DeRap: ace_tagging\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:08 2018 : 'file' last modified on Mon Apr 16 21:48:55 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_tagging
	{
		name = "ACE3 - Tagging";
		units[] = {"ACE_Item_SpraypaintBlack","ACE_Item_SpraypaintRed","ACE_Item_SpraypaintGreen","ACE_Item_SpraypaintBlue"};
		weapons[] = {"ACE_SpraypaintBlack","ACE_SpraypaintRed","ACE_SpraypaintGreen","ACE_SpraypaintBlue"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"BaerMitUmlaut","esteldunedain","Jonpas"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class ACE_Settings
{
	class ace_tagging_quickTag
	{
		category = "$STR_ace_tagging_Tagging";
		displayName = "$STR_ace_tagging_QuickTag";
		description = "$STR_ace_tagging_QuickTagDesc";
		typeName = "SCALAR";
		value = 1;
		values[] = {"$STR_ace_Common_Disabled","$STR_ace_tagging_LastUsed","$STR_ace_tagging_RandomX","$STR_ace_tagging_Random"};
		isClientSettable = 1;
	};
};
class ACE_Tags
{
	class ACE_XBlack
	{
		displayName = "$STR_ace_tagging_XBlack";
		requiredItem = "ACE_SpraypaintBlack";
		textures[] = {"\z\ace\addons\tagging\UI\tags\black\0.paa","\z\ace\addons\tagging\UI\tags\black\1.paa","\z\ace\addons\tagging\UI\tags\black\2.paa"};
		icon = "\z\ace\addons\tagging\UI\icons\iconTaggingBlack.paa";
	};
	class ACE_XRed
	{
		displayName = "$STR_ace_tagging_XRed";
		requiredItem = "ACE_SpraypaintRed";
		textures[] = {"\z\ace\addons\tagging\UI\tags\red\0.paa","\z\ace\addons\tagging\UI\tags\red\1.paa","\z\ace\addons\tagging\UI\tags\red\2.paa"};
		icon = "\z\ace\addons\tagging\UI\icons\iconTaggingRed.paa";
	};
	class ACE_XGreen
	{
		displayName = "$STR_ace_tagging_XGreen";
		requiredItem = "ACE_SpraypaintGreen";
		textures[] = {"\z\ace\addons\tagging\UI\tags\green\0.paa","\z\ace\addons\tagging\UI\tags\green\1.paa","\z\ace\addons\tagging\UI\tags\green\2.paa"};
		icon = "\z\ace\addons\tagging\UI\icons\iconTaggingGreen.paa";
	};
	class ACE_XBlue
	{
		displayName = "$STR_ace_tagging_XBlue";
		requiredItem = "ACE_SpraypaintBlue";
		textures[] = {"\z\ace\addons\tagging\UI\tags\blue\0.paa","\z\ace\addons\tagging\UI\tags\blue\1.paa","\z\ace\addons\tagging\UI\tags\blue\2.paa"};
		icon = "\z\ace\addons\tagging\UI\icons\iconTaggingBlue.paa";
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_tagging
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\tagging\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_tagging
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\tagging\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_tagging
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\tagging\XEH_postInit.sqf'";
	};
};
class CfgVehicles
{
	class ACE_Module;
	class ACE_ModuleTagging: ACE_Module
	{
		author = "$STR_ace_common_ACETeam";
		category = "ACE";
		displayName = "$STR_ace_tagging_Tagging";
		function = "ace_tagging_fnc_moduleInit";
		scope = 1;
		isGlobal = 1;
		icon = "\z\ace\addons\tagging\UI\Icon_Module_Tagging_ca.paa";
		class Arguments
		{
			class quickTag
			{
				displayName = "$STR_ace_tagging_QuickTag";
				description = "$STR_ace_tagging_QuickTagDesc";
				typeName = "NUMBER";
				class values
				{
					class disabled
					{
						name = "$STR_ace_Common_Disabled";
						value = 0;
					};
					class lastUsed
					{
						name = "$STR_ace_tagging_LastUsed";
						value = 1;
						default = 1;
					};
					class randomX
					{
						name = "$STR_ace_tagging_RandomX";
						value = 2;
					};
					class random
					{
						name = "$STR_ace_tagging_Random";
						value = 3;
					};
				};
			};
		};
		class ModuleDescription
		{
			description = "$STR_ace_tagging_ModuleDesc";
		};
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Tags
			{
				displayName = "$STR_ace_tagging_Tag";
				condition = "_player call ace_tagging_fnc_checkTaggable";
				statement = "_player call ace_tagging_fnc_quickTag";
				icon = "\z\ace\addons\tagging\UI\icons\iconTaggingBlack.paa";
				insertChildren = "_player call ace_tagging_fnc_addTagActions";
			};
		};
	};
	class Item_Base_F;
	class ACE_Item_SpraypaintBlack: Item_Base_F
	{
		author = "jokoho48";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_ace_tagging_SpraypaintBlack";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_SpraypaintBlack
			{
				name = "ACE_SpraypaintBlack";
				count = 1;
			};
		};
	};
	class ACE_Item_SpraypaintRed: ACE_Item_SpraypaintBlack
	{
		displayName = "$STR_ace_tagging_SpraypaintRed";
		class TransportItems
		{
			class _xx_ACE_SpraypaintRed
			{
				name = "ACE_SpraypaintRed";
				count = 1;
			};
		};
	};
	class ACE_Item_SpraypaintGreen: ACE_Item_SpraypaintBlack
	{
		displayName = "$STR_ace_tagging_SpraypaintGreen";
		class TransportItems
		{
			class _xx_ACE_SpraypaintGreen
			{
				name = "ACE_SpraypaintGreen";
				count = 1;
			};
		};
	};
	class ACE_Item_SpraypaintBlue: ACE_Item_SpraypaintBlack
	{
		displayName = "$STR_ace_tagging_SpraypaintBlue";
		class TransportItems
		{
			class _xx_ACE_SpraypaintBlue
			{
				name = "ACE_SpraypaintBlue";
				count = 1;
			};
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportItems
		{
			class _xx_ACE_SpraypaintBlack
			{
				name = "ACE_SpraypaintBlack";
				count = 5;
			};
			class _xx_ACE_SpraypaintRed
			{
				name = "ACE_SpraypaintRed";
				count = 5;
			};
			class _xx_ACE_SpraypaintBlue
			{
				name = "ACE_SpraypaintBlue";
				count = 5;
			};
			class _xx_ACE_SpraypaintGreen
			{
				name = "ACE_SpraypaintGreen";
				count = 5;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_SpraypaintBlack: ACE_ItemCore
	{
		author = "jokoho48";
		displayname = "$STR_ace_tagging_spraypaintBlack";
		descriptionShort = "$STR_ace_tagging_descSpraypaint";
		picture = "\z\ace\addons\tagging\UI\items\itemSpraypaintBlack.paa";
		model = "\z\ace\addons\tagging\data\SprayCan.p3d";
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\z\ace\addons\tagging\data\spraycanBlack_co.paa"};
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
	};
	class ACE_SpraypaintRed: ACE_SpraypaintBlack
	{
		displayname = "$STR_ace_tagging_spraypaintRed";
		picture = "\z\ace\addons\tagging\UI\items\itemSpraypaintRed.paa";
		hiddenSelectionsTextures[] = {"\z\ace\addons\tagging\data\spraycanRed_co.paa"};
	};
	class ACE_SpraypaintGreen: ACE_SpraypaintBlack
	{
		displayname = "$STR_ace_tagging_spraypaintGreen";
		picture = "\z\ace\addons\tagging\UI\items\itemSpraypaintGreen.paa";
		hiddenSelectionsTextures[] = {"\z\ace\addons\tagging\data\spraycanGreen_co.paa"};
	};
	class ACE_SpraypaintBlue: ACE_SpraypaintBlack
	{
		displayname = "$STR_ace_tagging_spraypaintBlue";
		picture = "\z\ace\addons\tagging\UI\items\itemSpraypaintBlue.paa";
		hiddenSelectionsTextures[] = {"\z\ace\addons\tagging\data\spraycanBlue_co.paa"};
	};
};
