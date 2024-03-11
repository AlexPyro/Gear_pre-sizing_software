#include "../include/Trans.hpp"

Trans::Trans()
{

}

Trans::~Trans()
{
    for (int i = 0; i < _nombre_arbres; i++)
    {
        delete()
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
    
void Trans::ajoutArbre(Arbre* arbre)
{
    (arbre + _nombre_arbres)->_suivant = arbre;
    _nombre_arbres++;
}
    
void Trans::retraitArbre(int numero_arbre)
{

}