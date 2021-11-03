#pragma once
#include<iostream>
#include "motocicleta.hpp"

class Chopper: public Motocicleta {
    private:
        int volumRezervor;
        int inaltimeGhidon;
        Chopper(const Chopper &chop);
        Chopper& operator = (const Chopper& chop);

    public:
        Chopper(std::string f, std::string m, int a, int vr, int hg);
        virtual ~Chopper();
        void setVolumRezervor(int vr);
        void setInaltimeGhidon(int hg);
        int getVolumRezervor();
        int getInaltimeGhidon();
        void print();
};

    Chopper::Chopper(std::string f, std::string m, int a, int vr, int hg) : 
        Motocicleta(f, m, a), 
        volumRezervor(vr),
        inaltimeGhidon(hg)
    {
        std::cout << "Chopper constructor called" << std::endl;
    }

    Chopper::~Chopper() {
        std::cout << "Chopper deconstructor called" << std::endl;
    } 
    /*
    Chopper::Chopper(const Chopper &chop) : Motocicleta(chop.firma, chop.model, chop.an){
        volumRezervor = chop.volumRezervor;
        inaltimeGhidon = chop.inaltimeGhidon;
        std::cout << "Chopper copy constructor called" << std::endl;
    }

    Chopper& Chopper::operator = (const Chopper& chop){
        std::cout << "Chopper assignment operator called" << std::endl;
        volumRezervor = chop.volumRezervor;
        inaltimeGhidon = chop.inaltimeGhidon;
        return *this;
    }
    */
    void Chopper::setVolumRezervor(int vr) {
        volumRezervor = vr;
    }

    void Chopper::setInaltimeGhidon(int hg) {
        inaltimeGhidon = hg;
    }

    int Chopper::getVolumRezervor() { return volumRezervor; }

    int Chopper::getInaltimeGhidon() { return inaltimeGhidon; }

    void Chopper::print() {
        std::cout << "\nFirma " << firma << std::endl;
        std::cout << "Model " << model << std::endl;
        std::cout << "An " << an << std::endl;
        std::cout << "Volum Rezervor " << volumRezervor << std::endl;
        std::cout << "Inaltime Ghidon " << inaltimeGhidon << std::endl;
    }