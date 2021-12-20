class CfgRecoils {
    /*
        - Parameter muzzleOuter defines the possible area where the recoil would like to move the weapon's muzzle randomly at each shot. It is defined as ellipse with variables defining the
        (x = horizontal axis position, y = vertical axis position, a = horizontal magnitude, b = vertical magnitude); or, translated to the weapon's recoil movement behavior
        (how far to the right, how high up, how much horizontal deviation, how much vertical deviation).

        - Parameter kickBack defines the minimum and maximum of random interval for backward force applied over the arms and torso for each fired shot.
        Remaining parameters define how much of the random muzzle displacement within the defined ellipse space is permanent (causing muzzle rise you should compensate for) and how much is temporary
        (causing temporal weapon rise up and down, thus causing the weapon to shake in your hands).
    */

    #include "recoils\556.hpp"

};
