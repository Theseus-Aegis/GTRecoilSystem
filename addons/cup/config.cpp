#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Data_F_Enoch_Loadorder", "A3_Data_F_Mod_Loadorder", "tacgtrs_main", "tacgtrs_recoils", "cba_main", "cup_weapons_m16"};
        author = CSTRING(Authors);
        authors[] = {"Tyrone"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
