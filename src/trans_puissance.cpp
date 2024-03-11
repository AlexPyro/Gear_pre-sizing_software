#include <iostream>
using namespace std;
#include "../include/prototypes.hpp"
#include <cmath>

// nombre d'arbre fixé
// vitesse entrée fixée
// vitesse sortie fixée

Trans* trans_puissance(int nombre_arbres, double vitesse_entree, double vitesse_sortie, int sens)
{   
    if (vitesse_entree < 0 | vitesse_entree > 10000)
    {
        cout << "Valeur de vitesse d'entree hors intervalle, doit être compris entre 0 et 10000";
        return nullptr;
    }

      if (vitesse_sortie < 0 | vitesse_sortie > 10000)
    {
        cout << "Valeur de vitesse de sortie hors intervalle, doit être compris entre 0 et 10000";
        return nullptr;
    }
    
    if (sens != -1 | sens != 1)
    {
        return nullptr;
    }

    if (!(nombre_arbres % 2) | sens)
    {
        return nullptr;
    }

    if (nombre_arbres % 2 | sens == -1)
    {
        return nullptr;
    }

    float target_ratio = pow(target_ratio, 1.0/nombre_arbres); 
    float current_ratio = 1.0;

    Trans transmission();
    Arbre* p_ = nullptr;
    p_ =  transmission.getArbres();
    Arbre* _p = nullptr;

    for (int i = 0 ; i < nombre_arbres - 1 ; i++)
    {   
        _p = p_->getSuivant();

        current_ratio *= find_closest_reduction_ratio(target_ratio, p_, _p);

        target_ratio = pow(target_ratio, i + 2)/ current_ratio;

        p_ = _p;
    }
    

    return &transmission;
}