#include <iostream>

#include "../include/Trans.hpp"

Trans::Trans()
{
    //_arbres = nullptr;
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

Arbre* Trans::getArbres(int n)
{
    return listeArbre[n];
}
   
int Trans::getNbArbres()
{
    return _Nb;
}
    
void Trans::ajoutArbre(Arbre* next)
{ 
   /*  std::cout << " in : Nb = " << _Nb;

    Arbre* arbre__ = new Arbre(*next);

    if (_Nb == 0) 
    {
        _arbres = arbre__; 
        _sens = 1;
    } 

    else
    {
        Arbre* p = _arbres;

        while (p->getSuivant() != nullptr) 
        {   
            std::cout << "1";
            p = p->getSuivant();
        }
        std::cout << "2";
        p->setSuivant(arbre__); 
        std::cout << "3";
    } */

    listeArbre.push_back(next);

    if (_sens > 0)
    {
        _sens = -1;
    }

    if (_sens < 0)
    {
        _sens = 1;
    }

    _Nb++;
}
    
void Trans::retraitArbre(int n)
{
    /* _Nb--;
    Arbre* p = _arbres;
    Arbre* p_ = nullptr;
    for (int i = 0; i < _Nb; i++)
    {
        p_ = p->getSuivant();
        p = p_;
    }
    p->setSuivant(nullptr); */

    listeArbre.pop_back();
    _Nb--;

}