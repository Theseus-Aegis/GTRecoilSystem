#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Enoch_Loadorder",
            "A3_Data_F_Mod_Loadorder",
            "tacgtrs_main",
            "tacgtrs_recoils",
            "cba_main",
            "CUP_weapons_ACR",
            "CUP_Weapons_AK",
            "CUP_Weapons_AK12",
            "CUP_Weapons_CZ805",
            "CUP_Weapons_Famas",
            "CUP_Weapons_FNFAL",
            "CUP_Weapons_G3",
            "CUP_Weapons_G36",
            "CUP_Weapons_Galil",
            "CUP_Weapons_GROZA",
            "CUP_Weapons_HK416",
            "CUP_Weapons_L129",
            "CUP_Weapons_L85",
            "CUP_Weapons_M1014",
            "CUP_Weapons_M110",
            "CUP_Weapons_M14",
            "CUP_Weapons_M16",
            "CUP_Weapons_Saiga12K",
            "CUP_Weapons_SCAR",
            "CUP_Weapons_SVD",
            "CUP_Weapons_X95"
        };
        author = ECSTRING(main,Authors);
        authors[] = {"Tyrone"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
