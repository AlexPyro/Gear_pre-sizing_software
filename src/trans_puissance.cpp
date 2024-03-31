#include <iostream>
using namespace std;
#include "../include/prototypes.hpp"
#include <cmath>

// nombre d'arbre fixé
// vitesse entrée fixée
// vitesse sortie fixée

int trans_puissance(Trans& trans, int nombre_arbres, double vitesse_entree, double vitesse_sortie, int sens)
{      
    double r = vitesse_sortie / vitesse_entree;

    float target_ratio;
    float current_ratio = 1.0;

    Arbre* arbreMenant = new Arbre();
    trans.ajoutArbre(arbreMenant);
    arbreMenant->setN(vitesse_entree);

    for (int i = 0 ; i < nombre_arbres - 1 ; i++)
    {   
        Arbre* arbreMene = new Arbre();
        trans.ajoutArbre(arbreMene);
        
        target_ratio = pow(r / current_ratio, 1.0 / (nombre_arbres - i - 1)) ;
        cout << "\nr("<< i << ") = " << target_ratio;

        current_ratio *= find_closest_reduction_ratio(target_ratio, arbreMenant, arbreMene);

        arbreMene->setN(vitesse_entree * current_ratio);

        cout << "\n\n~r("<< i << ") = " << current_ratio;
        cout << "\nArbre menant N = " << arbreMenant->getN();
        cout << "\nArbre mene N = " << arbreMene->getN();
        cout << "\n_Nb = " << trans.getNbArbres();

        

        arbreMenant = arbreMene;
    }

    return 0;
}