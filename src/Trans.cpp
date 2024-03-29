#include <iostream>

#include "../include/Trans.hpp"

Trans::Trans()
{
    _arbres = nullptr;
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
<<<<<<< HEAD
    if (_Nb == 0)
    {
=======
    Arbre* arbre__ = new Arbre;
    *arbre__ = *next;
    if (_Nb == 0){
>>>>>>> f4acd3734b157a1edce083659fa6e01e0f3feef0
        _arbres = next;
        _Nb++;
    }

    else
    {
        Arbre* p = _arbres;
        Arbre* p_ = nullptr;

        for (int i = 0; i < _Nb; i++)
        {
            p_ = p->getSuivant();
            p = p_;
        }

<<<<<<< HEAD
        p->setSuivant(next);
        _Nb++;
=======
    p->setSuivant(arbre__);
    _Nb++;
>>>>>>> f4acd3734b157a1edce083659fa6e01e0f3feef0
    }
}
    
void Trans::retraitArbre(int n)
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