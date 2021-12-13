#include <iostream>
#include <thread>
#include <mutex>
#include <memory>
#include "adventure.hpp"
#include "chopper.hpp"

    std::string firmaAdv = "BMW";
    std::string firmaChop = "Indian";
    std::string modelAdv = "GS";
    std::string modelChop = "Scout";

    std::mutex mtx1;
    std::mutex mtx2;

void functie() {
    std::unique_ptr<Adventure> adv = std::make_unique<Adventure>(firmaAdv, modelAdv, 1999, 40, 50);
    adv->print();
    std::unique_ptr<Chopper> chop = std::make_unique<Chopper>(firmaChop, modelChop, 1970, 15, 30);
    chop->print();
}

void functie1() {
    std::unique_ptr<Adventure> adv = std::make_unique<Adventure>(firmaAdv, modelAdv, 1999, 40, 50);
    mtx1.lock();
    std::cout << "Lcoking for print in functie1" << std::endl;
    adv->print();
    mtx1.unlock();
}

void functie2() {
    std::unique_ptr<Chopper> chop = std::make_unique<Chopper>(firmaChop, modelChop, 1970, 15, 30);
    mtx1.lock();
    std::cout << "Lcoking for print in functie2" << std::endl;
    chop->print();
    mtx1.unlock();
}

int main() {
    //std::string f, m, f1, m1;
    //int a, a1, gs, hs, vr, hg, c;
    //bool ok = false;
    
    //Adventure adv1(firmaAdv, modelAdv, 2021, 40, 80);
    //Chopper chop1(firmaChop, modelChop, 1970, 20, 40);

    // Item 10
    //Adventure adv2("Suzuki","VStrom",2011,30,60);
    //adv2 = adv1;
    //adv2.print();

    // Item 11
    //adv1 = adv1;

    // Item 13
    functie();

    // Item 14
    // gcc -pthread -o main main.cpp
    //std::thread first(functie1);
    //std::thread second(functie2);
    //first.join();
    //second.join();

    return 0;
}