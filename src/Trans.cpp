#include <iostream>

#include "../include/Trans.hpp"

Trans::Trans()
{
    
}

Trans::~Trans()
{
    Arbre* p = _arbres;
    Arbre* p_ = nullptr;
    for (int i = 0; i < _nombre_arbres; i++){
        p_ = p->getSuivant();
        delete(p);
        p = p_;
    }

}

Arbre* Trans::getArbres()
{
    return _arbres;
}
   
int Trans::getNbArbres()
{
    return _nombre_arbres;
}
    
void Trans::ajoutArbre(Arbre* next)
{
    Arbre* p = _arbres;
    Arbre* p_ = nullptr;
    for (int i = 0; i < _nombre_arbres; i++){
        p_ = p->getSuivant();
        p = p_;
    }
    p->setSuivant(next);
    _nombre_arbres++;
}
    
void Trans::retraitArbre()
{
    _nombre_arbres--;
    Arbre* p = _arbres;
    Arbre* p_ = nullptr;
    for (int i = 0; i < _nombre_arbres; i++){
        p_ = p->getSuivant();
        p = p_;
    }
    p->setSuivant(nullptr);

}