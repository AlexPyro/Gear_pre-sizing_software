#include <iostream>
using namespace std;
#include "../include/prototypes.hpp"
#include <cmath>

// nombre d'arbre fixé
// vitesse entrée fixée
// vitesse sortie fixée

int trans_puissance(Trans& trans, int nombre_arbres, double vitesse_entree, double vitesse_sortie, int sens)
{   

    if (vitesse_entree < 0 || vitesse_entree > 10000)
    {
        cout << "Valeur de vitesse d'entree hors intervalle, doit être compris entre 0 et 10000";
        return 0;
    }

      if (vitesse_sortie < 0 || vitesse_sortie > 10000)
    {
        cout << "Valeur de vitesse de sortie hors intervalle, doit être compris entre 0 et 10000";
        return 0;
    }
    
    if (sens != -1 && sens != 1)
    {
        return 0;
    }

    if (!(nombre_arbres % 2) && sens)
    {
        return 0;
    }

    if (nombre_arbres % 2 && sens == -1)
    {
        return 0;
    }

    float target_ratio = pow(target_ratio, 1.0/nombre_arbres); 
    float current_ratio = 1.0;

    Arbre* p_ = trans.getArbres();
    Arbre* _p = nullptr;

    for (int i = 0 ; i < nombre_arbres - 1 ; i++)
    {   
        _p = p_->getSuivant();

        current_ratio *= find_closest_reduction_ratio(target_ratio, *p_, *_p);

        target_ratio = pow(target_ratio, i + 2)/ current_ratio;

        trans.ajoutArbre(p_);    
        p_ = _p;
    }

    trans.ajoutArbre(_p);

    return 0;
}