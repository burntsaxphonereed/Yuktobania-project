class CfgPatches {
	class Yuktobania_armed_forces {
        name = "Yuktobania_Armed_Forces";
        units[] = {
            "Patrol_officer",
            "Patrol_officer_Rifle",
			"Patrol_officer_shotgun",
			"Patrol_officer_SMG"
			
		
            // Add more unit class names as needed
        };
        weapons[] = {
            "CUP_hgun_Glock17_flashlight",
	        "CUP_arifle_OTS14_GROZA_BASE",
			"CUP_smg_vityaz",
            "CUP_sgun_Saiga12K"
        };
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Weapons_F",
            "CUP_Weapons_LoadOrder",
	        "CUP_Creatures_People_LoadOrder",
	        "CUP_Vehicles_LoadOrder"
        };
    };
};

class CfgFactionClasses {
    class Union of Yuktobania {
        displayName = "Yuktobania_Police_Force";
        priority = 1;
        side = 2; // 0 = BLUFOR, 1 = OPFOR, 2 = Independent, 3 = Civilian
    };
};

class CfgVehicles {
    class B_Soldier_F;
    class Patrol_officer : B_Soldier_F {
		_generalMarco = "Patrol_officer";
		scope = 2; 
		Icon = "iconManRifle";
		nakedUniform = "U_BasicBody"; 
		uniformClass = "CUP_U_O_RUS_Flora_1"
        side = 2; // 0 = BLUFOR, 1 = OPFOR, 2 = Independent, 3 = Civilian
        faction = "Union_of_Yuktobania";
        displayName = "Patrol_officer";
		linkedItems[] = {"CUP_V_CDF_6B3_1_Green","CUP_H_CDF_OfficerCap_FST","itemMap","ItemCompass","ItemWatch"};
		RespawnLinkedItems[] = {"CUP_V_CDF_6B3_1_Green","CUP_H_CDF_OfficerCap_FST","itemMap","ItemCompass","ItemWatch"};
		Weapons[] = {"CUP_hgun_Glock17_flashlight","Binocular"};
		respawnweapons[] = {"CUP_hgun_Glock17_flashlight","Binocular"};
		magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		Respawnmagazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
        // Add other unit-specific configurations
    };
    class Patrol_officer : B_Soldier_F {
		_generalMarco = "Patrol_officer_rifle";
		scope = 2; 
		Icon = "iconManRifle";
		nakedUniform = "U_BasicBody"; 
		uniformClass = "CUP_U_O_RUS_Flora_1";
        side = 2; // 0 = BLUFOR, 1 = OPFOR, 2 = Independent, 3 = Civilian
        faction = "Union_of_Yuktobania";
        displayName = "Patrol officer Rifle";
		linkedItems[] = {"CUP_V_CDF_6B3_1_Green","CUP_H_CDF_OfficerCap_FST","itemMap","ItemCompass","ItemWatch"};
		RespawnLinkedItems[] = {"CUP_V_CDF_6B3_1_Green","CUP_H_CDF_OfficerCap_FST","itemMap","ItemCompass","ItemWatch"};
		Weapons[] = {"CUP_arifle_OTS14_GROZA_Base","CUP_hgun_Glock17_flashlight","Binocular"};
		respawnweapons[] = {"CUP_arifle_OTS14_GROZA_BASE","CUP_hgun_Glock17_flashlight","Binocular"};
		magazines[] = {"CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		Respawnmagazines[] = {"CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_20Rnd_9x39_SP5_VSS_M","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
    };
};

class CfgWeapons {
    class CUP_hgun_Glock17_flashlight;
    class Yuktobania_stardard_pistol : CUP_Hgun_glock17_flashlight{
        scope = 2;
        displayName = "GL17";

    // Add more weapons as needed
    };
};
