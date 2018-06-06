////////////////////////////////////////////////////////////////////
//DeRap: ace_optics\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:06 2018 : 'file' last modified on Mon Apr 16 21:47:14 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_optics
	{
		name = "ACE3 - Optics";
		units[] = {};
		weapons[] = {"ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Taosenai","KoffeinFlummi","commy2"};
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_optics
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\optics\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_optics
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\optics\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_optics
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\optics\XEH_postInit.sqf'";
	};
};
class CfgOpticsEffect
{
	class ACE_OpticsRadBlur1
	{
		type = "radialblur";
		params[] = {0.015,0,0.14,0.2};
		priority = 950;
	};
};
class RscOpticsValue;
class RscMapControl;
class RscText;
class RscInGameUI
{
	class RscUnitInfo;
	class RscWeaponZeroing: RscUnitInfo
	{
		class CA_Zeroing;
	};
	class ACE_RscWeaponZeroing: RscWeaponZeroing
	{
		controls[] = {"CA_Zeroing","CA_FOVMode","ACE_DrawReticleHelper","ACE_ScriptedReticle"};
		class CA_FOVMode: RscOpticsValue
		{
			idc = 154;
			style = 2;
			colorText[] = {0,0,0,0};
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};
		class ACE_DrawReticleHelper: RscMapControl
		{
			onDraw = "[ctrlParent (_this select 0)] call ace_optics_fnc_onDrawScope";
			idc = -1;
			w = 0;
			h = 0;
		};
		class ACE_ScriptedReticle: RscText
		{
			idc = 1713154;
			style = 48;
			size = 1;
			sizeEx = 0;
			text = "\z\ace\addons\optics\reticles\ace_shortdot_reticle_1.paa";
			w = 0;
			h = 0;
		};
	};
	class ACE_RscWeapon_base: RscWeaponZeroing
	{
		controls[] = {"CA_Zeroing","CA_FOVMode","ACE_DrawReticleHelper","ReticleDay","ReticleNight","BodyNight","BodyDay","trippleHeadLeft","trippleHeadRight"};
		class CA_FOVMode: RscOpticsValue
		{
			idc = 154;
			style = 2;
			colorText[] = {0,0,0,0};
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};
		class ACE_DrawReticleHelper: RscMapControl
		{
			onDraw = "[ctrlParent (_this select 0)] call ace_optics_fnc_onDrawScope2D";
			idc = -1;
			w = 0;
			h = 0;
		};
		class ReticleDay: RscText
		{
			idc = 1713001;
			style = 48;
			size = 0;
			sizeEx = 1;
			text = "";
			colorText[] = {1,1,1,0};
			colorBackground[] = {0,0,0,0};
			x = "safezoneX + 0.5 * safezoneW - 0.5 * 0.75/(getResolution select 5)";
			y = "safezoneY + 0.5 * safezoneH - 0.5 * 0.75/(getResolution select 5)* (4 / 3)";
			w = "0.75/(getResolution select 5)";
			h = "0.75/(getResolution select 5)* (4 / 3)";
		};
		class ReticleNight: ReticleDay
		{
			idc = 1713002;
			text = "";
		};
		class BodyDay: ReticleDay
		{
			idc = 1713005;
			text = "";
			x = "safezoneX + 0.5 * safezoneW - 0.5 * 2*0.75/(getResolution select 5)";
			y = "safezoneY + 0.5 * safezoneH - 0.5 * 2*0.75/(getResolution select 5)* (4 / 3)";
			w = "2*0.75/(getResolution select 5)";
			h = "2*0.75/(getResolution select 5)* (4 / 3)";
		};
		class BodyNight: BodyDay
		{
			idc = 1713006;
			text = "";
		};
		class trippleHeadLeft: RscText
		{
			idc = 1713010;
			x = "safeZoneXAbs";
			Y = "safezoneY";
			W = "(safezoneX - safeZoneXAbs) * ((getResolution select 4) / (16 / 3))";
			H = "safeZoneH";
			colorBackground[] = {0,0,0,1};
		};
		class trippleHeadRight: trippleHeadLeft
		{
			idc = 1713011;
			x = "safeZoneXAbs + safeZoneWAbs - (safezoneX - safeZoneXABS) * ((getResolution select 4) / (16 / 3))";
			colorBackground[] = {0,0,0,1};
		};
	};
	class ACE_RscWeapon_Hamr: ACE_RscWeapon_base
	{
		class ReticleDay: ReticleDay
		{
			text = "\z\ace\addons\optics\reticles\hamr-reticle65_ca.paa";
		};
		class ReticleNight: ReticleNight
		{
			text = "\z\ace\addons\optics\reticles\hamr-reticle65Illum_ca.paa";
		};
		class BodyDay: BodyDay
		{
			text = "\z\ace\addons\optics\reticles\hamr-body_ca.paa";
		};
		class BodyNight: BodyNight
		{
			text = "\z\ace\addons\optics\reticles\hamr-bodyNight_ca.paa";
		};
	};
	class ACE_RscWeapon_Arco: ACE_RscWeapon_base
	{
		class ReticleDay: ReticleDay
		{
			text = "\z\ace\addons\optics\reticles\arco-reticle65_ca.paa";
		};
		class ReticleNight: ReticleNight
		{
			text = "\z\ace\addons\optics\reticles\arco-reticle65Illum_ca.paa";
		};
		class BodyDay: BodyDay
		{
			text = "\z\ace\addons\optics\reticles\arco-body_ca.paa";
		};
		class BodyNight: BodyNight
		{
			text = "\z\ace\addons\optics\reticles\arco-bodyNight_ca.paa";
		};
	};
	class ACE_RscWeapon_MRCO: ACE_RscWeapon_base
	{
		class ReticleDay: ReticleDay
		{
			text = "\z\ace\addons\optics\reticles\mrco-reticle556_ca.paa";
		};
		class ReticleNight: ReticleNight
		{
			text = "\z\ace\addons\optics\reticles\mrco-reticle556Illum_ca.paa";
		};
		class BodyDay: BodyDay
		{
			text = "\z\ace\addons\optics\reticles\mrco-body_ca.paa";
		};
		class BodyNight: BodyNight
		{
			text = "\z\ace\addons\optics\reticles\mrco-bodyNight_ca.paa";
		};
	};
	class ACE_RscWeapon_SOS: ACE_RscWeapon_base
	{
		class ReticleDay: ReticleDay
		{
			text = "\z\ace\addons\optics\reticles\sos-reticleMLR_ca.paa";
		};
		class ReticleNight: ReticleNight
		{
			text = "\z\ace\addons\optics\reticles\sos-reticleMLRIllum_ca.paa";
		};
		class BodyDay: BodyDay
		{
			text = "\z\ace\addons\optics\reticles\sos-body_ca.paa";
		};
		class BodyNight: BodyNight
		{
			text = "\z\ace\addons\optics\reticles\sos-bodyNight_ca.paa";
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
			class _xx_ACE_optic_Hamr_2D
			{
				name = "ACE_optic_Hamr_2D";
				count = 2;
			};
			class _xx_ACE_optic_Hamr_PIP
			{
				name = "ACE_optic_Hamr_PIP";
				count = 2;
			};
			class _xx_ACE_optic_Arco_2D
			{
				name = "ACE_optic_Arco_2D";
				count = 2;
			};
			class _xx_ACE_optic_Arco_PIP
			{
				name = "ACE_optic_Arco_PIP";
				count = 2;
			};
			class _xx_ACE_optic_MRCO_2D
			{
				name = "ACE_optic_MRCO_2D";
				count = 2;
			};
			class _xx_ACE_optic_SOS_2D
			{
				name = "ACE_optic_SOS_2D";
				count = 2;
			};
			class _xx_ACE_optic_SOS_PIP
			{
				name = "ACE_optic_SOS_PIP";
				count = 2;
			};
			class _xx_ACE_optic_LRPS_2D
			{
				name = "ACE_optic_LRPS_2D";
				count = 2;
			};
			class _xx_ACE_optic_LRPS_PIP
			{
				name = "ACE_optic_LRPS_PIP";
				count = 2;
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class Default;
	class Binocular: Default
	{
		forceOptics = 0;
		opticsZoomMin = 0.056889;
		opticsZoomMax = 0.056889;
		modelOptics = "\z\ace\addons\optics\models\NWD_M22_5x";
		visionMode[] = {"Normal"};
		minRange = 500;
		minRangeProbab = 0.001;
		midRange = 1000;
		midRangeProbab = 0.01;
		maxRange = 5000;
		maxRangeProbab = 0.01;
	};
	class optic_DMS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip;
				class Iron;
			};
		};
	};
	class optic_Hamr: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Hamr2Collimator;
				class Hamr2Scope;
			};
		};
	};
	class ACE_optic_Hamr_2D: optic_Hamr
	{
		ace_optics_BodyDay = "\z\ace\addons\optics\reticles\hamr-body_ca.paa";
		ace_optics_BodyNight = "\z\ace\addons\optics\reticles\hamr-bodyNight_ca.paa";
		ace_optics_ReticleDay = "\z\ace\addons\optics\reticles\hamr-reticle65_ca.paa";
		ace_optics_ReticleNight = "\z\ace\addons\optics\reticles\hamr-reticle65Illum_ca.paa";
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_optic_Hamr_2D";
		displayName = "$STR_ace_optics_hamr";
		weaponInfoType = "ACE_RscWeapon_Hamr";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\z\ace\addons\optics\models\ace_optics_reticle90.p3d";
			class OpticsModes: OpticsModes
			{
				class Hamr2Collimator: Hamr2Collimator{};
				class Hamr2Scope: Hamr2Scope
				{
					useModelOptics = 1;
					opticsZoomInit = 0.08726646;
					opticsZoomMax = 0.08726646;
					opticsZoomMin = 0.08726646;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5","ACE_OpticsRadBlur1"};
					opticsDisablePeripherialVision = 0;
					visionMode[] = {"Normal","NVG"};
				};
			};
		};
	};
	class ACE_optic_Hamr_PIP: ACE_optic_Hamr_2D
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_optic_Hamr_PIP";
		displayName = "$STR_ace_optics_hamr_pip";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\z\ace\addons\optics\models\ace_optics_pip.p3d";
		};
	};
	class optic_Arco: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ARCO2collimator;
				class ARCO2scope: ARCO2collimator{};
			};
		};
	};
	class ACE_optic_Arco_2D: optic_Arco
	{
		ace_optics_BodyDay = "\z\ace\addons\optics\reticles\arco-body_ca.paa";
		ace_optics_BodyNight = "\z\ace\addons\optics\reticles\arco-bodyNight_ca.paa";
		ace_optics_ReticleDay = "\z\ace\addons\optics\reticles\arco-reticle65_ca.paa";
		ace_optics_ReticleNight = "\z\ace\addons\optics\reticles\arco-reticle65Illum_ca.paa";
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_optic_Arco_2D";
		displayName = "$STR_ace_optics_arco";
		weaponInfoType = "ACE_RscWeapon_Arco";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\z\ace\addons\optics\models\ace_optics_reticle90.p3d";
			class OpticsModes: OpticsModes
			{
				class ARCO2collimator: ARCO2collimator{};
				class ARCO2scope: ARCO2scope
				{
					useModelOptics = 1;
					opticsZoomInit = 0.08726646;
					opticsZoomMax = 0.08726646;
					opticsZoomMin = 0.08726646;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5","ACE_OpticsRadBlur1"};
					opticsDisablePeripherialVision = 0;
					visionMode[] = {"Normal"};
				};
			};
		};
	};
	class ACE_optic_Arco_PIP: ACE_optic_Arco_2D
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_optic_Arco_PIP";
		displayName = "$STR_ace_optics_arco_pip";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\z\ace\addons\optics\models\ace_optics_pip.p3d";
		};
	};
	class optic_MRCO: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class MRCOcq;
				class MRCOscope;
			};
		};
	};
	class ACE_optic_MRCO_2D: optic_MRCO
	{
		ace_optics_BodyDay = "\z\ace\addons\optics\reticles\mrco-body_ca.paa";
		ace_optics_BodyNight = "\z\ace\addons\optics\reticles\mrco-bodyNight_ca.paa";
		ace_optics_ReticleDay = "\z\ace\addons\optics\reticles\mrco-reticle556_ca.paa";
		ace_optics_ReticleNight = "\z\ace\addons\optics\reticles\mrco-reticle556Illum_ca.paa";
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_optic_MRCO_2D";
		displayName = "$STR_ace_optics_valdada";
		weaponInfoType = "ACE_RscWeapon_MRCO";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\z\ace\addons\optics\models\ace_optics_reticle90.p3d";
			class OpticsModes: OpticsModes
			{
				class MRCOcq: MRCOcq{};
				class MRCOscope: MRCOscope
				{
					useModelOptics = 1;
					opticsZoomInit = 0.08726646;
					opticsZoomMax = 0.08726646;
					opticsZoomMin = 0.08726646;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5","ACE_OpticsRadBlur1"};
					opticsDisablePeripherialVision = 0;
					visionMode[] = {"Normal"};
				};
			};
		};
	};
	class ACE_optic_MRCO_PIP: ACE_optic_MRCO_2D
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_optic_MRCO_PIP";
		scope = 1;
		displayName = "$STR_ace_optics_valdada_pip";
		class ItemInfo: ItemInfo
		{
			modelOptics = "\z\ace\addons\optics\models\ace_optics_pip.p3d";
		};
	};
	class optic_SOS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip;
				class Iron;
			};
		};
	};
	class ACE_optic_SOS_2D: optic_SOS
	{
		ace_optics_BodyDay = "\z\ace\addons\optics\reticles\sos-body_ca.paa";
		ace_optics_BodyNight = "\z\ace\addons\optics\reticles\sos-bodyNight_ca.paa";
		ace_optics_ReticleDay = "\z\ace\addons\optics\reticles\sos-reticleMLR_ca.paa";
		ace_optics_ReticleNight = "\z\ace\addons\optics\reticles\sos-reticleMLRIllum_ca.paa";
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_optic_SOS_2D";
		displayName = "$STR_ace_optics_sos";
		weaponInfoType = "ACE_RscWeapon_SOS";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					modelOptics[] = {"\z\ace\addons\optics\models\ace_optics_reticle90.p3d","\z\ace\addons\optics\models\ace_optics_reticle90.p3d"};
					useModelOptics = 1;
					opticsZoomInit = 0.0116;
					opticsZoomMax = 0.0464;
					opticsZoomMin = 0.0116;
					discreteFOV[] = {0.0464,0.0116};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ACE_OpticsRadBlur1"};
					opticsDisablePeripherialVision = 0;
				};
				class Iron: Iron{};
			};
		};
	};
	class ACE_optic_SOS_PIP: ACE_optic_SOS_2D
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_optic_SOS_PIP";
		displayName = "$STR_ace_optics_sos_pip";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					modelOptics[] = {"\z\ace\addons\optics\models\ace_optics_pip.p3d","\z\ace\addons\optics\models\ace_optics_pip.p3d"};
				};
				class Iron: Iron{};
			};
		};
	};
	class optic_LRPS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip;
			};
		};
	};
	class ACE_optic_LRPS_2D: optic_LRPS
	{
		ace_optics_BodyDay = "\z\ace\addons\optics\reticles\sos-body_ca.paa";
		ace_optics_BodyNight = "\z\ace\addons\optics\reticles\sos-bodyNight_ca.paa";
		ace_optics_ReticleDay = "\z\ace\addons\optics\reticles\sos-reticleMLR_ca.paa";
		ace_optics_ReticleNight = "\z\ace\addons\optics\reticles\sos-reticleMLRIllum_ca.paa";
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_optic_LRPS_2D";
		displayName = "$STR_ace_optics_lrps";
		weaponInfoType = "ACE_RscWeapon_SOS";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					modelOptics[] = {"\z\ace\addons\optics\models\ace_optics_reticle90.p3d","\z\ace\addons\optics\models\ace_optics_reticle90.p3d"};
					useModelOptics = 1;
					opticsZoomInit = 0.0116;
					opticsZoomMax = 0.0464;
					opticsZoomMin = 0.0116;
					discreteFOV[] = {};
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","ACE_OpticsRadBlur1"};
					opticsDisablePeripherialVision = 0;
				};
			};
		};
	};
	class ACE_optic_LRPS_PIP: ACE_optic_LRPS_2D
	{
		author = "$STR_ace_common_ACETeam";
		_generalMacro = "ACE_optic_LRPS_PIP";
		displayName = "$STR_ace_optics_lrps_pip";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					modelOptics[] = {"\z\ace\addons\optics\models\ace_optics_pip.p3d","\z\ace\addons\optics\models\ace_optics_pip.p3d"};
				};
			};
		};
	};
};
class SlotInfo;
class CowsSlot: SlotInfo
{
	compatibleItems[] += {"ACE_optic_Hamr_2D","ACE_optic_Hamr_PIP","ACE_optic_Arco_2D","ACE_optic_Arco_PIP","ACE_optic_MRCO_2D","ACE_optic_MRCO_PIP","ACE_optic_SOS_2D","ACE_optic_SOS_PIP","ACE_optic_LRPS_2D","ACE_optic_LRPS_PIP"};
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		ACE_optic_Hamr_2D = 1;
		ACE_optic_Hamr_PIP = 1;
		ACE_optic_Arco_2D = 1;
		ACE_optic_Arco_PIP = 1;
		ACE_optic_MRCO_2D = 1;
		ACE_optic_MRCO_PIP = 1;
		ACE_optic_SOS_2D = 1;
		ACE_optic_SOS_PIP = 1;
		ACE_optic_LRPS_2D = 1;
		ACE_optic_LRPS_PIP = 1;
	};
};
class PreloadTextures
{
	class CfgWeapons
	{
		class ACE_optic_Hamr_2D
		{
			ace_optics_BodyDay = "*";
			ace_optics_BodyNight = "*";
			ace_optics_ReticleDay = "*";
			ace_optics_ReticleNight = "*";
		};
		class ACE_optic_Hamr_PIP
		{
			ace_optics_BodyDay = "*";
			ace_optics_BodyNight = "*";
			ace_optics_ReticleDay = "*";
			ace_optics_ReticleNight = "*";
		};
		class ACE_optic_Arco_2D
		{
			ace_optics_BodyDay = "*";
			ace_optics_BodyNight = "*";
			ace_optics_ReticleDay = "*";
			ace_optics_ReticleNight = "*";
		};
		class ACE_optic_Arco_PIP
		{
			ace_optics_BodyDay = "*";
			ace_optics_BodyNight = "*";
			ace_optics_ReticleDay = "*";
			ace_optics_ReticleNight = "*";
		};
		class ACE_optic_MRCO_2D
		{
			ace_optics_BodyDay = "*";
			ace_optics_BodyNight = "*";
			ace_optics_ReticleDay = "*";
			ace_optics_ReticleNight = "*";
		};
		class ACE_optic_MRCO_PIP
		{
			ace_optics_BodyDay = "*";
			ace_optics_BodyNight = "*";
			ace_optics_ReticleDay = "*";
			ace_optics_ReticleNight = "*";
		};
		class ACE_optic_SOS_2D
		{
			ace_optics_BodyDay = "*";
			ace_optics_BodyNight = "*";
			ace_optics_ReticleDay = "*";
			ace_optics_ReticleNight = "*";
		};
		class ACE_optic_SOS_PIP
		{
			ace_optics_BodyDay = "*";
			ace_optics_BodyNight = "*";
			ace_optics_ReticleDay = "*";
			ace_optics_ReticleNight = "*";
		};
		class ACE_optic_LRPS_2D
		{
			ace_optics_BodyDay = "*";
			ace_optics_BodyNight = "*";
			ace_optics_ReticleDay = "*";
			ace_optics_ReticleNight = "*";
		};
		class ACE_optic_LRPS_PIP
		{
			ace_optics_BodyDay = "*";
			ace_optics_BodyNight = "*";
			ace_optics_ReticleDay = "*";
			ace_optics_ReticleNight = "*";
		};
	};
};
