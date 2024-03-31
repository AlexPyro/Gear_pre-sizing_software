#include <iostream>

#include "../include/Trans.hpp"

Trans::Trans() : _arbres(nullptr)
{
    _Nb = 0;
    _sens = 0;
    _Ne = 0;
    _Ns = 0;
}

Trans::~Trans()
{
    /*Arbre* p = _arbres;
    Arbre* p_ = nullptr;
    for (int i = 0; i < _Nb; i++){
        p_ = p->getSuivant();
        //delete(p);
        p = p_;
    }*/

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
    if (_arbres == nullptr) 
    {
            _arbres = next;
    } 
    
    else 
    {
        Arbre* dernierArbre = _arbres;

        while (dernierArbre->getSuivant() != nullptr) 
            {
                dernierArbre = dernierArbre->getSuivant();
            }

        dernierArbre->setSuivant(next);
    }

   _sens *= -1;
    
    _Nb++;
}
    
void Trans::retraitArbre(int n)
{
     _Nb--;
    Arbre* p = _arbres;
    Arbre* p_ = nullptr;
    for (int i = 0; i < _Nb; i++)
    {
        p_ = p->getSuivant();
        p = p_;
    }
    p->setSuivant(nullptr); 

    _Nb--;

}