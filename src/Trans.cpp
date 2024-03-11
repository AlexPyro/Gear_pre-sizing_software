#include <iostream>

#include "../include/Trans.hpp"

Trans::Trans()
{
    
}

Trans::~Trans()
{
    Arbre* p = _arbres;
    Arbre* p_ = nullptr;
    for (int i = 0; i < _Nb; i++){
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
    return _Nb;
}
    
void Trans::ajoutArbre(Arbre* next)
{
    Arbre* p = _arbres;
    Arbre* p_ = nullptr;
    for (int i = 0; i < _Nb; i++){
        p_ = p->getSuivant();
        p = p_;
    }
    p->setSuivant(next);
    _Nb++;
}
    
void Trans::retraitArbre()
{
    _Nb--;
    Arbre* p = _arbres;
    Arbre* p_ = nullptr;
    for (int i = 0; i < _Nb; i++){
        p_ = p->getSuivant();
        p = p_;
    }
    p->setSuivant(nullptr);

}