#pragma once
#include <iostream>

class Motocicleta {
    protected:
        std::string firma;
        std::string model;
        int an;
       

    public:
        Motocicleta(std::string f, std::string m, int a);
        ~Motocicleta();
        void setFirma(std::string f);
        void setModel(std::string m);
        void setAn(int a);
        std::string getFirma();
        std::string getModel();
        int getAn();
         Motocicleta(const Motocicleta&);
        Motocicleta& operator= (const Motocicleta& moto);
};

    Motocicleta::Motocicleta(std::string f, std::string m, int a) : 
        firma(f),
        model(m),
        an(a) 
    {
        std::cout << "Motocicleta constructor called" << std::endl;
    }
       
    Motocicleta::Motocicleta(const Motocicleta& motocicleta) {
        std::cout << "Motocicleta copy constructor called" << std::endl;
        *this = motocicleta;
    }

    Motocicleta::~Motocicleta() {
        std::cout << "Motocicleta deconstructor called" << std::endl;
    }
    
    Motocicleta& Motocicleta::operator= (const Motocicleta& moto) {
        std::cout << "Motocicleta assignment operator called" << std::endl;
        if(this == &moto) {
            std::cout << "self-assignment" << std::endl;
        } else {
            firma = moto.firma;
            model = moto.model;
            an = moto.an;
        }
        return *this;
        }
    
    void Motocicleta::setFirma(std::string f) {
        firma = f;
    }

    void Motocicleta::setModel(std::string m) {
        model = m;
    }

    void Motocicleta::setAn(int a) {
        an = a;
    }

    std::string Motocicleta::getFirma() { return firma; }

    std::string Motocicleta::getModel() { return model; }

    int Motocicleta::getAn() { return an; }