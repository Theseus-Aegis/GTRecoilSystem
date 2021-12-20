class CfgWeapons {
    class CUP_arifle_M4A1_BUIS_Base;
    class CUP_arifle_mk18_black: CUP_arifle_M4A1_BUIS_Base {
        recoil = QCLASS(Test);
    };
    class CUP_arifle_mk18_m203_black: CUP_arifle_mk18_black {
        recoil = "Recoil_CUP_M4A3"; // ToDo: Slightly lower recoil because of GL front weight.
    };
};
