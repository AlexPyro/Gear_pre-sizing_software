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
    if(sens){
        _sens = 1;
    }
    else{
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
    _suivant = new Arbre(*suivant);
}

void Arbre::setMenante(Roue* roue)
{
    _menante = new Roue(*roue);
}

void Arbre::setMenee(Roue* roue)
{
    _menante = new Roue(*roue);
}