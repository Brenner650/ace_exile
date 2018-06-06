////////////////////////////////////////////////////////////////////
//DeRap: ace_javelin\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:43:59 2018 : 'file' last modified on Mon Apr 16 21:45:15 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ace_javelin
	{
		name = "ACE3 - Javelin";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"ace_main","ace_common","ace_missileguidance"};
		author = "$STR_ace_common_ACETeam";
		url = "$STR_ace_main_URL";
		version = "3.12.2.33";
		versionStr = "3.12.2.33";
		versionAr[] = {3,12,2,33};
		magazines[] = {};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_javelin
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\javelin\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_javelin
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\javelin\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_javelin
	{
		clientInit = "call compile preProcessFileLineNumbers '\z\ace\addons\javelin\XEH_clientInit.sqf'";
	};
};
class RscOpticsValue;
class RscControlsGroupNoScrollbars;
class RscPicture;
class RscLine;
class RscMapControl;
class RscInGameUI
{
	class ACE_RscOptics_javelin
	{
		idd = 300;
		controls[] = {"ace_javelin_elements_group","ACE_Targeting","ace_javelin_mapHelper"};
		onLoad = "with uiNamespace do {ACE_RscOptics_javelin = _this select 0;};";
		class ace_javelin_mapHelper: RscMapControl
		{
			onDraw = "_this call ace_javelin_fnc_mapHelperDraw;";
			x = -10;
			y = -10;
			w = 0;
			h = 0;
		};
		class ace_javelin_elements_group: RscControlsGroupNoScrollbars
		{
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "safeZoneH";
			idc = 170;
			class Controls
			{
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					sizeEx = "0";
					colorText[] = {0,0,0,0};
					x = 0;
					y = 0;
					w = 0;
					h = 0;
				};
				class ace_javelin_Day_mode_off: RscPicture
				{
					idc = 1001;
					x = "(safeZoneX+(safeZoneW -safeZoneH*3/4)/2)+ (0.03/4)*3*safeZoneH    - safeZoneX";
					y = "safeZoneY+safeZoneH*0.031 - safeZoneY";
					w = "0.1045752* (((safeZoneW*3)/4)/safeZoneW)/(1/safeZoneH)";
					h = "safeZoneH*0.1045752";
					colorText[] = {0.2941,0.2941,0.2941,1};
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\day_co.paa";
				};
				class ace_javelin_Day_mode: ace_javelin_Day_mode_off
				{
					idc = 160;
					colorText[] = {0.2941,0.8745,0.2157,1};
				};
				class ace_javelin_WFOV_mode_off: ace_javelin_Day_mode_off
				{
					idc = 1004;
					x = "(safeZoneX+(safeZoneW -safeZoneH*3/4)/2)+ (0.307/4)*3*safeZoneH - safeZoneX";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\wfov_co.paa";
				};
				class ace_javelin_WFOV_mode_group: RscControlsGroupNoScrollbars
				{
					x = "safeZoneX";
					y = "safeZoneY";
					w = "safeZoneW";
					h = "safeZoneH";
					idc = 163;
					class Controls
					{
						class ace_javelin_WFOV_mode_on: ace_javelin_WFOV_mode_off
						{
							idc = -1;
							y = "0.031*SafeZoneH - SafezoneY";
							x = "((SafezoneW -SafezoneH*3/4)/2)+ (0.307/4)*3*SafezoneH - SafezoneX";
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
						class StadiaL: RscLine
						{
							x = "0.4899*safeZoneW - safeZoneX";
							y = "0.171*safeZoneH - safeZoneY";
							w = 0;
							h = "0.049*safeZoneH";
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
						class StadiaR: RscLine
						{
							x = "0.5109*safeZoneW- safeZoneX";
							y = "0.171*safeZoneH - safeZoneY";
							w = 0;
							h = "0.049*safeZoneH";
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
						class BracketL: RscLine
						{
							x = "((safeZoneW -safeZoneH*3/4)/2)+ (0.293/4)*3*safeZoneH - safeZoneX";
							y = "0.4677*safeZoneH - safeZoneY";
							w = 0;
							h = "0.0646*safeZoneH";
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
						class BracketR: RscLine
						{
							x = "((safeZoneW -safeZoneH*3/4)/2)+ (0.70/4)*3*safeZoneH - safeZoneX";
							y = "0.4677*safeZoneH - safeZoneY";
							w = 0;
							h = "0.0646*safeZoneH";
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
						class BracketT: RscLine
						{
							x = "((safeZoneW -safeZoneH*3/4)/2)+ (0.467/4)*3*safeZoneH - safeZoneX";
							y = "0.3535*safeZoneH - safeZoneY";
							w = "0.065* (((safeZoneW*3)/4)/safeZoneW)/(1/safeZoneH)";
							h = 0;
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
						class BracketB: RscLine
						{
							x = "((safeZoneW -safeZoneH*3/4)/2)+ (0.467/4)*3*safeZoneH - safeZoneX";
							y = "0.6465*safeZoneH - safeZoneY";
							w = "0.065* (((safeZoneW*3)/4)/safeZoneW)/(1/safeZoneH)";
							h = 0;
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
					};
				};
				class ace_javelin_NFOV_mode_off: ace_javelin_Day_mode_off
				{
					idc = 1003;
					x = "(safeZoneX+(safeZoneW -safeZoneH*3/4)/2)+ (0.586/4)*3*safeZoneH - safeZoneX";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\nfov_co.paa";
				};
				class ace_javelin_NFOV_mode_group: RscControlsGroupNoScrollbars
				{
					x = "safeZoneX";
					y = "safeZoneY";
					w = "safeZoneW-safeZoneX";
					h = "safeZoneH-safeZoneY";
					idc = 162;
					class Controls
					{
						class ace_javelin_NFOV_mode_on: ace_javelin_NFOV_mode_off
						{
							idc = -1;
							x = "((SafezoneW -SafezoneH*3/4)/2)+ (0.586/4)*3*SafezoneH - SafezoneX";
							y = "0.031*SafeZoneH - SafezoneY";
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
						class StadiaL: RscLine
						{
							x = "0.4788*safeZoneW - safeZoneX";
							y = "0.171*safeZoneH - safeZoneY";
							w = 0;
							h = "0.049*safeZoneH";
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
						class StadiaR: RscLine
						{
							x = "0.5212*safeZoneW - safeZoneX";
							y = "0.171*safeZoneH - safeZoneY";
							w = 0;
							h = "0.049*safeZoneH";
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
						class LineHL: RscLine
						{
							x = "((safeZoneW -safeZoneH*3/4)/2)+ (0.01/4)*3*safeZoneH - safeZoneX";
							y = "safeZoneH*0.5 - safeZoneY";
							w = "0.29* (((safeZoneW*3)/4)/safeZoneW)/(1/safeZoneH)";
							h = "safeZoneH*0.0";
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
						class LineHR: RscLine
						{
							x = "((safeZoneW -safeZoneH*3/4)/2)+ (0.695/4)*3*safeZoneH - safeZoneX";
							y = "safeZoneH*0.5 - safeZoneY";
							w = "0.29* (((safeZoneW*3)/4)/safeZoneW)/(1/safeZoneH)";
							h = "safeZoneH*0.0";
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
						class LineVT: RscLine
						{
							x = "0.5*safeZoneW - safeZoneX";
							y = "0.171*safeZoneH - safeZoneY";
							w = 0;
							h = "0.1825*safeZoneH";
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
						class LineVB: RscLine
						{
							x = "0.5*safeZoneW - safeZoneX";
							y = "0.6465*safeZoneH - safeZoneY";
							w = 0;
							h = "0.1895*safeZoneH";
							colorText[] = {0.2941,0.8745,0.2157,1};
						};
					};
				};
				class ace_javelin_SEEK_off: ace_javelin_Day_mode_off
				{
					idc = 699000;
					x = "(safeZoneX+(safeZoneW -safeZoneH*3/4)/2)+ (0.863/4)*3*safeZoneH - safeZoneX";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\seek_co.paa";
				};
				class ace_javelin_SEEK: ace_javelin_SEEK_off
				{
					idc = 166;
					colorText[] = {0.2941,0.8745,0.2157,0};
				};
				class ace_javelin_Missle_off: ace_javelin_Day_mode_off
				{
					idc = 1032;
					x = "(safeZoneX+(safeZoneW -safeZoneH*3/4)/2)+ (-0.134/4)*3*safeZoneH - safeZoneX";
					y = "(safeZoneY + 0.208*safeZoneH) - safeZoneY";
					colorText[] = {0.2941,0.2941,0.2941,1};
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\missle_co.paa";
				};
				class ace_javelin_Missle: ace_javelin_Missle_off
				{
					idc = 167;
					colorText[] = {0.9255,0.5216,0.1216,0};
				};
				class ace_javelin_CLU_off: ace_javelin_Missle_off
				{
					idc = 1027;
					y = "(safeZoneY + 0.436*safeZoneH) - safeZoneY";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\clu_co.paa";
				};
				class ace_javelin_HangFire_off: ace_javelin_Missle_off
				{
					idc = 1028;
					y = "(safeZoneY + 0.669*safeZoneH) - safeZoneY";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\hangfire_co.paa";
				};
				class ace_javelin_TOP_off: ace_javelin_Day_mode_off
				{
					idc = 699001;
					x = "(safeZoneX+(safeZoneW -safeZoneH*3/4)/2)+ (1.023/4)*3*safeZoneH - safeZoneX";
					y = "(safeZoneY + 0.208*safeZoneH) - safeZoneY";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\top_co.paa";
					colorText[] = {0.2941,0.8745,0.2157,1};
				};
				class ace_javelin_DIR: ace_javelin_Day_mode
				{
					idc = 699002;
					x = "(safeZoneX+(safeZoneW -safeZoneH*3/4)/2)+ (1.023/4)*3*safeZoneH - safeZoneX";
					y = "(safeZoneY + 0.436*safeZoneH)    - safeZoneY";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\dir_co.paa";
					colorText[] = {0.2941,0.2941,0.2941,1};
				};
				class ace_javelin_FLTR_mode_off: ace_javelin_Day_mode_off
				{
					idc = 1002;
					x = "(safeZoneX+(safeZoneW -safeZoneH*3/4)/2)+ (1.023/4)*3*safeZoneH - safeZoneX";
					y = "(safeZoneY + 0.669*safeZoneH)    - safeZoneY";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics_titan\fltr_co.paa";
				};
				class ace_javelin_FLTR_mode: ace_javelin_FLTR_mode_off
				{
					idc = 161;
					colorText[] = {0.2941,0.8745,0.2157,1};
				};
			};
		};
		class ACE_Targeting: RscControlsGroupNoScrollbars
		{
			idc = 6999;
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "safeZoneH";
			enabled = 0;
			show = 0;
			class Controls
			{
				class ACE_TargetingConstrains: RscControlsGroupNoScrollbars
				{
					x = "safeZoneX";
					y = "safeZoneY";
					w = "safeZoneW-safeZoneX";
					h = "safeZoneH-safeZoneY";
					enabled = 0;
					class Controls
					{
						class Top: RscPicture
						{
							idc = 699101;
							text = "#(argb,8,8,3)color(1,1,1,1)";
							colorText[] = {0.2941,0.2941,0.2941,1};
							x = "((safeZoneW -(3/4)*safeZoneH)/2) - safeZoneX";
							y = "0.15*safeZoneH-safeZoneY";
							w = "(3/4)*safeZoneH";
							h = "0.21*safeZoneH";
						};
						class Bottom: Top
						{
							idc = 699102;
							y = "0.64*safeZoneH-safeZoneY";
						};
						class Left: Top
						{
							idc = 699103;
							x = "((safeZoneW -(3/4)*safeZoneH)/2) - safeZoneX";
							y = "0.36*safeZoneH-safeZoneY";
							w = "0.31*(3/4)*safeZoneH";
							h = "0.28*safeZoneH";
						};
						class Right: Left
						{
							idc = 699104;
							x = "((safeZoneW -(3/4)*safeZoneH)/2)+ 0.69*(3/4)*safeZoneH - safeZoneX";
						};
						class OpticsBorders: RscPicture
						{
							idc = 699105;
							text = "\z\ace\addons\javelin\data\javelin_ui_border_ca.paa";
							colorText[] = {0,0,0,1};
							x = "((safeZoneW -(3.1/4)*safeZoneH)/2) - safeZoneX";
							y = "0.15*safeZoneH-safeZoneY";
							w = "(3.1/4)*safeZoneH";
							h = "0.7*safeZoneH";
						};
					};
				};
				class ACE_TargetingGate: ACE_TargetingConstrains
				{
					idc = 699200;
					class Controls
					{
						class TargetingGateTL: ACE_TargetingConstrains
						{
							x = "((safeZoneW -(3/4)*safeZoneH)/2) - safeZoneX";
							y = "0.15*safeZoneH - safeZoneY";
							idc = 699201;
							class Controls
							{
								class LineH: RscLine
								{
									idc = 699210;
									x = "0";
									y = "0";
									w = "0.025*(3/4)*safeZoneH";
									h = "0";
									colorText[] = {0.8745,0.8745,0.8745,1};
								};
								class LineV: LineH
								{
									idc = 699211;
									w = "0";
									h = "0.025*safeZoneH";
								};
							};
						};
						class TargetingGateTR: TargetingGateTL
						{
							x = "((safeZoneW -(3/4)*safeZoneH)/2) - safeZoneX + 0.975*(3/4)*safeZoneH";
							y = "0.15*safeZoneH - safeZoneY";
							idc = 699202;
							class Controls
							{
								class LineH: RscLine
								{
									idc = 699220;
									x = "0";
									y = "0";
									w = "0.025*(3/4)*safeZoneH";
									h = "0";
									colorText[] = {0.8745,0.8745,0.8745,1};
								};
								class LineV: LineH
								{
									idc = 699221;
									x = "0.025*(3/4)*safeZoneH";
									w = "0";
									h = "0.025*safeZoneH";
								};
							};
						};
						class TargetingGateBL: TargetingGateTL
						{
							x = "((safeZoneW -(3/4)*safeZoneH)/2) - safeZoneX";
							y = "0.825*safeZoneH - safeZoneY";
							idc = 699203;
							class Controls
							{
								class LineH: RscLine
								{
									x = "0";
									y = "0.025*safeZoneH";
									w = "0.025*(3/4)*safeZoneH";
									h = "0";
									colorText[] = {0.8745,0.8745,0.8745,1};
								};
								class LineV: LineH
								{
									y = "0";
									w = "0";
									h = "0.025*safeZoneH";
								};
							};
						};
						class TargetingGateBR: TargetingGateBL
						{
							x = "((safeZoneW -(3/4)*safeZoneH)/2) - safeZoneX + 0.975*(3/4)*safeZoneH";
							y = "0.825*safeZoneH - safeZoneY";
							idc = 699204;
							class Controls
							{
								class LineH: RscLine
								{
									x = "0";
									y = "0.025*safeZoneH";
									w = "0.025*(3/4)*safeZoneH";
									h = "0";
									colorText[] = {0.8745,0.8745,0.8745,1};
								};
								class LineV: LineH
								{
									x = "0.025*(3/4)*safeZoneH";
									y = "0";
									w = "0";
									h = "0.025*safeZoneH";
								};
							};
						};
					};
				};
				class ACE_TargetingLines: ACE_TargetingConstrains
				{
					idc = 699300;
					class Controls
					{
						class LineH: RscLine
						{
							idc = 699301;
							x = "((safeZoneW -(3/4)*safeZoneH)/2) - safeZoneX";
							y = "0.5*safeZoneH - safeZoneY";
							w = "(3/4)*safeZoneH";
							h = "0";
							colorText[] = {0.8745,0.8745,0.8745,1};
						};
						class LineV: RscLine
						{
							idc = 699302;
							x = "0.5*safeZoneW - safeZoneX";
							y = "0.15*safeZoneH - safeZoneY";
							w = "0";
							h = "0.7*safeZoneH";
							colorText[] = {0.8745,0.8745,0.8745,1};
						};
					};
				};
			};
		};
	};
};
class CfgSounds
{
	class ACE_Javelin_Locking
	{
		name = "ACE_Javelin_Locking";
		sound[] = {"\z\ace\addons\javelin\data\sounds\javelin_locking.ogg","db+0",1.0};
		titles[] = {};
	};
	class ACE_Javelin_Locked
	{
		name = "ACE_Javelin_Locked";
		sound[] = {"\z\ace\addons\javelin\data\sounds\javelin_locked.ogg","db+0",1.0};
		titles[] = {};
	};
};
class CfgWeapons
{
	class missiles_titan_static;
	class ace_javelin_Titan_Static: missiles_titan_static
	{
		modes[] = {"Player"};
		ace_javelin_enabled = 1;
		weaponInfoType = "ACE_RscOptics_javelin";
		modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";
		canLock = 0;
		magazines[] = {"1Rnd_GAT_missiles"};
		lockingTargetSound[] = {"",0,1};
		lockedTargetSound[] = {"",0,1};
	};
	class launch_Titan_short_base;
	class launch_B_Titan_short_F: launch_Titan_short_base
	{
		ace_javelin_enabled = 1;
		weaponInfoType = "ACE_RscOptics_javelin";
		modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";
		canLock = 0;
		lockingTargetSound[] = {"",0,1};
		lockedTargetSound[] = {"",0,1};
	};
	class launch_B_Titan_short_tna_F: launch_B_Titan_short_F
	{
		ace_javelin_enabled = 1;
	};
	class launch_I_Titan_short_F: launch_Titan_short_base
	{
		ace_javelin_enabled = 1;
		weaponInfoType = "ACE_RscOptics_javelin";
		modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";
		canLock = 0;
		lockingTargetSound[] = {"",0,1};
		lockedTargetSound[] = {"",0,1};
	};
	class launch_O_Titan_short_F: launch_Titan_short_base
	{
		ace_javelin_enabled = 1;
		weaponInfoType = "ACE_RscOptics_javelin";
		modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";
		canLock = 0;
		lockingTargetSound[] = {"",0,1};
		lockedTargetSound[] = {"",0,1};
	};
	class launch_O_Titan_short_ghex_F: launch_O_Titan_short_F
	{
		ace_javelin_enabled = 1;
	};
	class launch_Titan_short_F: launch_Titan_short_base
	{
		ace_javelin_enabled = 1;
		weaponInfoType = "ACE_RscOptics_javelin";
		modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";
		canLock = 0;
		lockingTargetSound[] = {"",0,1};
		lockedTargetSound[] = {"",0,1};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class AT_01_base_F: StaticMGWeapon{};
	class B_static_AT_F: AT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ace_javelin_Titan_Static"};
				magazines[] = {"1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles"};
				turretInfoType = "ACE_RscOptics_javelin";
				gunnerOpticsModel = "\z\ace\addons\javelin\data\reticle_titan.p3d";
				opticsZoomMin = 0.08333;
				opticsZoomMax = 0.04167;
				opticsZoomInit = 0.08333;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsFlare = 0;
				discretefov[] = {0.08333,0.04167};
				discreteInitIndex = 0;
			};
		};
	};
	class O_static_AT_F: AT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ace_javelin_Titan_Static"};
				magazines[] = {"1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles"};
				turretInfoType = "ACE_RscOptics_javelin";
				gunnerOpticsModel = "\z\ace\addons\javelin\data\reticle_titan.p3d";
				opticsZoomMin = 0.08333;
				opticsZoomMax = 0.04167;
				opticsZoomInit = 0.08333;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsFlare = 0;
				discretefov[] = {0.08333,0.04167};
				discreteInitIndex = 0;
			};
		};
	};
	class I_static_AT_F: AT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"ace_javelin_Titan_Static"};
				magazines[] = {"1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles","1Rnd_GAT_missiles"};
				turretInfoType = "ACE_RscOptics_javelin";
				gunnerOpticsModel = "\z\ace\addons\javelin\data\reticle_titan.p3d";
				opticsZoomMin = 0.08333;
				opticsZoomMax = 0.04167;
				opticsZoomInit = 0.08333;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsFlare = 0;
				discretefov[] = {0.08333,0.04167};
				discreteInitIndex = 0;
			};
		};
	};
	class Car;
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class LSV_01_base_F: Car_F
	{
		class Turrets: Turrets{};
	};
	class LSV_01_AT_base_F: LSV_01_base_F
	{
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				weapons[] = {"ace_javelin_Titan_Static"};
				turretInfoType = "ACE_RscOptics_javelin";
				gunnerOpticsModel = "\z\ace\addons\javelin\data\reticle_titan.p3d";
			};
		};
	};
};
class CfgMagazines
{
	class 5Rnd_GAT_missiles;
	class 1Rnd_GAT_missiles: 5Rnd_GAT_missiles
	{
		ammo = "ACE_Javelin_FGM148_static";
	};
	class Titan_AA;
	class Titan_AT: Titan_AA
	{
		ammo = "ACE_Javelin_FGM148";
	};
};
