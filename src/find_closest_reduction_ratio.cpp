#include "../include/prototypes.hpp"

std::vector<float> modules_possibles = {0.13, 0.5, 0.6, 0.8, 1, 1.25, 1.5, 2, 2.5, 3, 4, 5, 6, 8};

double find_closest_reduction_ratio(double r, Arbre& arbre_menant, Arbre& arbre_mene)
{
    float M_menee, M_menante, erreur;
    int Z_menee, Z_menante;
    double current_error;

    for (int i = 0; i < modules_possibles.size() ; i++)
    {
        for (int j = 0; j < modules_possibles.size() ; j++)
        {
            for (int k = 18 ; k < 150 ; k++)
            {
                for (int l = 18; l < 150 ; l++)
                {   
                    current_error = abs(r - (k * modules_possibles[i])/(l * modules_possibles[j]));

                    if (erreur > current_error)
                    {
                        erreur = current_error;
                        M_menee = modules_possibles[i];
                        M_menante =  modules_possibles[j];
                        Z_menee = k;
                        Z_menante = l;
                    }
                } 
            } 
        }  
    }

    Roue menante(M_menante, Z_menante), menee(M_menee, Z_menee);
    
    arbre_menant.setMenante(&menante);
    arbre_mene.setMenee(&menee);

    return (M_menee * Z_menee)/(M_menante * Z_menante);
}