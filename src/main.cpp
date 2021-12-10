#include <iostream>
#include "adventure.hpp"
#include "chopper.hpp"

int main() {
    std::string f, m, f1, m1;
    int a, a1, gs, hs, vr, hg, c;
    bool ok = false;
    
    std::string firmaAdv = "BMW";
    std::string firmaChop = "Indian";
    std::string modelAdv = "GS";
    std::string modelChop = "Scout";

    Adventure adv1(firmaAdv, modelAdv, 2021, 40, 80);
    Chopper chop1(firmaChop, modelChop, 1970, 20, 40);

    // Item 10
    //Adventure adv2("Suzuki","VStrom",2011,30,60);
    //adv2 = adv1;
    //adv2.print();

    // Item 11
    //adv1 = adv1;

    return 0;
}