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

    Arbre arbre1 = *trans.getArbres();

    trans.ajoutArbre(&arbre1);


    for (int i = 0 ; i < nombre_arbres - 1 ; i++)
    {   
        Arbre arbre2;

        current_ratio *= find_closest_reduction_ratio(target_ratio, arbre1, arbre2);

        trans.ajoutArbre(&arbre2);

        target_ratio = pow(target_ratio, i + 2)/ current_ratio;

        arbre1 = arbre2;
    }

    return 0;
}