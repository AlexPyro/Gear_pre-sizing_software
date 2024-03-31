#include <cstdlib>
#include <iostream>
using namespace std;

#include "../include/Arbre.hpp"

Arbre::Arbre(Roue* menee, Roue* menante, double N, int sens)
{   
    _suivant = nullptr;
    _menee = menee;
    _menante = menante;
    _N = N;
    _sens = sens;
}

Arbre::Arbre()
{   
    _suivant = nullptr;
    _menee = nullptr;
    _menante = nullptr;
    _N = 0;
    _sens = 1;
}

Arbre::~Arbre()
{
}

double Arbre::getN()
{
    return _N;
}

void Arbre::setN(double N)
{
    _N = N;
}

int Arbre::getSens()
{
    return _sens;
}

void Arbre::setSens(int sens)
{
    if(sens)
    {
        _sens = 1;
    }

    else
    {
        _sens = 0;
    }
}

Roue* Arbre::getMenante()
{
    return _menante;
}

Roue* Arbre::getMenee()
{
    return _menee;
}

/* /!\ peut être pas util */
Arbre* Arbre::getSuivant()
{
    return _suivant;
}
/*   */

void Arbre::setSuivant(Arbre* suivant)
{
    _suivant = suivant;
}

void Arbre::setMenante(Roue* roue)
{
    _menante = roue;
}

void Arbre::setMenee(Roue* roue)
{
    _menee = roue;
}

Arbre& Arbre::operator=(const Arbre& autre) 
{
        if (this != &autre) { // Vérifier l'auto-affectation
            // Effectuer une copie en profondeur des membres dynamiques
            *_menante = *autre._menante;
            *_menee = *autre._menee;
            _N = autre._N;
            _sens = autre._sens;
            // Pas besoin de copier _suivant car il n'est pas dynamique
        }
        return *this;
    }