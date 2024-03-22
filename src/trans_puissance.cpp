#include <iostream>
using namespace std;
#include "../include/prototypes.hpp"
#include <cmath>

// nombre d'arbre fixé
// vitesse entrée fixée
// vitesse sortie fixée

int trans_puissance(Trans& trans, int nombre_arbres, double vitesse_entree, double vitesse_sortie, int sens)
{   
   
    float target_ratio = pow(target_ratio, 1.0/nombre_arbres); 
    float current_ratio = 1.0;

    Arbre arbre1;

    trans.ajoutArbre(&arbre1);


    for (int i = 0 ; i < nombre_arbres - 1 ; i++)
    {   
        Arbre arbre2;

        trans.ajoutArbre(&arbre2);

        current_ratio *= find_closest_reduction_ratio(target_ratio, arbre1, arbre2);

        target_ratio = pow(target_ratio, i + 2)/ current_ratio;

        arbre1 = arbre2;
    }

    return 0;
}