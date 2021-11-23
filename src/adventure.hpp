#pragma once
#include<iostream>
#include "motocicleta.hpp"

class Adventure: public Motocicleta {
   private:
        int gardaSol;
        int inaltimeSa;
   
   public:
        Adventure(std::string f, std::string m, int a, int gs, int hs);
        ~Adventure();
        void setGardaSol(int gs);
        void setInaltimeSa(int hs);
        int getGardaSol();
        int getInaltimeSa();
        void print();
        Adventure(const Adventure &adv);
        Adventure& operator= (Adventure const &adv);
};

    Adventure::Adventure(std::string f, std::string m, int a, int gs, int hs) : 
        Motocicleta(f, m, a),
        gardaSol(gs),
        inaltimeSa(hs)
    {
        std::cout << "Adventure constructor called" << std::endl;
    }
    
    Adventure::Adventure(const Adventure &adv) : Motocicleta(adv.firma, adv.model, adv.an) {
        gardaSol = adv.gardaSol;
        inaltimeSa = adv.inaltimeSa;
        std::cout << "Adventure copy constructor called" << std::endl;
    }

    Adventure::~Adventure() {
        std::cout << "Adventure deconstructor" << std::endl;
    }
   
    Adventure& Adventure::operator= (Adventure const &adv) {
        std::cout << "Adventure assignment operator called" << std::endl;
        if(this == &adv) {
            std::cout << "self-assignment" << std::endl;
        } else {
            gardaSol = adv.gardaSol;
            inaltimeSa = adv.inaltimeSa;
        }
        return *this;
    }
     
    void Adventure::setGardaSol(int gs) {
        gardaSol = gs;
    }

    void Adventure::setInaltimeSa(int hs) {
        inaltimeSa = hs;
    }

    int Adventure::getGardaSol() { return gardaSol; }

    int Adventure::getInaltimeSa() { return inaltimeSa; }

    void Adventure::print() {
        std::cout << "\nFirma " << firma << std::endl;
        std::cout << "Model " << model << std::endl;
        std::cout << "An " << an << std::endl;
        std::cout << "Garda Sol " << gardaSol << std::endl;
        std::cout << "Inaltime Sa " << inaltimeSa << std::endl;
    } 