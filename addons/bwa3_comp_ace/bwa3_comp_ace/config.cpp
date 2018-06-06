////////////////////////////////////////////////////////////////////
//DeRap: bwa3_comp_ace\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jun 05 23:44:28 2018 : 'file' last modified on Thu Dec 07 13:20:44 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BWA3_Comp_ACE
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"BWA3_Common","BWA3_Eagle","BWA3_Weapons","BWA3_VehicleWeapons","BWA3_Explosives","BWA3_Units","BWA3_Puma","BWA3_Leopard2A6M","BWA3_Tiger"};
		versionAr[] = {1,0,0};
	};
};
class CfgVehicles
{
	class All
	{
		class Turrets;
	};
	class AllVehicles: All
	{
		class NewTurret
		{
			class Turrets;
		};
	};
	class Land: AllVehicles{};
	class Air: AllVehicles{};
	class LandVehicle: Land
	{
		class CommanderOptics: NewTurret{};
	};
	class Tank: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions;
		};
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Tank_F: Tank{};
	class Helicopter: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions;
		};
		class Turrets
		{
			class MainTurret;
		};
	};
	class Helicopter_Base_F: Helicopter{};
	class BWA3_Puma_base: Tank_F
	{
		class UserActions
		{
			delete CamoNet_mells_hide;
			delete CamoNet_mells_show;
			delete CamoNet_gun_hide;
			delete CamoNet_gun_show;
			delete CamoNet_turret_hide;
			delete CamoNet_turret_show;
			delete CamoNet_hide;
			delete CamoNet_show;
		};
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0,-1.0,1.3]";
			};
			class BWA3_CamoNet_show
			{
				displayName = "$STR_BWA3_CamouflageNet_show";
				selection = "mirror_axis1";
				position = "";
				showDisabled = 0;
				priority = 2;
				distance = 4;
				icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
				condition = "_target animationPhase ""hide_netz"" > 0.5 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animate [""hide_netz"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_show""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoNet_hide: BWA3_CamoNet_show
			{
				displayName = "$STR_BWA3_CamouflageNet_hide";
				condition = "_target animationPhase ""hide_netz"" < 0.5 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animate [""hide_netz"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_hide""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoNet_turret_show: BWA3_CamoNet_show
			{
				displayName = "$STR_BWA3_CamouflageNet_Turret_show";
				selection = "gunnerview";
				condition = "_target animationPhase ""hide_netz_turret"" > 0.5 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animate [""hide_netz_turret"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_Turret_show""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoNet_turret_hide: BWA3_CamoNet_turret_show
			{
				displayName = "$STR_BWA3_CamouflageNet_Turret_hide";
				condition = "_target animationPhase ""hide_netz_turret"" < 0.5 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animate [""hide_netz_turret"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_Turret_hide""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoNet_gun_show: BWA3_CamoNet_show
			{
				displayName = "$STR_BWA3_CamouflageNet_Gun_show";
				selection = "usti hlavne2";
				condition = "_target animationPhase ""hide_netz_gun"" > 0.5 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animate [""hide_netz_gun"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_Gun_show""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoNet_gun_hide: BWA3_CamoNet_gun_show
			{
				displayName = "$STR_BWA3_CamouflageNet_Gun_hide";
				condition = "_target animationPhase ""hide_netz_gun"" < 0.5 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animate [""hide_netz_gun"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_Gun_hide""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoNet_mells_show: BWA3_CamoNet_show
			{
				displayName = "$STR_BWA3_CamouflageNet_MELLS_show";
				selection = "konec rakety";
				condition = "_target animationPhase ""hide_netz_mells"" > 0.5 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animate [""hide_netz_mells"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_MELLS_show""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoNet_mells_hide: BWA3_CamoNet_mells_show
			{
				displayName = "$STR_BWA3_CamouflageNet_MELLS_hide";
				condition = "_target animationPhase ""hide_netz_mells"" < 0.5 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animate [""hide_netz_mells"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_MELLS_hide""] call ace_common_fnc_progressBar";
			};
		};
		fuelCapacity = "600 * 0.165";
		ACE_refuel_fuelCapacity = 700;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ACE_fcs_enabled = 1;
				ACE_fcs_minDistance = 200;
				ACE_fcs_maxDistance = 9990;
				ACE_fcs_distanceInterval = 5;
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
			};
		};
	};
	class BWA3_Leopard_base: Tank_F
	{
		class UserActions
		{
			delete Mudflaps_hide;
			delete Mudflaps_show;
			delete CamoTurret_hide;
			delete CamoTurret_show;
			delete CamoChassis_hide;
			delete CamoChassis_show;
			delete CamoNet_gun_hide;
			delete CamoNet_gun_show;
			delete CamoNet_turret_hide;
			delete CamoNet_turret_show;
			delete CamoNet_hide;
			delete CamoNet_show;
		};
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0,-1.5,1.3]";
			};
			class BWA3_CamoNet_show
			{
				displayName = "$STR_BWA3_CamouflageNet_show";
				selection = "mirror_left_axis";
				position = "";
				showDisabled = 0;
				priority = 2;
				distance = 4;
				icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
				condition = "_target animationSourcePhase ""camoProxyChassis"" < 0.5 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animateSource [""camoProxyChassis"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_show""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoNet_hide: BWA3_CamoNet_show
			{
				displayName = "$STR_BWA3_CamouflageNet_hide";
				condition = "_target animationSourcePhase ""camoProxyChassis"" == 1 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animateSource [""camoProxyChassis"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_hide""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoNet_turret_show: BWA3_CamoNet_show
			{
				displayName = "$STR_BWA3_CamouflageNet_Turret_show";
				selection = "gunnerview";
				condition = "_target animationSourcePhase ""camoProxyTurret"" < 0.5 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animateSource [""camoProxyTurret"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_Turret_show""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoNet_turret_hide: BWA3_CamoNet_turret_show
			{
				displayName = "$STR_BWA3_CamouflageNet_Turret_hide";
				condition = "_target animationSourcePhase ""camoProxyTurret"" == 1 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animateSource [""camoProxyTurret"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_Turret_hide""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoNet_gun_show: BWA3_CamoNet_show
			{
				displayName = "$STR_BWA3_CamouflageNet_Gun_show";
				selection = "usti hlavne2";
				condition = "_target animationSourcePhase ""camoProxyGun"" < 0.5 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animateSource [""camoProxyGun"", 1];}, {}, localize ""STR_BWA3_CamouflageNet_Gun_show""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoNet_gun_hide: BWA3_CamoNet_gun_show
			{
				displayName = "$STR_BWA3_CamouflageNet_Gun_hide";
				condition = "_target animationSourcePhase ""camoProxyGun"" > 0.5 and _player == cameraOn";
				statement = "[8, _target, {_this select 0 animateSource [""camoProxyGun"", 0];}, {}, localize ""STR_BWA3_CamouflageNet_Gun_hide""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoChassis_show
			{
				displayName = "$STR_BWA3_Leopard2A6MCamo_Chassis_Show";
				selection = "mirror_right_axis";
				position = "";
				showDisabled = 0;
				priority = 2;
				distance = 4;
				icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
				condition = "[_target,""camoProxyChassis""] call BWA3_fnc_canUseCamo > 1 and _player == cameraOn";
				statement = "[10, _target, {_this select 0 animateSource [""camoProxyChassis"", [this,""camoProxyChassis""] call BWA3_fnc_canUseCamo];}, {}, localize ""STR_BWA3_Leopard2A6MCamo_Chassis_Show""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoChassis_hide: BWA3_CamoChassis_show
			{
				displayName = "$STR_BWA3_Leopard2A6MCamo_Chassis_Hide";
				condition = "_target animationSourcePhase ""camoProxyChassis"" > 1 and _player == cameraOn";
				statement = "[10, _target, {_this select 0 animateSource [""camoProxyChassis"", 1];}, {}, localize ""STR_BWA3_Leopard2A6MCamo_Chassis_Hide""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoTurret_show: BWA3_CamoChassis_show
			{
				displayName = "$STR_BWA3_Leopard2A6MCamo_Turret_Show";
				selection = "konec hlavne2";
				condition = "[_target,""camoProxyTurret""] call BWA3_fnc_canUseCamo > 1 and _player == cameraOn";
				statement = "[10, _target, {_this select 0 animateSource [""camoProxyTurret"", [this,""camoProxyTurret""] call BWA3_fnc_canUseCamo];}, {}, localize ""STR_BWA3_Leopard2A6MCamo_Turret_Show""] call ace_common_fnc_progressBar";
			};
			class BWA3_CamoTurret_hide: BWA3_CamoTurret_show
			{
				displayName = "$STR_BWA3_Leopard2A6MCamo_Turret_Hide";
				condition = "_target animationSourcePhase ""camoProxyTurret"" > 1 and _player == cameraOn";
				statement = "[10, _target, {_this select 0 animateSource [""camoProxyTurret"", 1];}, {}, localize ""STR_BWA3_Leopard2A6MCamo_Turret_Hide""] call ace_common_fnc_progressBar";
			};
			class BWA3_Mudflaps_show
			{
				displayName = "$STR_BWA3_Leopard2A6MMudflapShow";
				selection = "exhaust_pos";
				position = "";
				showDisabled = 0;
				priority = 2;
				distance = 4;
				icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
				condition = "_target animationSourcePhase ""Mudflaps"" < 0.5 and _player == cameraOn";
				statement = "[6, _target, {_this select 0 animateSource [""Mudflaps"", 1];}, {}, localize ""STR_BWA3_Leopard2A6MMudflapShow""] call ace_common_fnc_progressBar";
			};
			class BWA3_Mudflaps_hide: BWA3_Mudflaps_show
			{
				displayName = "$STR_BWA3_Leopard2A6MMudflapHide";
				condition = "_target animationSourcePhase ""Mudflaps"" > 0.5 and _player == cameraOn";
				statement = "[6, _target, {_this select 0 animateSource [""Mudflaps"", 0];}, {}, localize ""STR_BWA3_Leopard2A6MMudflapHide""] call ace_common_fnc_progressBar";
			};
		};
		fuelCapacity = "500 * 0.165";
		ACE_refuel_fuelCapacity = 1160;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ACE_fcs_enabled = 1;
				ACE_fcs_minDistance = 200;
				ACE_fcs_maxDistance = 9990;
				ACE_fcs_distanceInterval = 5;
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
			};
		};
	};
	class BWA3_Tiger_base: Helicopter_Base_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0,1.5,0]";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ACE_fcs_enabled = 1;
				ACE_fcs_minDistance = 200;
				ACE_fcs_maxDistance = 9990;
				ACE_fcs_distanceInterval = 1;
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
			};
		};
	};
	class BWA3_Eagle_Base: Car_F
	{
		fuelCapacity = "700 * 0.165";
		ACE_refuel_fuelCapacity = 180;
		class UserActions
		{
			delete Rope_hide;
			delete Rope_show;
		};
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0,-0.3,0.7]";
			};
			class BWA3_Rope_show
			{
				displayName = "$STR_BWA3_Rope_show";
				selection = "rope_control";
				position = "";
				condition = "_target animationPhase ""hide_rope"" > 0.5 and _player == cameraOn";
				statement = "[3, _target, {_this select 0 animate [""hide_rope"", 0]; playSound3D [""A3\sounds_f\characters\stances\lift_handgun.wss"", objNull, false, AGLToASL (this modelToWorld (this selectionPosition ""rope_control"")), 0.50118721, 1, 20];}, {}, localize ""STR_BWA3_Rope_show""] call ace_common_fnc_progressBar";
				showDisabled = 0;
				priority = 2;
				icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
				distance = 2;
			};
			class BWA3_Rope_hide: BWA3_Rope_show
			{
				displayName = "$STR_BWA3_Rope_hide";
				condition = "_target animationPhase ""hide_rope"" < 0.5 and _player == cameraOn";
				statement = "[3, _target, {_this select 0 animate [""hide_rope"", 1]; playSound3D [""A3\sounds_f\characters\stances\lift_handgun.wss"", objNull, false, AGLToASL (this modelToWorld (this selectionPosition ""rope_control"")), 0.50118721, 1, 20];}, {}, localize ""STR_BWA3_Rope_hide""] call ace_common_fnc_progressBar";
			};
		};
	};
	class BWA3_Eagle_flw100_base: BWA3_Eagle_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ACE_fcs_enabled = 1;
				ACE_fcs_minDistance = 50;
				ACE_fcs_maxDistance = 5000;
				ACE_fcs_distanceInterval = 5;
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
			};
		};
	};
	class ReammoBox_F;
	class BWA3_Box_Base: ReammoBox_F
	{
		ACE_dragging_canCarry = 1;
		ACE_dragging_canDrag = 1;
	};
	class BWA3_Box_All: BWA3_Box_Base
	{
		ACE_dragging_canCarry = 0;
		ACE_dragging_canDrag = 0;
	};
	class BWA3_Box_Gear: BWA3_Box_Base
	{
		ACE_dragging_canCarry = 0;
		ACE_dragging_canDrag = 0;
	};
	class Items_base_F;
	class ACE_Explosives_Place: Items_base_F{};
	class BWA3_DM31AT: ACE_Explosives_Place
	{
		mapSize = 0.33;
		author = "$STR_BWA3_Author";
		_generalMacro = "BWA3_DM31AT";
		scope = 2;
		displayName = "$STR_BWA3_DM31ATName";
		descriptionShort = "$STR_BWA3_DM31ATDescription";
		model = "\bwa3_explosives\bwa3_dm31at.p3d";
		picture = "\bwa3_explosives\ui\bwa3_dm31at_x_ca.paa";
		icon = "iconExplosiveAT";
		editorPreview = "\bwa3_explosives\editorpreview\bwa3_dm31at.jpg";
		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_Mine_Library0";
		};
	};
};
class PointerSlot;
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		BWA3_acc_LLM01_laser = 1;
		BWA3_acc_VarioRay_laser = 1;
	};
};
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class BWA3_P8: Pistol_Base_F
	{
		ACE_barrelTwist = 248.92;
		ACE_barrelLength = 108;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {"BWA3_acc_LLM01_irlaser","BWA3_acc_LLM01_flash","BWA3_acc_LLM01_laser"};
			};
			mass = "(0.77*22)";
		};
	};
	class BWA3_MP7: Pistol_Base_F
	{
		ACE_barrelTwist = 160.02;
		ACE_barrelLength = 180;
		ACE_RailHeightAboveBore = 4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(1.9*22)";
		};
	};
	class BWA3_P2A1: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(0.52*22)";
		};
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class BWA3_G36: Rifle_Base_F
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 480;
		ACE_RailHeightAboveBore = 6.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(3.63*22)";
		};
		class AG40: UGL_F
		{
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
		};
	};
	class BWA3_G36K: BWA3_G36
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 318;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(3.37*22)";
		};
	};
	class BWA3_G36_AG: BWA3_G36
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "((3.63*22)+(1.27*22))";
		};
	};
	class BWA3_G36K_AG: BWA3_G36K
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "((3.37*22)+(1.27*22))";
		};
	};
	class BWA3_G36_LMG: BWA3_G36
	{
		ACE_overheating_dispersion = 1;
	};
	class BWA3_G38: Rifle_Base_F
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 419.1;
		ACE_RailHeightAboveBore = 3.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(3.56*22)";
		};
		class AG40: UGL_F
		{
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
		};
	};
	class BWA3_G38K: BWA3_G38
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368.3;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(3.49*22)";
		};
	};
	class BWA3_G38C: BWA3_G38
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 279.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(3.12*22)";
		};
	};
	class BWA3_G38_AG: BWA3_G38
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "((3.56*22)+(1.27*22))";
		};
	};
	class BWA3_G38K_AG: BWA3_G38
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "((3.49*22)+(1.27*22))";
		};
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class BWA3_G28_Standard: Rifle_Long_Base_F
	{
		ACE_overheating_dispersion = 0.75;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 421;
		ACE_gunbag_allowGunbag = 1;
		ACE_RailHeightAboveBore = 3.6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "((5.8+0.7)*22)";
		};
	};
	class BWA3_G28_Assault: BWA3_G28_Standard
	{
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 421;
		ACE_gunbag_allowGunbag = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(5.1*22)";
		};
	};
	class BWA3_G27: BWA3_G28_Standard
	{
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 406;
		ACE_gunbag_allowGunbag = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(4.4*22)";
		};
	};
	class BWA3_G27_AG: BWA3_G27
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "((4.4*22)+(1.27*22))";
		};
		class AG40: UGL_F
		{
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
		};
	};
	class BWA3_MG3: Rifle_Long_Base_F
	{
		ace_overheating_mrbs = 2000;
		ace_overheating_slowdownFactor = 0.75;
		ACE_overheating_allowSwapBarrel = 1;
		ACE_overheating_dispersion = 0.85;
		ACE_barrelTwist = 305;
		ACE_barrelLength = 565;
		ACE_RailHeightAboveBore = 3.6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(11.27*22)";
		};
	};
	class BWA3_MG4: Rifle_Long_Base_F
	{
		ACE_overheating_allowSwapBarrel = 1;
		ACE_overheating_dispersion = 0.85;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 480;
		ACE_RailHeightAboveBore = 4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(8.14*22)";
		};
	};
	class BWA3_MG5: Rifle_Long_Base_F
	{
		ACE_overheating_allowSwapBarrel = 1;
		ACE_overheating_dispersion = 0.85;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 550;
		ACE_RailHeightAboveBore = 3.6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(11.6*22)";
		};
	};
	class BWA3_G82: Rifle_Long_Base_F
	{
		ACE_barrelTwist = 381;
		ACE_barrelLength = 736.7;
		ACE_gunbag_allowGunbag = 1;
		ACE_RailHeightAboveBore = 3.8;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(11.8*22)";
		};
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class BWA3_Pzf3: Launcher_Base_F
	{
		ACE_overpressure_angle = 60;
		ACE_overpressure_range = 3.5;
		ACE_overpressure_damage = 0.8;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(14.3*22)";
		};
	};
	class BWA3_Pzf3_Used: BWA3_Pzf3
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(10*22)";
		};
	};
	class BWA3_RGW90: Launcher_Base_F
	{
		ACE_overpressure_angle = 50;
		ACE_overpressure_range = 2.5;
		ACE_overpressure_damage = 0.75;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(8.7*22)";
		};
	};
	class BWA3_RGW90_Used: BWA3_RGW90
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(4.4*22)";
		};
	};
	class BWA3_Fliegerfaust: Launcher_Base_F
	{
		ACE_overpressure_angle = 80;
		ACE_overpressure_range = 3.5;
		ACE_overpressure_damage = 0.5;
		ACE_reloadlaunchers_enabled = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(15.8*22)";
		};
	};
	class BWA3_CarlGustaf: Launcher_Base_F
	{
		ACE_overpressure_angle = 60;
		ACE_overpressure_range = 8;
		ACE_overpressure_damage = 1;
		ACE_reloadlaunchers_enabled = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = "(14.2*22)";
		};
	};
	class BWA3_CrewmanKSK_Fleck;
	class BWA3_CrewmanKSK_Fleck_Headset: BWA3_CrewmanKSK_Fleck
	{
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.8;
	};
	class ItemCore;
	class BWA3_Knighthelm: ItemCore
	{
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.75;
	};
	class InventoryFlashLightItem_Base_F;
	class BWA3_acc_LLM01_irlaser: ItemCore
	{
		MRT_SwitchItemNextClass = "BWA3_acc_LLM01_flash";
		MRT_SwitchItemPrevClass = "BWA3_acc_LLM01_laser";
		BWA3_nextModeClass = "BWA3_acc_LLM01_laser";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				ACE_Flashlight_Colour = "white";
				ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
				ACE_Flashlight_Size = 2.75;
				ACE_Flashlight_Sound = 1;
			};
		};
	};
	class BWA3_acc_LLM01_flash: BWA3_acc_LLM01_irlaser
	{
		MRT_SwitchItemNextClass = "BWA3_acc_LLM01_laser";
		MRT_SwitchItemPrevClass = "BWA3_acc_LLM01_irlaser";
		BWA3_nextModeClass = "BWA3_acc_LLM01_irlaser";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				ACE_Flashlight_Colour = "white";
				ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
				ACE_Flashlight_Size = 2.75;
				ACE_Flashlight_Sound = 1;
			};
		};
	};
	class BWA3_acc_LLM01_laser: BWA3_acc_LLM01_irlaser
	{
		ACE_laserpointer = 1;
		MRT_SwitchItemNextClass = "BWA3_acc_LLM01_irlaser";
		MRT_SwitchItemPrevClass = "BWA3_acc_LLM01_flash";
		MRT_switchItemHintText = "$STR_BWA3_Laser";
		BWA3_nextModeClass = "BWA3_acc_LLM01_flash";
		scope = 1;
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				ACE_Flashlight_Colour = "white";
				ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
				ACE_Flashlight_Size = 2.75;
				ACE_Flashlight_Sound = 1;
			};
		};
	};
	class BWA3_acc_LLM01_irlaser_underbarrel: BWA3_acc_LLM01_irlaser
	{
		MRT_SwitchItemNextClass = "BWA3_acc_LLM01_flash_underbarrel";
		MRT_SwitchItemPrevClass = "BWA3_acc_LLM01_laser_underbarrel";
		BWA3_nextModeClass = "BWA3_acc_LLM01_flash_underbarrel";
		model = "\bwa3_attachments\bwa3_llm01_underbarrel.p3d";
	};
	class BWA3_acc_LLM01_flash_underbarrel: BWA3_acc_LLM01_flash
	{
		MRT_SwitchItemNextClass = "BWA3_acc_LLM01_laser_underbarrel";
		MRT_SwitchItemPrevClass = "BWA3_acc_LLM01_irlaser_underbarrel";
		BWA3_nextModeClass = "BWA3_acc_LLM01_irlaser_underbarrel";
		model = "\bwa3_attachments\bwa3_llm01_underbarrel.p3d";
	};
	class BWA3_acc_LLM01_laser_underbarrel: BWA3_acc_LLM01_laser
	{
		MRT_SwitchItemNextClass = "BWA3_acc_LLM01_irlaser_underbarrel";
		MRT_SwitchItemPrevClass = "BWA3_acc_LLM01_flash_underbarrel";
		BWA3_nextModeClass = "BWA3_acc_LLM01_irlaser_underbarrel";
		model = "\bwa3_attachments\bwa3_llm01_underbarrel.p3d";
	};
	class BWA3_acc_VarioRay_irlaser: ItemCore
	{
		MRT_SwitchItemNextClass = "BWA3_acc_VarioRay_flash";
		MRT_SwitchItemPrevClass = "BWA3_acc_VarioRay_laser";
		BWA3_nextModeClass = "BWA3_acc_VarioRay_laser";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				ACE_Flashlight_Colour = "white";
				ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
				ACE_Flashlight_Size = 2.75;
				ACE_Flashlight_Sound = 1;
			};
		};
	};
	class BWA3_acc_VarioRay_flash: BWA3_acc_VarioRay_irlaser
	{
		MRT_SwitchItemNextClass = "BWA3_acc_VarioRay_laser";
		MRT_SwitchItemPrevClass = "BWA3_acc_VarioRay_irlaser";
		BWA3_nextModeClass = "BWA3_acc_VarioRay_irlaser";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				ACE_Flashlight_Colour = "white";
				ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
				ACE_Flashlight_Size = 2.75;
				ACE_Flashlight_Sound = 1;
			};
		};
	};
	class BWA3_acc_VarioRay_laser: BWA3_acc_VarioRay_irlaser
	{
		MRT_SwitchItemNextClass = "BWA3_acc_VarioRay_irlaser";
		MRT_SwitchItemPrevClass = "BWA3_acc_VarioRay_flash";
		MRT_switchItemHintText = "$STR_BWA3_Laser";
		ACE_laserpointer = 1;
		BWA3_nextModeClass = "BWA3_acc_VarioRay_flash";
		scope = 1;
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				ACE_Flashlight_Colour = "white";
				ACE_Flashlight_Beam = "\z\ace\addons\map\UI\Flashlight_beam_white_ca.paa";
				ACE_Flashlight_Size = 2.75;
				ACE_Flashlight_Sound = 1;
			};
		};
	};
	class InventoryOpticsItem_Base_F;
	class BWA3_optic_Kolimator_base: ItemCore{};
	class BWA3_optic_RSAS: BWA3_optic_Kolimator_base
	{
		ACE_ScopeHeightAboveRail = 2.6;
	};
	class BWA3_optic_Flipsights: BWA3_optic_Kolimator_base
	{
		ACE_ScopeHeightAboveRail = 1.5;
	};
	class BWA3_optic_G36C_Ironsight_100: BWA3_optic_Kolimator_base
	{
		ACE_ScopeHeightAboveRail = 1.5;
	};
	class BWA3_optic_Aimpoint: BWA3_optic_Kolimator_base
	{
		ACE_ScopeHeightAboveRail = 2.6;
	};
	class BWA3_optic_EOTech: BWA3_optic_Kolimator_base
	{
		ACE_ScopeHeightAboveRail = 4.1;
	};
	class BWA3_optic_ZO4x30: ItemCore
	{
		ACE_ScopeHeightAboveRail = 2.8;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Scope
				{
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class BWA3_optic_Shortdot: ItemCore
	{
		ACE_scopeadjust_vertical[] = {-0.1,10.1};
		ACE_scopeadjust_verticalIncrement = 0.1;
		ACE_scopeadjust_horizontal[] = {-5.1,5.1};
		ACE_scopeadjust_horizontalIncrement = 0.1;
		ACE_ScopeHeightAboveRail = 4;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Scope
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class BWA3_optic_20x50: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4;
		ACE_scopeadjust_vertical[] = {0,26};
		ACE_scopeadjust_verticalIncrement = 0.1;
		ACE_scopeadjust_horizontal[] = {-6,6};
		ACE_scopeadjust_horizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Scope
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class BWA3_optic_24x72: ItemCore
	{
		ACE_scopeadjust_vertical[] = {0,16};
		ACE_scopeadjust_verticalIncrement = 0.1;
		ACE_scopeadjust_horizontal[] = {-7,7};
		ACE_scopeadjust_horizontalIncrement = 0.1;
		ACE_ScopeHeightAboveRail = 4.8;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Scope
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class Uniform_Base;
	class BWA3_Uniform_Helipilot: Uniform_Base
	{
		ACE_GForceCoef = 0.8;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class BWA3_200Rnd_556x45: CA_Magazine
	{
		ACE_isBelt = 1;
	};
	class BWA3_120Rnd_762x51: CA_Magazine
	{
		ACE_isBelt = 1;
	};
	class BWA3_DM31AT_Mag: CA_Magazine
	{
		ACE_explosives_Placeable = 1;
		useAction = 0;
		ACE_explosives_SetupObject = "BWA3_DM31AT";
		ACE_explosives_DelayTime = 2.5;
		class ACE_Triggers
		{
			SupportedTriggers[] = {"PressurePlate"};
			class PressurePlate
			{
				displayName = "$STR_BWA3_Comp_Ace_SLAME_Magnetic";
				digDistance = -0.02;
				ammo = "BWA3_DM31AT_Range_Ammo";
			};
		};
	};
};
class CfgAmmo
{
	class B_556x45_Ball_Tracer_Red;
	class BWA3_B_556x45_Ball: B_556x45_Ball_Tracer_Red
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.0176;
		ACE_ammoTempMuzzleVelocityShifts[] = {-27.2,-26.44,-23.76,-21,-17.54,-13.1,-7.95,-1.62,6.24,15.48,27.75};
		ACE_ballisticCoefficients[] = {0.151};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {723,764,796,825,843,866,878,892,906,915,922,900};
		ACE_barrelLengths[] = {210.82,238.76,269.24,299.72,330.2,360.68,391.16,419.1,449.58,480.06,508,609.6};
	};
	class BWA3_B_556x45_Ball_SD: BWA3_B_556x45_Ball
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.0176;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.151};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {300,320,340};
		ACE_barrelLengths[] = {254,508,609.6};
	};
	class BWA3_B_556x45_Ball_AP: BWA3_B_556x45_Ball
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.5359235;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.31};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {820,865,880};
		ACE_barrelLengths[] = {254,393.7,508};
	};
	class B_762x51_Tracer_Red;
	class BWA3_B_762x51_Ball: B_762x51_Tracer_Red
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {700,800,820,833,845};
		ACE_barrelLengths[] = {254,406.4,508,609.6,660.4};
	};
	class BWA3_B_762x51_Ball_SD: BWA3_B_762x51_Ball
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 34.036;
		ACE_bulletMass = 12.96;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.235};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {305,325,335,340};
		ACE_barrelLengths[] = {406.4,508,609.6,660.4};
	};
	class BWA3_B_762x51_Ball_AP: BWA3_B_762x51_Ball
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 8.229462;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.359};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {875,910,930};
		ACE_barrelLengths[] = {330.2,406.4,508};
	};
	class BWA3_B_762x51_Ball_LR: BWA3_B_762x51_Ball
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 11.34;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.243};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {750,780,790,794};
		ACE_barrelLengths[] = {406.4,508,609.6,660.4};
	};
	class B_127x99_Ball_Tracer_Red;
	class BWA3_B_127x99_Ball: B_127x99_Ball_Tracer_Red
	{
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {900};
		ACE_barrelLengths[] = {736.6};
	};
	class BWA3_B_127x99_Ball_SD: BWA3_B_127x99_Ball
	{
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {330};
		ACE_barrelLengths[] = {736.6};
	};
	class BWA3_B_127x99_Ball_AP: BWA3_B_127x99_Ball
	{
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9904;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {900};
		ACE_barrelLengths[] = {736.6};
	};
	class BWA3_B_127x99_Ball_Raufoss: BWA3_B_127x99_Ball
	{
		ACE_frag_enabled = 1;
		ACE_frag_force = 1;
		ace_frag_metal = 180;
		ace_frag_charge = 180;
		ace_frag_gurney_c = 2930;
		ace_frag_gurney_k = "1/2";
		ACE_frag_classes[] = {"ACE_Frag_tiny_HD"};
	};
	class BulletBase;
	class BWA3_B_46x30_Ball: BulletBase
	{
		ACE_caliber = 4.902;
		ACE_bulletLength = 13.005;
		ACE_bulletMass = 2.0088;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.1455};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {680,720,730,740};
		ACE_barrelLengths[] = {101.6,177.8,228.6,304.8};
	};
	class BWA3_B_46x30_Ball_SD: BWA3_B_46x30_Ball
	{
		ACE_ballisticCoefficients[] = {};
		ACE_velocityBoundaries[] = {};
		ACE_muzzleVelocities[] = {};
		ACE_barrelLengths[] = {};
	};
	class MineBase;
	class BWA3_DM31AT_Range_Ammo: MineBase
	{
		mineTrigger = "ACE_MagneticTrigger";
		ACE_explosives_explodeOnDefuseChance = 0.06;
	};
	class GrenadeHand;
	class BWA3_G_DM51A1: GrenadeHand
	{
		ace_frag_metal = 296;
		ace_frag_charge = 180;
		ace_frag_gurney_c = 2930;
		ace_frag_gurney_k = "1/2";
	};
	class RocketBase;
	class BWA3_R_RGW90_HH: RocketBase
	{
		ACE_frag_enabled = 1;
		ACE_frag_force = 1;
		ACE_frag_metal = 400;
		ACE_frag_charge = 210;
		ACE_frag_gurney_c = 2800;
		ACE_frag_gurney_k = "3/5";
		ACE_frag_classes[] = {"ACE_frag_medium_HD"};
	};
	class BWA3_R_Pzf3_IT: RocketBase
	{
		ACE_frag_skip = 1;
	};
	class BWA3_R_CarlGustaf_HEAT: RocketBase
	{
		ACE_frag_skip = 1;
	};
	class BWA3_R_CarlGustaf_HE: BWA3_R_CarlGustaf_HEAT
	{
		ACE_frag_skip = 0;
		ACE_frag_enabled = 1;
		ACE_frag_force = 1;
		ACE_frag_metal = 400;
		ACE_frag_charge = 210;
		ACE_frag_gurney_c = 2800;
		ACE_frag_gurney_k = "3/5";
		ACE_frag_classes[] = {"ACE_frag_medium_HD"};
	};
	class B_30mm_MP_Tracer_Red;
	class BWA3_B_30mm_HE: B_30mm_MP_Tracer_Red
	{
		ACE_frag_enabled = 1;
		ACE_frag_force = 1;
		ACE_frag_classes[] = {"ACE_Frag_tiny_HD"};
		ACE_frag_metal = 120;
		ACE_frag_charge = 32;
		ACE_frag_gurney_c = 2700;
		ACE_frag_gurney_k = "1/2";
	};
};
class CfgGlasses
{
	class None;
	class BWA3_G_Combat_Orange: None
	{
		ACE_color[] = {1,0.5,0};
		ACE_tintAmount = 8;
		ACE_resistance = 1;
	};
	class BWA3_G_Combat_Black: None
	{
		ACE_color[] = {0,0,0};
		ACE_tintAmount = 16;
		ACE_resistance = 1;
	};
	class BWA3_G_Combat_Clear: None
	{
		ACE_color[] = {0,0,-1};
		ACE_tintAmount = 8;
		ACE_resistance = 1;
	};
};
class CfgRecoils
{
	class recoil_default;
	class BWA3_recoil_P8: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1.0*1","0.2*1","0.3*1"};
		kickBack[] = {"0.03*1.4","0.06*1.4"};
		temporary = "0.03*1.2";
	};
	class BWA3_recoil_MP7: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1.0*1","0.3*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.015*1.2";
	};
	class BWA3_recoil_G36: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","0.6*1","0.2*1","0.3*1"};
		kickBack[] = {"0.01*1.4","0.03*1.4"};
		temporary = "0.01*1.2";
	};
	class BWA3_recoil_G36K: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","0.8*1","0.3*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.015*1.2";
	};
	class BWA3_recoil_G36_LMG: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","0.6*1","0.3*1","0.2*1"};
		kickBack[] = {"0.01*1.4","0.03*1.4"};
		temporary = "0.005*1.2";
	};
	class BWA3_recoil_G38: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","0.6*1","0.2*1","0.3*1"};
		kickBack[] = {"0.01*1.4","0.03*1.4"};
		temporary = "0.01*1.2";
	};
	class BWA3_recoil_G38K: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","0.8*1","0.3*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.015*1.2";
	};
	class BWA3_recoil_G38C: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1.0*1","0.3*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.015*1.2";
	};
	class BWA3_recoil_G28: recoil_default
	{
		muzzleOuter[] = {"0.4*0.2","1.4*1","0.6*1","0.4*1"};
		kickBack[] = {"0.03*1.4","0.07*1.4"};
		temporary = "0.01*1.2";
	};
	class BWA3_recoil_G27: recoil_default
	{
		muzzleOuter[] = {"0.4*0.2","1.6*1","0.6*1","0.4*1"};
		kickBack[] = {"0.04*1.4","0.08*1.4"};
		temporary = "0.015*1.2";
	};
	class BWA3_recoil_MG4: recoil_default
	{
		muzzleOuter[] = {"0.4*0.2","0.6*1","0.6*1","0.2*1"};
		kickBack[] = {"0.03*1.4","0.06*1.4"};
		temporary = "0.005*1.2";
	};
	class BWA3_recoil_MG5: recoil_default{};
	class BWA3_recoil_G82: recoil_default
	{
		muzzleOuter[] = {"1.4*0.2","3.5*1","0.7*1","0.8*1"};
		kickBack[] = {"0.1*1.4","0.12*1.4"};
		temporary = "0.025*1.2";
	};
};
class cfgMods
{
	author = "marc_book";
	timepacked = "1512685244";
};
