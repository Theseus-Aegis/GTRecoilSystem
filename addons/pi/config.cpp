#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgtrs_main",
            "tacgtrs_recoils",
            "bnae_falkor",
            "bnae_RK95"
        };
        author = ECSTRING(main,Authors);
        authors[] = {"Tyrone"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
