////////////////////////////////////////////////////////////////////
//DeRap: ace_dogtags\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:56 2018 : 'file' last modified on Mon Apr 16 21:42:50 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_dogtags
	{
		name = "ACE3 - Dogtags";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_interaction"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"SzwedzikPL"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_dogtags
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\dogtags\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_dogtags
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\dogtags\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_dogtags
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\dogtags\XEH_postInit.sqf'";
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_dogtag: ACE_ItemCore
	{
		author = "$STR_ace_common_ACETeam";
		scope = 0;
		displayName = "$STR_ace_dogtags_itemName";
		model = "\z\ace\addons\dogtags\data\ace_dogtag.p3d";
		picture = "\z\ace\addons\dogtags\data\dogtagSingle.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0;
		};
	};
	class ACE_dogtag_1: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 1;
	};
	class ACE_dogtag_2: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 2;
	};
	class ACE_dogtag_3: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 3;
	};
	class ACE_dogtag_4: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 4;
	};
	class ACE_dogtag_5: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 5;
	};
	class ACE_dogtag_6: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 6;
	};
	class ACE_dogtag_7: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 7;
	};
	class ACE_dogtag_8: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 8;
	};
	class ACE_dogtag_9: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 9;
	};
	class ACE_dogtag_10: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 10;
	};
	class ACE_dogtag_11: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 11;
	};
	class ACE_dogtag_12: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 12;
	};
	class ACE_dogtag_13: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 13;
	};
	class ACE_dogtag_14: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 14;
	};
	class ACE_dogtag_15: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 15;
	};
	class ACE_dogtag_16: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 16;
	};
	class ACE_dogtag_17: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 17;
	};
	class ACE_dogtag_18: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 18;
	};
	class ACE_dogtag_19: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 19;
	};
	class ACE_dogtag_20: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 20;
	};
	class ACE_dogtag_21: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 21;
	};
	class ACE_dogtag_22: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 22;
	};
	class ACE_dogtag_23: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 23;
	};
	class ACE_dogtag_24: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 24;
	};
	class ACE_dogtag_25: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 25;
	};
	class ACE_dogtag_26: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 26;
	};
	class ACE_dogtag_27: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 27;
	};
	class ACE_dogtag_28: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 28;
	};
	class ACE_dogtag_29: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 29;
	};
	class ACE_dogtag_30: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 30;
	};
	class ACE_dogtag_31: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 31;
	};
	class ACE_dogtag_32: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 32;
	};
	class ACE_dogtag_33: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 33;
	};
	class ACE_dogtag_34: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 34;
	};
	class ACE_dogtag_35: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 35;
	};
	class ACE_dogtag_36: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 36;
	};
	class ACE_dogtag_37: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 37;
	};
	class ACE_dogtag_38: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 38;
	};
	class ACE_dogtag_39: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 39;
	};
	class ACE_dogtag_40: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 40;
	};
	class ACE_dogtag_41: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 41;
	};
	class ACE_dogtag_42: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 42;
	};
	class ACE_dogtag_43: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 43;
	};
	class ACE_dogtag_44: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 44;
	};
	class ACE_dogtag_45: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 45;
	};
	class ACE_dogtag_46: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 46;
	};
	class ACE_dogtag_47: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 47;
	};
	class ACE_dogtag_48: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 48;
	};
	class ACE_dogtag_49: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 49;
	};
	class ACE_dogtag_50: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 50;
	};
	class ACE_dogtag_51: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 51;
	};
	class ACE_dogtag_52: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 52;
	};
	class ACE_dogtag_53: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 53;
	};
	class ACE_dogtag_54: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 54;
	};
	class ACE_dogtag_55: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 55;
	};
	class ACE_dogtag_56: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 56;
	};
	class ACE_dogtag_57: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 57;
	};
	class ACE_dogtag_58: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 58;
	};
	class ACE_dogtag_59: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 59;
	};
	class ACE_dogtag_60: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 60;
	};
	class ACE_dogtag_61: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 61;
	};
	class ACE_dogtag_62: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 62;
	};
	class ACE_dogtag_63: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 63;
	};
	class ACE_dogtag_64: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 64;
	};
	class ACE_dogtag_65: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 65;
	};
	class ACE_dogtag_66: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 66;
	};
	class ACE_dogtag_67: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 67;
	};
	class ACE_dogtag_68: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 68;
	};
	class ACE_dogtag_69: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 69;
	};
	class ACE_dogtag_70: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 70;
	};
	class ACE_dogtag_71: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 71;
	};
	class ACE_dogtag_72: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 72;
	};
	class ACE_dogtag_73: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 73;
	};
	class ACE_dogtag_74: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 74;
	};
	class ACE_dogtag_75: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 75;
	};
	class ACE_dogtag_76: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 76;
	};
	class ACE_dogtag_77: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 77;
	};
	class ACE_dogtag_78: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 78;
	};
	class ACE_dogtag_79: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 79;
	};
	class ACE_dogtag_80: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 80;
	};
	class ACE_dogtag_81: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 81;
	};
	class ACE_dogtag_82: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 82;
	};
	class ACE_dogtag_83: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 83;
	};
	class ACE_dogtag_84: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 84;
	};
	class ACE_dogtag_85: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 85;
	};
	class ACE_dogtag_86: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 86;
	};
	class ACE_dogtag_87: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 87;
	};
	class ACE_dogtag_88: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 88;
	};
	class ACE_dogtag_89: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 89;
	};
	class ACE_dogtag_90: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 90;
	};
	class ACE_dogtag_91: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 91;
	};
	class ACE_dogtag_92: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 92;
	};
	class ACE_dogtag_93: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 93;
	};
	class ACE_dogtag_94: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 94;
	};
	class ACE_dogtag_95: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 95;
	};
	class ACE_dogtag_96: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 96;
	};
	class ACE_dogtag_97: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 97;
	};
	class ACE_dogtag_98: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 98;
	};
	class ACE_dogtag_99: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 99;
	};
	class ACE_dogtag_100: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 100;
	};
	class ACE_dogtag_101: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 101;
	};
	class ACE_dogtag_102: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 102;
	};
	class ACE_dogtag_103: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 103;
	};
	class ACE_dogtag_104: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 104;
	};
	class ACE_dogtag_105: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 105;
	};
	class ACE_dogtag_106: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 106;
	};
	class ACE_dogtag_107: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 107;
	};
	class ACE_dogtag_108: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 108;
	};
	class ACE_dogtag_109: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 109;
	};
	class ACE_dogtag_110: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 110;
	};
	class ACE_dogtag_111: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 111;
	};
	class ACE_dogtag_112: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 112;
	};
	class ACE_dogtag_113: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 113;
	};
	class ACE_dogtag_114: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 114;
	};
	class ACE_dogtag_115: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 115;
	};
	class ACE_dogtag_116: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 116;
	};
	class ACE_dogtag_117: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 117;
	};
	class ACE_dogtag_118: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 118;
	};
	class ACE_dogtag_119: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 119;
	};
	class ACE_dogtag_120: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 120;
	};
	class ACE_dogtag_121: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 121;
	};
	class ACE_dogtag_122: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 122;
	};
	class ACE_dogtag_123: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 123;
	};
	class ACE_dogtag_124: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 124;
	};
	class ACE_dogtag_125: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 125;
	};
	class ACE_dogtag_126: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 126;
	};
	class ACE_dogtag_127: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 127;
	};
	class ACE_dogtag_128: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 128;
	};
	class ACE_dogtag_129: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 129;
	};
	class ACE_dogtag_130: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 130;
	};
	class ACE_dogtag_131: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 131;
	};
	class ACE_dogtag_132: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 132;
	};
	class ACE_dogtag_133: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 133;
	};
	class ACE_dogtag_134: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 134;
	};
	class ACE_dogtag_135: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 135;
	};
	class ACE_dogtag_136: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 136;
	};
	class ACE_dogtag_137: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 137;
	};
	class ACE_dogtag_138: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 138;
	};
	class ACE_dogtag_139: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 139;
	};
	class ACE_dogtag_140: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 140;
	};
	class ACE_dogtag_141: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 141;
	};
	class ACE_dogtag_142: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 142;
	};
	class ACE_dogtag_143: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 143;
	};
	class ACE_dogtag_144: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 144;
	};
	class ACE_dogtag_145: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 145;
	};
	class ACE_dogtag_146: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 146;
	};
	class ACE_dogtag_147: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 147;
	};
	class ACE_dogtag_148: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 148;
	};
	class ACE_dogtag_149: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 149;
	};
	class ACE_dogtag_150: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 150;
	};
	class ACE_dogtag_151: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 151;
	};
	class ACE_dogtag_152: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 152;
	};
	class ACE_dogtag_153: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 153;
	};
	class ACE_dogtag_154: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 154;
	};
	class ACE_dogtag_155: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 155;
	};
	class ACE_dogtag_156: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 156;
	};
	class ACE_dogtag_157: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 157;
	};
	class ACE_dogtag_158: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 158;
	};
	class ACE_dogtag_159: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 159;
	};
	class ACE_dogtag_160: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 160;
	};
	class ACE_dogtag_161: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 161;
	};
	class ACE_dogtag_162: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 162;
	};
	class ACE_dogtag_163: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 163;
	};
	class ACE_dogtag_164: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 164;
	};
	class ACE_dogtag_165: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 165;
	};
	class ACE_dogtag_166: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 166;
	};
	class ACE_dogtag_167: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 167;
	};
	class ACE_dogtag_168: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 168;
	};
	class ACE_dogtag_169: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 169;
	};
	class ACE_dogtag_170: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 170;
	};
	class ACE_dogtag_171: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 171;
	};
	class ACE_dogtag_172: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 172;
	};
	class ACE_dogtag_173: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 173;
	};
	class ACE_dogtag_174: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 174;
	};
	class ACE_dogtag_175: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 175;
	};
	class ACE_dogtag_176: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 176;
	};
	class ACE_dogtag_177: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 177;
	};
	class ACE_dogtag_178: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 178;
	};
	class ACE_dogtag_179: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 179;
	};
	class ACE_dogtag_180: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 180;
	};
	class ACE_dogtag_181: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 181;
	};
	class ACE_dogtag_182: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 182;
	};
	class ACE_dogtag_183: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 183;
	};
	class ACE_dogtag_184: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 184;
	};
	class ACE_dogtag_185: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 185;
	};
	class ACE_dogtag_186: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 186;
	};
	class ACE_dogtag_187: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 187;
	};
	class ACE_dogtag_188: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 188;
	};
	class ACE_dogtag_189: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 189;
	};
	class ACE_dogtag_190: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 190;
	};
	class ACE_dogtag_191: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 191;
	};
	class ACE_dogtag_192: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 192;
	};
	class ACE_dogtag_193: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 193;
	};
	class ACE_dogtag_194: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 194;
	};
	class ACE_dogtag_195: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 195;
	};
	class ACE_dogtag_196: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 196;
	};
	class ACE_dogtag_197: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 197;
	};
	class ACE_dogtag_198: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 198;
	};
	class ACE_dogtag_199: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 199;
	};
	class ACE_dogtag_200: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 200;
	};
	class ACE_dogtag_201: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 201;
	};
	class ACE_dogtag_202: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 202;
	};
	class ACE_dogtag_203: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 203;
	};
	class ACE_dogtag_204: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 204;
	};
	class ACE_dogtag_205: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 205;
	};
	class ACE_dogtag_206: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 206;
	};
	class ACE_dogtag_207: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 207;
	};
	class ACE_dogtag_208: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 208;
	};
	class ACE_dogtag_209: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 209;
	};
	class ACE_dogtag_210: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 210;
	};
	class ACE_dogtag_211: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 211;
	};
	class ACE_dogtag_212: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 212;
	};
	class ACE_dogtag_213: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 213;
	};
	class ACE_dogtag_214: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 214;
	};
	class ACE_dogtag_215: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 215;
	};
	class ACE_dogtag_216: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 216;
	};
	class ACE_dogtag_217: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 217;
	};
	class ACE_dogtag_218: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 218;
	};
	class ACE_dogtag_219: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 219;
	};
	class ACE_dogtag_220: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 220;
	};
	class ACE_dogtag_221: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 221;
	};
	class ACE_dogtag_222: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 222;
	};
	class ACE_dogtag_223: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 223;
	};
	class ACE_dogtag_224: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 224;
	};
	class ACE_dogtag_225: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 225;
	};
	class ACE_dogtag_226: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 226;
	};
	class ACE_dogtag_227: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 227;
	};
	class ACE_dogtag_228: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 228;
	};
	class ACE_dogtag_229: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 229;
	};
	class ACE_dogtag_230: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 230;
	};
	class ACE_dogtag_231: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 231;
	};
	class ACE_dogtag_232: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 232;
	};
	class ACE_dogtag_233: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 233;
	};
	class ACE_dogtag_234: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 234;
	};
	class ACE_dogtag_235: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 235;
	};
	class ACE_dogtag_236: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 236;
	};
	class ACE_dogtag_237: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 237;
	};
	class ACE_dogtag_238: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 238;
	};
	class ACE_dogtag_239: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 239;
	};
	class ACE_dogtag_240: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 240;
	};
	class ACE_dogtag_241: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 241;
	};
	class ACE_dogtag_242: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 242;
	};
	class ACE_dogtag_243: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 243;
	};
	class ACE_dogtag_244: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 244;
	};
	class ACE_dogtag_245: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 245;
	};
	class ACE_dogtag_246: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 246;
	};
	class ACE_dogtag_247: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 247;
	};
	class ACE_dogtag_248: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 248;
	};
	class ACE_dogtag_249: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 249;
	};
	class ACE_dogtag_250: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 250;
	};
	class ACE_dogtag_251: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 251;
	};
	class ACE_dogtag_252: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 252;
	};
	class ACE_dogtag_253: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 253;
	};
	class ACE_dogtag_254: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 254;
	};
	class ACE_dogtag_255: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 255;
	};
	class ACE_dogtag_256: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 256;
	};
	class ACE_dogtag_257: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 257;
	};
	class ACE_dogtag_258: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 258;
	};
	class ACE_dogtag_259: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 259;
	};
	class ACE_dogtag_260: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 260;
	};
	class ACE_dogtag_261: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 261;
	};
	class ACE_dogtag_262: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 262;
	};
	class ACE_dogtag_263: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 263;
	};
	class ACE_dogtag_264: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 264;
	};
	class ACE_dogtag_265: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 265;
	};
	class ACE_dogtag_266: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 266;
	};
	class ACE_dogtag_267: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 267;
	};
	class ACE_dogtag_268: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 268;
	};
	class ACE_dogtag_269: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 269;
	};
	class ACE_dogtag_270: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 270;
	};
	class ACE_dogtag_271: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 271;
	};
	class ACE_dogtag_272: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 272;
	};
	class ACE_dogtag_273: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 273;
	};
	class ACE_dogtag_274: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 274;
	};
	class ACE_dogtag_275: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 275;
	};
	class ACE_dogtag_276: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 276;
	};
	class ACE_dogtag_277: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 277;
	};
	class ACE_dogtag_278: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 278;
	};
	class ACE_dogtag_279: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 279;
	};
	class ACE_dogtag_280: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 280;
	};
	class ACE_dogtag_281: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 281;
	};
	class ACE_dogtag_282: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 282;
	};
	class ACE_dogtag_283: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 283;
	};
	class ACE_dogtag_284: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 284;
	};
	class ACE_dogtag_285: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 285;
	};
	class ACE_dogtag_286: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 286;
	};
	class ACE_dogtag_287: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 287;
	};
	class ACE_dogtag_288: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 288;
	};
	class ACE_dogtag_289: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 289;
	};
	class ACE_dogtag_290: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 290;
	};
	class ACE_dogtag_291: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 291;
	};
	class ACE_dogtag_292: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 292;
	};
	class ACE_dogtag_293: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 293;
	};
	class ACE_dogtag_294: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 294;
	};
	class ACE_dogtag_295: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 295;
	};
	class ACE_dogtag_296: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 296;
	};
	class ACE_dogtag_297: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 297;
	};
	class ACE_dogtag_298: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 298;
	};
	class ACE_dogtag_299: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 299;
	};
	class ACE_dogtag_300: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 300;
	};
	class ACE_dogtag_301: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 301;
	};
	class ACE_dogtag_302: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 302;
	};
	class ACE_dogtag_303: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 303;
	};
	class ACE_dogtag_304: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 304;
	};
	class ACE_dogtag_305: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 305;
	};
	class ACE_dogtag_306: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 306;
	};
	class ACE_dogtag_307: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 307;
	};
	class ACE_dogtag_308: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 308;
	};
	class ACE_dogtag_309: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 309;
	};
	class ACE_dogtag_310: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 310;
	};
	class ACE_dogtag_311: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 311;
	};
	class ACE_dogtag_312: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 312;
	};
	class ACE_dogtag_313: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 313;
	};
	class ACE_dogtag_314: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 314;
	};
	class ACE_dogtag_315: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 315;
	};
	class ACE_dogtag_316: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 316;
	};
	class ACE_dogtag_317: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 317;
	};
	class ACE_dogtag_318: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 318;
	};
	class ACE_dogtag_319: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 319;
	};
	class ACE_dogtag_320: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 320;
	};
	class ACE_dogtag_321: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 321;
	};
	class ACE_dogtag_322: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 322;
	};
	class ACE_dogtag_323: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 323;
	};
	class ACE_dogtag_324: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 324;
	};
	class ACE_dogtag_325: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 325;
	};
	class ACE_dogtag_326: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 326;
	};
	class ACE_dogtag_327: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 327;
	};
	class ACE_dogtag_328: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 328;
	};
	class ACE_dogtag_329: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 329;
	};
	class ACE_dogtag_330: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 330;
	};
	class ACE_dogtag_331: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 331;
	};
	class ACE_dogtag_332: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 332;
	};
	class ACE_dogtag_333: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 333;
	};
	class ACE_dogtag_334: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 334;
	};
	class ACE_dogtag_335: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 335;
	};
	class ACE_dogtag_336: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 336;
	};
	class ACE_dogtag_337: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 337;
	};
	class ACE_dogtag_338: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 338;
	};
	class ACE_dogtag_339: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 339;
	};
	class ACE_dogtag_340: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 340;
	};
	class ACE_dogtag_341: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 341;
	};
	class ACE_dogtag_342: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 342;
	};
	class ACE_dogtag_343: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 343;
	};
	class ACE_dogtag_344: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 344;
	};
	class ACE_dogtag_345: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 345;
	};
	class ACE_dogtag_346: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 346;
	};
	class ACE_dogtag_347: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 347;
	};
	class ACE_dogtag_348: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 348;
	};
	class ACE_dogtag_349: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 349;
	};
	class ACE_dogtag_350: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 350;
	};
	class ACE_dogtag_351: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 351;
	};
	class ACE_dogtag_352: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 352;
	};
	class ACE_dogtag_353: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 353;
	};
	class ACE_dogtag_354: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 354;
	};
	class ACE_dogtag_355: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 355;
	};
	class ACE_dogtag_356: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 356;
	};
	class ACE_dogtag_357: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 357;
	};
	class ACE_dogtag_358: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 358;
	};
	class ACE_dogtag_359: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 359;
	};
	class ACE_dogtag_360: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 360;
	};
	class ACE_dogtag_361: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 361;
	};
	class ACE_dogtag_362: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 362;
	};
	class ACE_dogtag_363: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 363;
	};
	class ACE_dogtag_364: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 364;
	};
	class ACE_dogtag_365: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 365;
	};
	class ACE_dogtag_366: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 366;
	};
	class ACE_dogtag_367: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 367;
	};
	class ACE_dogtag_368: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 368;
	};
	class ACE_dogtag_369: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 369;
	};
	class ACE_dogtag_370: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 370;
	};
	class ACE_dogtag_371: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 371;
	};
	class ACE_dogtag_372: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 372;
	};
	class ACE_dogtag_373: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 373;
	};
	class ACE_dogtag_374: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 374;
	};
	class ACE_dogtag_375: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 375;
	};
	class ACE_dogtag_376: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 376;
	};
	class ACE_dogtag_377: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 377;
	};
	class ACE_dogtag_378: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 378;
	};
	class ACE_dogtag_379: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 379;
	};
	class ACE_dogtag_380: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 380;
	};
	class ACE_dogtag_381: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 381;
	};
	class ACE_dogtag_382: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 382;
	};
	class ACE_dogtag_383: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 383;
	};
	class ACE_dogtag_384: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 384;
	};
	class ACE_dogtag_385: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 385;
	};
	class ACE_dogtag_386: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 386;
	};
	class ACE_dogtag_387: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 387;
	};
	class ACE_dogtag_388: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 388;
	};
	class ACE_dogtag_389: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 389;
	};
	class ACE_dogtag_390: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 390;
	};
	class ACE_dogtag_391: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 391;
	};
	class ACE_dogtag_392: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 392;
	};
	class ACE_dogtag_393: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 393;
	};
	class ACE_dogtag_394: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 394;
	};
	class ACE_dogtag_395: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 395;
	};
	class ACE_dogtag_396: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 396;
	};
	class ACE_dogtag_397: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 397;
	};
	class ACE_dogtag_398: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 398;
	};
	class ACE_dogtag_399: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 399;
	};
	class ACE_dogtag_400: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 400;
	};
	class ACE_dogtag_401: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 401;
	};
	class ACE_dogtag_402: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 402;
	};
	class ACE_dogtag_403: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 403;
	};
	class ACE_dogtag_404: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 404;
	};
	class ACE_dogtag_405: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 405;
	};
	class ACE_dogtag_406: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 406;
	};
	class ACE_dogtag_407: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 407;
	};
	class ACE_dogtag_408: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 408;
	};
	class ACE_dogtag_409: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 409;
	};
	class ACE_dogtag_410: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 410;
	};
	class ACE_dogtag_411: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 411;
	};
	class ACE_dogtag_412: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 412;
	};
	class ACE_dogtag_413: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 413;
	};
	class ACE_dogtag_414: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 414;
	};
	class ACE_dogtag_415: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 415;
	};
	class ACE_dogtag_416: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 416;
	};
	class ACE_dogtag_417: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 417;
	};
	class ACE_dogtag_418: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 418;
	};
	class ACE_dogtag_419: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 419;
	};
	class ACE_dogtag_420: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 420;
	};
	class ACE_dogtag_421: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 421;
	};
	class ACE_dogtag_422: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 422;
	};
	class ACE_dogtag_423: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 423;
	};
	class ACE_dogtag_424: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 424;
	};
	class ACE_dogtag_425: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 425;
	};
	class ACE_dogtag_426: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 426;
	};
	class ACE_dogtag_427: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 427;
	};
	class ACE_dogtag_428: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 428;
	};
	class ACE_dogtag_429: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 429;
	};
	class ACE_dogtag_430: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 430;
	};
	class ACE_dogtag_431: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 431;
	};
	class ACE_dogtag_432: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 432;
	};
	class ACE_dogtag_433: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 433;
	};
	class ACE_dogtag_434: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 434;
	};
	class ACE_dogtag_435: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 435;
	};
	class ACE_dogtag_436: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 436;
	};
	class ACE_dogtag_437: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 437;
	};
	class ACE_dogtag_438: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 438;
	};
	class ACE_dogtag_439: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 439;
	};
	class ACE_dogtag_440: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 440;
	};
	class ACE_dogtag_441: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 441;
	};
	class ACE_dogtag_442: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 442;
	};
	class ACE_dogtag_443: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 443;
	};
	class ACE_dogtag_444: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 444;
	};
	class ACE_dogtag_445: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 445;
	};
	class ACE_dogtag_446: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 446;
	};
	class ACE_dogtag_447: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 447;
	};
	class ACE_dogtag_448: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 448;
	};
	class ACE_dogtag_449: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 449;
	};
	class ACE_dogtag_450: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 450;
	};
	class ACE_dogtag_451: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 451;
	};
	class ACE_dogtag_452: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 452;
	};
	class ACE_dogtag_453: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 453;
	};
	class ACE_dogtag_454: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 454;
	};
	class ACE_dogtag_455: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 455;
	};
	class ACE_dogtag_456: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 456;
	};
	class ACE_dogtag_457: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 457;
	};
	class ACE_dogtag_458: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 458;
	};
	class ACE_dogtag_459: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 459;
	};
	class ACE_dogtag_460: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 460;
	};
	class ACE_dogtag_461: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 461;
	};
	class ACE_dogtag_462: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 462;
	};
	class ACE_dogtag_463: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 463;
	};
	class ACE_dogtag_464: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 464;
	};
	class ACE_dogtag_465: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 465;
	};
	class ACE_dogtag_466: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 466;
	};
	class ACE_dogtag_467: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 467;
	};
	class ACE_dogtag_468: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 468;
	};
	class ACE_dogtag_469: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 469;
	};
	class ACE_dogtag_470: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 470;
	};
	class ACE_dogtag_471: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 471;
	};
	class ACE_dogtag_472: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 472;
	};
	class ACE_dogtag_473: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 473;
	};
	class ACE_dogtag_474: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 474;
	};
	class ACE_dogtag_475: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 475;
	};
	class ACE_dogtag_476: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 476;
	};
	class ACE_dogtag_477: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 477;
	};
	class ACE_dogtag_478: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 478;
	};
	class ACE_dogtag_479: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 479;
	};
	class ACE_dogtag_480: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 480;
	};
	class ACE_dogtag_481: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 481;
	};
	class ACE_dogtag_482: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 482;
	};
	class ACE_dogtag_483: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 483;
	};
	class ACE_dogtag_484: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 484;
	};
	class ACE_dogtag_485: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 485;
	};
	class ACE_dogtag_486: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 486;
	};
	class ACE_dogtag_487: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 487;
	};
	class ACE_dogtag_488: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 488;
	};
	class ACE_dogtag_489: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 489;
	};
	class ACE_dogtag_490: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 490;
	};
	class ACE_dogtag_491: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 491;
	};
	class ACE_dogtag_492: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 492;
	};
	class ACE_dogtag_493: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 493;
	};
	class ACE_dogtag_494: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 494;
	};
	class ACE_dogtag_495: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 495;
	};
	class ACE_dogtag_496: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 496;
	};
	class ACE_dogtag_497: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 497;
	};
	class ACE_dogtag_498: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 498;
	};
	class ACE_dogtag_499: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 499;
	};
	class ACE_dogtag_500: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 500;
	};
	class ACE_dogtag_501: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 501;
	};
	class ACE_dogtag_502: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 502;
	};
	class ACE_dogtag_503: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 503;
	};
	class ACE_dogtag_504: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 504;
	};
	class ACE_dogtag_505: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 505;
	};
	class ACE_dogtag_506: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 506;
	};
	class ACE_dogtag_507: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 507;
	};
	class ACE_dogtag_508: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 508;
	};
	class ACE_dogtag_509: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 509;
	};
	class ACE_dogtag_510: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 510;
	};
	class ACE_dogtag_511: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 511;
	};
	class ACE_dogtag_512: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 512;
	};
	class ACE_dogtag_513: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 513;
	};
	class ACE_dogtag_514: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 514;
	};
	class ACE_dogtag_515: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 515;
	};
	class ACE_dogtag_516: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 516;
	};
	class ACE_dogtag_517: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 517;
	};
	class ACE_dogtag_518: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 518;
	};
	class ACE_dogtag_519: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 519;
	};
	class ACE_dogtag_520: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 520;
	};
	class ACE_dogtag_521: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 521;
	};
	class ACE_dogtag_522: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 522;
	};
	class ACE_dogtag_523: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 523;
	};
	class ACE_dogtag_524: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 524;
	};
	class ACE_dogtag_525: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 525;
	};
	class ACE_dogtag_526: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 526;
	};
	class ACE_dogtag_527: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 527;
	};
	class ACE_dogtag_528: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 528;
	};
	class ACE_dogtag_529: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 529;
	};
	class ACE_dogtag_530: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 530;
	};
	class ACE_dogtag_531: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 531;
	};
	class ACE_dogtag_532: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 532;
	};
	class ACE_dogtag_533: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 533;
	};
	class ACE_dogtag_534: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 534;
	};
	class ACE_dogtag_535: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 535;
	};
	class ACE_dogtag_536: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 536;
	};
	class ACE_dogtag_537: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 537;
	};
	class ACE_dogtag_538: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 538;
	};
	class ACE_dogtag_539: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 539;
	};
	class ACE_dogtag_540: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 540;
	};
	class ACE_dogtag_541: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 541;
	};
	class ACE_dogtag_542: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 542;
	};
	class ACE_dogtag_543: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 543;
	};
	class ACE_dogtag_544: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 544;
	};
	class ACE_dogtag_545: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 545;
	};
	class ACE_dogtag_546: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 546;
	};
	class ACE_dogtag_547: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 547;
	};
	class ACE_dogtag_548: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 548;
	};
	class ACE_dogtag_549: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 549;
	};
	class ACE_dogtag_550: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 550;
	};
	class ACE_dogtag_551: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 551;
	};
	class ACE_dogtag_552: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 552;
	};
	class ACE_dogtag_553: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 553;
	};
	class ACE_dogtag_554: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 554;
	};
	class ACE_dogtag_555: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 555;
	};
	class ACE_dogtag_556: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 556;
	};
	class ACE_dogtag_557: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 557;
	};
	class ACE_dogtag_558: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 558;
	};
	class ACE_dogtag_559: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 559;
	};
	class ACE_dogtag_560: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 560;
	};
	class ACE_dogtag_561: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 561;
	};
	class ACE_dogtag_562: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 562;
	};
	class ACE_dogtag_563: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 563;
	};
	class ACE_dogtag_564: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 564;
	};
	class ACE_dogtag_565: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 565;
	};
	class ACE_dogtag_566: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 566;
	};
	class ACE_dogtag_567: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 567;
	};
	class ACE_dogtag_568: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 568;
	};
	class ACE_dogtag_569: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 569;
	};
	class ACE_dogtag_570: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 570;
	};
	class ACE_dogtag_571: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 571;
	};
	class ACE_dogtag_572: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 572;
	};
	class ACE_dogtag_573: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 573;
	};
	class ACE_dogtag_574: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 574;
	};
	class ACE_dogtag_575: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 575;
	};
	class ACE_dogtag_576: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 576;
	};
	class ACE_dogtag_577: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 577;
	};
	class ACE_dogtag_578: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 578;
	};
	class ACE_dogtag_579: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 579;
	};
	class ACE_dogtag_580: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 580;
	};
	class ACE_dogtag_581: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 581;
	};
	class ACE_dogtag_582: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 582;
	};
	class ACE_dogtag_583: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 583;
	};
	class ACE_dogtag_584: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 584;
	};
	class ACE_dogtag_585: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 585;
	};
	class ACE_dogtag_586: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 586;
	};
	class ACE_dogtag_587: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 587;
	};
	class ACE_dogtag_588: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 588;
	};
	class ACE_dogtag_589: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 589;
	};
	class ACE_dogtag_590: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 590;
	};
	class ACE_dogtag_591: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 591;
	};
	class ACE_dogtag_592: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 592;
	};
	class ACE_dogtag_593: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 593;
	};
	class ACE_dogtag_594: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 594;
	};
	class ACE_dogtag_595: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 595;
	};
	class ACE_dogtag_596: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 596;
	};
	class ACE_dogtag_597: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 597;
	};
	class ACE_dogtag_598: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 598;
	};
	class ACE_dogtag_599: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 599;
	};
	class ACE_dogtag_600: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 600;
	};
	class ACE_dogtag_601: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 601;
	};
	class ACE_dogtag_602: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 602;
	};
	class ACE_dogtag_603: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 603;
	};
	class ACE_dogtag_604: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 604;
	};
	class ACE_dogtag_605: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 605;
	};
	class ACE_dogtag_606: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 606;
	};
	class ACE_dogtag_607: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 607;
	};
	class ACE_dogtag_608: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 608;
	};
	class ACE_dogtag_609: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 609;
	};
	class ACE_dogtag_610: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 610;
	};
	class ACE_dogtag_611: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 611;
	};
	class ACE_dogtag_612: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 612;
	};
	class ACE_dogtag_613: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 613;
	};
	class ACE_dogtag_614: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 614;
	};
	class ACE_dogtag_615: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 615;
	};
	class ACE_dogtag_616: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 616;
	};
	class ACE_dogtag_617: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 617;
	};
	class ACE_dogtag_618: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 618;
	};
	class ACE_dogtag_619: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 619;
	};
	class ACE_dogtag_620: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 620;
	};
	class ACE_dogtag_621: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 621;
	};
	class ACE_dogtag_622: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 622;
	};
	class ACE_dogtag_623: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 623;
	};
	class ACE_dogtag_624: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 624;
	};
	class ACE_dogtag_625: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 625;
	};
	class ACE_dogtag_626: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 626;
	};
	class ACE_dogtag_627: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 627;
	};
	class ACE_dogtag_628: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 628;
	};
	class ACE_dogtag_629: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 629;
	};
	class ACE_dogtag_630: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 630;
	};
	class ACE_dogtag_631: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 631;
	};
	class ACE_dogtag_632: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 632;
	};
	class ACE_dogtag_633: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 633;
	};
	class ACE_dogtag_634: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 634;
	};
	class ACE_dogtag_635: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 635;
	};
	class ACE_dogtag_636: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 636;
	};
	class ACE_dogtag_637: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 637;
	};
	class ACE_dogtag_638: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 638;
	};
	class ACE_dogtag_639: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 639;
	};
	class ACE_dogtag_640: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 640;
	};
	class ACE_dogtag_641: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 641;
	};
	class ACE_dogtag_642: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 642;
	};
	class ACE_dogtag_643: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 643;
	};
	class ACE_dogtag_644: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 644;
	};
	class ACE_dogtag_645: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 645;
	};
	class ACE_dogtag_646: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 646;
	};
	class ACE_dogtag_647: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 647;
	};
	class ACE_dogtag_648: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 648;
	};
	class ACE_dogtag_649: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 649;
	};
	class ACE_dogtag_650: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 650;
	};
	class ACE_dogtag_651: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 651;
	};
	class ACE_dogtag_652: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 652;
	};
	class ACE_dogtag_653: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 653;
	};
	class ACE_dogtag_654: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 654;
	};
	class ACE_dogtag_655: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 655;
	};
	class ACE_dogtag_656: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 656;
	};
	class ACE_dogtag_657: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 657;
	};
	class ACE_dogtag_658: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 658;
	};
	class ACE_dogtag_659: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 659;
	};
	class ACE_dogtag_660: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 660;
	};
	class ACE_dogtag_661: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 661;
	};
	class ACE_dogtag_662: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 662;
	};
	class ACE_dogtag_663: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 663;
	};
	class ACE_dogtag_664: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 664;
	};
	class ACE_dogtag_665: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 665;
	};
	class ACE_dogtag_666: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 666;
	};
	class ACE_dogtag_667: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 667;
	};
	class ACE_dogtag_668: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 668;
	};
	class ACE_dogtag_669: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 669;
	};
	class ACE_dogtag_670: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 670;
	};
	class ACE_dogtag_671: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 671;
	};
	class ACE_dogtag_672: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 672;
	};
	class ACE_dogtag_673: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 673;
	};
	class ACE_dogtag_674: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 674;
	};
	class ACE_dogtag_675: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 675;
	};
	class ACE_dogtag_676: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 676;
	};
	class ACE_dogtag_677: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 677;
	};
	class ACE_dogtag_678: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 678;
	};
	class ACE_dogtag_679: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 679;
	};
	class ACE_dogtag_680: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 680;
	};
	class ACE_dogtag_681: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 681;
	};
	class ACE_dogtag_682: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 682;
	};
	class ACE_dogtag_683: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 683;
	};
	class ACE_dogtag_684: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 684;
	};
	class ACE_dogtag_685: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 685;
	};
	class ACE_dogtag_686: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 686;
	};
	class ACE_dogtag_687: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 687;
	};
	class ACE_dogtag_688: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 688;
	};
	class ACE_dogtag_689: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 689;
	};
	class ACE_dogtag_690: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 690;
	};
	class ACE_dogtag_691: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 691;
	};
	class ACE_dogtag_692: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 692;
	};
	class ACE_dogtag_693: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 693;
	};
	class ACE_dogtag_694: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 694;
	};
	class ACE_dogtag_695: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 695;
	};
	class ACE_dogtag_696: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 696;
	};
	class ACE_dogtag_697: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 697;
	};
	class ACE_dogtag_698: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 698;
	};
	class ACE_dogtag_699: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 699;
	};
	class ACE_dogtag_700: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 700;
	};
	class ACE_dogtag_701: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 701;
	};
	class ACE_dogtag_702: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 702;
	};
	class ACE_dogtag_703: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 703;
	};
	class ACE_dogtag_704: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 704;
	};
	class ACE_dogtag_705: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 705;
	};
	class ACE_dogtag_706: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 706;
	};
	class ACE_dogtag_707: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 707;
	};
	class ACE_dogtag_708: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 708;
	};
	class ACE_dogtag_709: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 709;
	};
	class ACE_dogtag_710: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 710;
	};
	class ACE_dogtag_711: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 711;
	};
	class ACE_dogtag_712: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 712;
	};
	class ACE_dogtag_713: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 713;
	};
	class ACE_dogtag_714: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 714;
	};
	class ACE_dogtag_715: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 715;
	};
	class ACE_dogtag_716: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 716;
	};
	class ACE_dogtag_717: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 717;
	};
	class ACE_dogtag_718: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 718;
	};
	class ACE_dogtag_719: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 719;
	};
	class ACE_dogtag_720: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 720;
	};
	class ACE_dogtag_721: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 721;
	};
	class ACE_dogtag_722: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 722;
	};
	class ACE_dogtag_723: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 723;
	};
	class ACE_dogtag_724: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 724;
	};
	class ACE_dogtag_725: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 725;
	};
	class ACE_dogtag_726: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 726;
	};
	class ACE_dogtag_727: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 727;
	};
	class ACE_dogtag_728: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 728;
	};
	class ACE_dogtag_729: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 729;
	};
	class ACE_dogtag_730: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 730;
	};
	class ACE_dogtag_731: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 731;
	};
	class ACE_dogtag_732: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 732;
	};
	class ACE_dogtag_733: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 733;
	};
	class ACE_dogtag_734: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 734;
	};
	class ACE_dogtag_735: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 735;
	};
	class ACE_dogtag_736: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 736;
	};
	class ACE_dogtag_737: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 737;
	};
	class ACE_dogtag_738: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 738;
	};
	class ACE_dogtag_739: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 739;
	};
	class ACE_dogtag_740: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 740;
	};
	class ACE_dogtag_741: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 741;
	};
	class ACE_dogtag_742: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 742;
	};
	class ACE_dogtag_743: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 743;
	};
	class ACE_dogtag_744: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 744;
	};
	class ACE_dogtag_745: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 745;
	};
	class ACE_dogtag_746: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 746;
	};
	class ACE_dogtag_747: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 747;
	};
	class ACE_dogtag_748: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 748;
	};
	class ACE_dogtag_749: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 749;
	};
	class ACE_dogtag_750: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 750;
	};
	class ACE_dogtag_751: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 751;
	};
	class ACE_dogtag_752: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 752;
	};
	class ACE_dogtag_753: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 753;
	};
	class ACE_dogtag_754: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 754;
	};
	class ACE_dogtag_755: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 755;
	};
	class ACE_dogtag_756: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 756;
	};
	class ACE_dogtag_757: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 757;
	};
	class ACE_dogtag_758: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 758;
	};
	class ACE_dogtag_759: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 759;
	};
	class ACE_dogtag_760: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 760;
	};
	class ACE_dogtag_761: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 761;
	};
	class ACE_dogtag_762: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 762;
	};
	class ACE_dogtag_763: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 763;
	};
	class ACE_dogtag_764: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 764;
	};
	class ACE_dogtag_765: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 765;
	};
	class ACE_dogtag_766: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 766;
	};
	class ACE_dogtag_767: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 767;
	};
	class ACE_dogtag_768: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 768;
	};
	class ACE_dogtag_769: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 769;
	};
	class ACE_dogtag_770: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 770;
	};
	class ACE_dogtag_771: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 771;
	};
	class ACE_dogtag_772: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 772;
	};
	class ACE_dogtag_773: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 773;
	};
	class ACE_dogtag_774: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 774;
	};
	class ACE_dogtag_775: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 775;
	};
	class ACE_dogtag_776: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 776;
	};
	class ACE_dogtag_777: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 777;
	};
	class ACE_dogtag_778: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 778;
	};
	class ACE_dogtag_779: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 779;
	};
	class ACE_dogtag_780: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 780;
	};
	class ACE_dogtag_781: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 781;
	};
	class ACE_dogtag_782: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 782;
	};
	class ACE_dogtag_783: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 783;
	};
	class ACE_dogtag_784: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 784;
	};
	class ACE_dogtag_785: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 785;
	};
	class ACE_dogtag_786: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 786;
	};
	class ACE_dogtag_787: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 787;
	};
	class ACE_dogtag_788: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 788;
	};
	class ACE_dogtag_789: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 789;
	};
	class ACE_dogtag_790: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 790;
	};
	class ACE_dogtag_791: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 791;
	};
	class ACE_dogtag_792: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 792;
	};
	class ACE_dogtag_793: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 793;
	};
	class ACE_dogtag_794: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 794;
	};
	class ACE_dogtag_795: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 795;
	};
	class ACE_dogtag_796: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 796;
	};
	class ACE_dogtag_797: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 797;
	};
	class ACE_dogtag_798: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 798;
	};
	class ACE_dogtag_799: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 799;
	};
	class ACE_dogtag_800: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 800;
	};
	class ACE_dogtag_801: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 801;
	};
	class ACE_dogtag_802: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 802;
	};
	class ACE_dogtag_803: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 803;
	};
	class ACE_dogtag_804: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 804;
	};
	class ACE_dogtag_805: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 805;
	};
	class ACE_dogtag_806: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 806;
	};
	class ACE_dogtag_807: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 807;
	};
	class ACE_dogtag_808: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 808;
	};
	class ACE_dogtag_809: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 809;
	};
	class ACE_dogtag_810: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 810;
	};
	class ACE_dogtag_811: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 811;
	};
	class ACE_dogtag_812: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 812;
	};
	class ACE_dogtag_813: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 813;
	};
	class ACE_dogtag_814: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 814;
	};
	class ACE_dogtag_815: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 815;
	};
	class ACE_dogtag_816: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 816;
	};
	class ACE_dogtag_817: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 817;
	};
	class ACE_dogtag_818: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 818;
	};
	class ACE_dogtag_819: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 819;
	};
	class ACE_dogtag_820: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 820;
	};
	class ACE_dogtag_821: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 821;
	};
	class ACE_dogtag_822: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 822;
	};
	class ACE_dogtag_823: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 823;
	};
	class ACE_dogtag_824: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 824;
	};
	class ACE_dogtag_825: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 825;
	};
	class ACE_dogtag_826: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 826;
	};
	class ACE_dogtag_827: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 827;
	};
	class ACE_dogtag_828: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 828;
	};
	class ACE_dogtag_829: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 829;
	};
	class ACE_dogtag_830: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 830;
	};
	class ACE_dogtag_831: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 831;
	};
	class ACE_dogtag_832: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 832;
	};
	class ACE_dogtag_833: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 833;
	};
	class ACE_dogtag_834: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 834;
	};
	class ACE_dogtag_835: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 835;
	};
	class ACE_dogtag_836: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 836;
	};
	class ACE_dogtag_837: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 837;
	};
	class ACE_dogtag_838: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 838;
	};
	class ACE_dogtag_839: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 839;
	};
	class ACE_dogtag_840: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 840;
	};
	class ACE_dogtag_841: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 841;
	};
	class ACE_dogtag_842: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 842;
	};
	class ACE_dogtag_843: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 843;
	};
	class ACE_dogtag_844: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 844;
	};
	class ACE_dogtag_845: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 845;
	};
	class ACE_dogtag_846: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 846;
	};
	class ACE_dogtag_847: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 847;
	};
	class ACE_dogtag_848: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 848;
	};
	class ACE_dogtag_849: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 849;
	};
	class ACE_dogtag_850: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 850;
	};
	class ACE_dogtag_851: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 851;
	};
	class ACE_dogtag_852: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 852;
	};
	class ACE_dogtag_853: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 853;
	};
	class ACE_dogtag_854: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 854;
	};
	class ACE_dogtag_855: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 855;
	};
	class ACE_dogtag_856: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 856;
	};
	class ACE_dogtag_857: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 857;
	};
	class ACE_dogtag_858: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 858;
	};
	class ACE_dogtag_859: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 859;
	};
	class ACE_dogtag_860: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 860;
	};
	class ACE_dogtag_861: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 861;
	};
	class ACE_dogtag_862: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 862;
	};
	class ACE_dogtag_863: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 863;
	};
	class ACE_dogtag_864: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 864;
	};
	class ACE_dogtag_865: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 865;
	};
	class ACE_dogtag_866: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 866;
	};
	class ACE_dogtag_867: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 867;
	};
	class ACE_dogtag_868: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 868;
	};
	class ACE_dogtag_869: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 869;
	};
	class ACE_dogtag_870: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 870;
	};
	class ACE_dogtag_871: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 871;
	};
	class ACE_dogtag_872: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 872;
	};
	class ACE_dogtag_873: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 873;
	};
	class ACE_dogtag_874: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 874;
	};
	class ACE_dogtag_875: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 875;
	};
	class ACE_dogtag_876: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 876;
	};
	class ACE_dogtag_877: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 877;
	};
	class ACE_dogtag_878: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 878;
	};
	class ACE_dogtag_879: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 879;
	};
	class ACE_dogtag_880: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 880;
	};
	class ACE_dogtag_881: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 881;
	};
	class ACE_dogtag_882: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 882;
	};
	class ACE_dogtag_883: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 883;
	};
	class ACE_dogtag_884: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 884;
	};
	class ACE_dogtag_885: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 885;
	};
	class ACE_dogtag_886: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 886;
	};
	class ACE_dogtag_887: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 887;
	};
	class ACE_dogtag_888: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 888;
	};
	class ACE_dogtag_889: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 889;
	};
	class ACE_dogtag_890: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 890;
	};
	class ACE_dogtag_891: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 891;
	};
	class ACE_dogtag_892: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 892;
	};
	class ACE_dogtag_893: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 893;
	};
	class ACE_dogtag_894: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 894;
	};
	class ACE_dogtag_895: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 895;
	};
	class ACE_dogtag_896: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 896;
	};
	class ACE_dogtag_897: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 897;
	};
	class ACE_dogtag_898: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 898;
	};
	class ACE_dogtag_899: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 899;
	};
	class ACE_dogtag_900: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 900;
	};
	class ACE_dogtag_901: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 901;
	};
	class ACE_dogtag_902: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 902;
	};
	class ACE_dogtag_903: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 903;
	};
	class ACE_dogtag_904: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 904;
	};
	class ACE_dogtag_905: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 905;
	};
	class ACE_dogtag_906: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 906;
	};
	class ACE_dogtag_907: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 907;
	};
	class ACE_dogtag_908: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 908;
	};
	class ACE_dogtag_909: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 909;
	};
	class ACE_dogtag_910: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 910;
	};
	class ACE_dogtag_911: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 911;
	};
	class ACE_dogtag_912: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 912;
	};
	class ACE_dogtag_913: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 913;
	};
	class ACE_dogtag_914: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 914;
	};
	class ACE_dogtag_915: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 915;
	};
	class ACE_dogtag_916: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 916;
	};
	class ACE_dogtag_917: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 917;
	};
	class ACE_dogtag_918: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 918;
	};
	class ACE_dogtag_919: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 919;
	};
	class ACE_dogtag_920: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 920;
	};
	class ACE_dogtag_921: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 921;
	};
	class ACE_dogtag_922: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 922;
	};
	class ACE_dogtag_923: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 923;
	};
	class ACE_dogtag_924: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 924;
	};
	class ACE_dogtag_925: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 925;
	};
	class ACE_dogtag_926: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 926;
	};
	class ACE_dogtag_927: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 927;
	};
	class ACE_dogtag_928: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 928;
	};
	class ACE_dogtag_929: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 929;
	};
	class ACE_dogtag_930: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 930;
	};
	class ACE_dogtag_931: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 931;
	};
	class ACE_dogtag_932: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 932;
	};
	class ACE_dogtag_933: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 933;
	};
	class ACE_dogtag_934: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 934;
	};
	class ACE_dogtag_935: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 935;
	};
	class ACE_dogtag_936: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 936;
	};
	class ACE_dogtag_937: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 937;
	};
	class ACE_dogtag_938: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 938;
	};
	class ACE_dogtag_939: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 939;
	};
	class ACE_dogtag_940: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 940;
	};
	class ACE_dogtag_941: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 941;
	};
	class ACE_dogtag_942: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 942;
	};
	class ACE_dogtag_943: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 943;
	};
	class ACE_dogtag_944: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 944;
	};
	class ACE_dogtag_945: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 945;
	};
	class ACE_dogtag_946: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 946;
	};
	class ACE_dogtag_947: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 947;
	};
	class ACE_dogtag_948: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 948;
	};
	class ACE_dogtag_949: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 949;
	};
	class ACE_dogtag_950: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 950;
	};
	class ACE_dogtag_951: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 951;
	};
	class ACE_dogtag_952: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 952;
	};
	class ACE_dogtag_953: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 953;
	};
	class ACE_dogtag_954: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 954;
	};
	class ACE_dogtag_955: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 955;
	};
	class ACE_dogtag_956: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 956;
	};
	class ACE_dogtag_957: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 957;
	};
	class ACE_dogtag_958: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 958;
	};
	class ACE_dogtag_959: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 959;
	};
	class ACE_dogtag_960: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 960;
	};
	class ACE_dogtag_961: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 961;
	};
	class ACE_dogtag_962: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 962;
	};
	class ACE_dogtag_963: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 963;
	};
	class ACE_dogtag_964: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 964;
	};
	class ACE_dogtag_965: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 965;
	};
	class ACE_dogtag_966: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 966;
	};
	class ACE_dogtag_967: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 967;
	};
	class ACE_dogtag_968: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 968;
	};
	class ACE_dogtag_969: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 969;
	};
	class ACE_dogtag_970: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 970;
	};
	class ACE_dogtag_971: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 971;
	};
	class ACE_dogtag_972: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 972;
	};
	class ACE_dogtag_973: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 973;
	};
	class ACE_dogtag_974: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 974;
	};
	class ACE_dogtag_975: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 975;
	};
	class ACE_dogtag_976: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 976;
	};
	class ACE_dogtag_977: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 977;
	};
	class ACE_dogtag_978: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 978;
	};
	class ACE_dogtag_979: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 979;
	};
	class ACE_dogtag_980: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 980;
	};
	class ACE_dogtag_981: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 981;
	};
	class ACE_dogtag_982: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 982;
	};
	class ACE_dogtag_983: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 983;
	};
	class ACE_dogtag_984: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 984;
	};
	class ACE_dogtag_985: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 985;
	};
	class ACE_dogtag_986: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 986;
	};
	class ACE_dogtag_987: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 987;
	};
	class ACE_dogtag_988: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 988;
	};
	class ACE_dogtag_989: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 989;
	};
	class ACE_dogtag_990: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 990;
	};
	class ACE_dogtag_991: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 991;
	};
	class ACE_dogtag_992: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 992;
	};
	class ACE_dogtag_993: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 993;
	};
	class ACE_dogtag_994: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 994;
	};
	class ACE_dogtag_995: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 995;
	};
	class ACE_dogtag_996: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 996;
	};
	class ACE_dogtag_997: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 997;
	};
	class ACE_dogtag_998: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 998;
	};
	class ACE_dogtag_999: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 999;
	};
	class ACE_dogtag_1000: ACE_dogtag
	{
		author = "$STR_ace_common_ACETeam";
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		descriptionShort = "$STR_ace_dogtags_itemName";
		ace_dogtags_tagID = 1000;
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_Dogtag
			{
				displayName = "$STR_ace_dogtags_itemName";
				condition = "[_player,_target] call ace_dogtags_fnc_canTakeDogtag";
				statement = "";
				exceptions[] = {"isNotSwimming","isNotInside"};
				showDisabled = 0;
				distance = 1.75;
				icon = "\z\ace\addons\dogtags\data\dogtag_icon_ca.paa";
				selection = "neck";
				class ACE_CheckDogtag
				{
					displayName = "$STR_ace_dogtags_checkDogtag";
					condition = "[_player,_target] call ace_dogtags_fnc_canCheckDogtag";
					statement = "[_player,_target] call ace_dogtags_fnc_checkDogtag";
					exceptions[] = {"isNotSwimming","isNotInside"};
					showDisabled = 0;
					priority = 3;
					icon = "\z\ace\addons\dogtags\data\dogtag_icon_ca.paa";
				};
				class ACE_TakeDogtag
				{
					displayName = "$STR_ace_dogtags_takeDogtag";
					condition = "[_player,_target] call ace_dogtags_fnc_canTakeDogtag";
					statement = "[_player,_target] call ace_dogtags_fnc_takeDogtag";
					exceptions[] = {"isNotSwimming","isNotInside"};
					showDisabled = 0;
					priority = 3;
					icon = "\z\ace\addons\dogtags\data\dogtag_icon_ca.paa";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ACE_CheckDogtags
				{
					displayName = "$STR_ace_dogtags_checkItem";
					condition = "true";
					statement = "";
					exceptions[] = {"isNotSwimming","isNotInside","isNotSitting"};
					insertChildren = "_this call ace_dogtags_fnc_addDogtagActions";
				};
			};
		};
	};
};
class RscPicture;
class RscStructuredText;
class RscTitles
{
	class ace_dogtags_singleTag
	{
		idd = -1;
		onLoad = "uiNamespace setVariable [""ace_dogtags_tag"",_this select 0]";
		onUnload = "uiNamespace setVariable [""ace_dogtags_tag"",nil]";
		movingEnable = 0;
		duration = 5;
		fadeIn = 0.2;
		fadeOut = 0.2;
		class controls
		{
			class background: RscPicture
			{
				idc = 1000;
				text = "\z\ace\addons\dogtags\data\dogtagSingle.paa";
				sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0};
				x = "((safezoneX + safezoneW) - (10 * (((safezoneW / safezoneH) min 1.2) / 40)) - 2.9 * (((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safeZoneY + 0.175 * safezoneH";
				w = "(8 * (((safezoneW / safezoneH) min 1.2) / 40))";
				h = "(8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				font = "EtelkaMonospacePro";
			};
			class nickname: RscStructuredText
			{
				idc = 1001;
				text = "";
				sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0};
				x = "((safezoneX + safezoneW) - (8.4 * (((safezoneW / safezoneH) min 1.2) / 40)) - 2.9 * (((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safeZoneY + 0.24 * safezoneH";
				w = "(5.9 * (((safezoneW / safezoneH) min 1.2) / 40))";
				h = "(3 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				font = "RobotoCondensed";
				class Attributes
				{
					font = "RobotoCondensed";
					color = "#EEEEEE";
					align = "left";
					valign = "middle";
					shadow = 2;
					shadowColor = "#3f4345";
					size = "0.80";
				};
			};
		};
	};
	class ace_dogtags_doubleTag: ace_dogtags_singleTag
	{
		idd = -1;
		onLoad = "uiNamespace setVariable [""ace_dogtags_tag"",_this select 0]";
		onUnload = "uiNamespace setVariable [""ace_dogtags_tag"",nil]";
		class controls: controls
		{
			class background: background
			{
				text = "\z\ace\addons\dogtags\data\dogtagDouble.paa";
			};
			class nickname: nickname
			{
				class Attributes: Attributes
				{
					font = "RobotoCondensed";
					color = "#EEEEEE";
					align = "left";
					valign = "middle";
					shadow = 2;
					shadowColor = "#3f4345";
					size = "0.80";
				};
			};
		};
	};
};
