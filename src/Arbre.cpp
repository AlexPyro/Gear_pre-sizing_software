using namespace std;

#include <cstdlib>
#include <iostream>

#include "../include/Arbre.hpp"
#include "../include/Roue.hpp"

Arbre::Arbre(Roue* menee, Roue* menante, double N, int sens){
    _menee = menee;
    _menante = menante;
    _N = N;
    _sens = sens;
}

Arbre::~Arbre(){
    //free(_menee);
    //free(_menante);
    _N = 0.;
    _sens = 0;
}

double Arbre::getN(){
    return _N;
}

void Arbre::setN(double N){
    _N = N;
}

int Arbre::getSens(){
    return _sens;
}

void Arbre::setSens(int sens){
    if(sens){
        _sens = 1;
    }
    else{
        _sens =0;
    }
}

Roue* Arbre::getMenante(){
    return _menante;
}

Roue* Arbre::getMenee(){
    return _menee;
}
