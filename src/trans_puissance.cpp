#include <iostream>
using namespace std;
#include "../include/prototypes.hpp"
#include <cmath>

// nombre d'arbre fixé
// vitesse entrée fixée
// vitesse sortie fixée

int trans_puissance(Trans& trans, int nombre_arbres, double vitesse_entree, double vitesse_sortie, int sens)
{   

    //printf("before loop\n");

    float target_ratio = pow(vitesse_sortie/vitesse_entree, 1.0/nombre_arbres); 

    printf(" target ratio %f \n", target_ratio);

    float current_ratio = 1.0;

    //printf("before loop2\n");

    Arbre arbre1;

    trans.ajoutArbre(&arbre1);

    //printf("\nbefore loop3\n");

    double mm;

    Arbre arbre2;

    for (int i = 0 ; i < nombre_arbres - 1 ; i++)
    {   

        cout << "\n_Nb = " << trans.getNbArbres();

        //printf("in loop\n");

        mm = find_closest_reduction_ratio(target_ratio, arbre1, arbre2);

        printf("\nmm : %f \n", mm);

        //printf("in loop2\n");

        cout << "Arbre1 N = " << arbre1.getN();
        current_ratio = current_ratio * mm;

        //printf(" \ncurrent ratio : %f\n", current_ratio);

        cout << "\narbre2 N = " << arbre2.getN();

        trans.ajoutArbre(&arbre2);

        //printf("\nin loop3\n");

        current_ratio *= find_closest_reduction_ratio(target_ratio, arbre1, arbre2);

        target_ratio = pow(target_ratio, i + 2)/current_ratio;

        printf("\nnew targeted ratio : %f\n", target_ratio);

        arbre1 = arbre2;

        //printf("in loop3\n");
    }

    return 0;
}