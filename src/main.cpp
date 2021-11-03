#include <iostream>
#include "adventure.hpp"
#include "chopper.hpp"

int main() {
    std::string f, m, f1, m1;
    int a, a1, gs, hs, vr, hg, c;
    Adventure* adventure;
    Chopper* chopper;
    bool ok = false;
    /*
    std::string firmaAdv = "bmw";
    std::string modelAdv = "gs";  
    std::string firmaChop = "hd";
    std::string modelChop = "bob"; 
    Adventure* adventureTest = new Adventure(firmaAdv,modelAdv,1990,10,20);
    Chopper* chopperTest = new Chopper(firmaChop, modelChop, 1970, 12, 110);
    Adventure* copyAdventure(adventureTest);
    Chopper* copyChopper(chopperTest);
    copyChopper->print();
    */
    while (1)
    {
        std::cout << "\nAlege motocicleta " << std::endl;
        std::cout << "1-Adventure 2-Chopper 3-Print Adventure" << std::endl;
        std::cout << "4-Print Chopper 5-Exit" << std::endl;
        std::cin >> c;
        switch (c)
        {
        case 1:
            std::cout << "\nFIRMA ";
            std::cin >> f;
            std::cout << "\nMODEL ";
            std::cin >> m;
            std::cout << "\nAN ";
            std::cin >> a;
            std::cout << "\nGARDA SOL ";
            std::cin >> gs;
            std::cout << "\nINALTIME SA ";
            std::cin >> hs;
            adventure = new Adventure(f, m ,a, gs, hs);
            break;
        case 2: 
            std::cout << "\nFIRMA ";
            std::cin >> f;
            std::cout << "\nMODEL ";
            std::cin >> m;
            std::cout << "\nAN ";
            std::cin >> a;
            std::cout << "\nVOLUM REZERVOR ";
            std::cin >> vr;
            std::cout << "\nINALTIME GHIDON ";
            std::cin >> hg;
            chopper = new Chopper(f, m, a, vr, hg);
            break;
        case 3:
            adventure->print();
            delete adventure;
            break;
        case 4:
            chopper->print();
            delete chopper;
            break;
        case 5:
            ok = true;
        }
        if (ok) {
            break;
        }
    }
   return 0;
}