#include "../include/prototypes.hpp"
#include <vector>



double find_closest_reduction_ratio(double r, Arbre& arbre_menant, Arbre& arbre_mene)
{
    std::vector<float> modules_possibles;
    modules_possibles.push_back(0.13);
    modules_possibles.push_back(0.5);
    modules_possibles.push_back(0.6);
    modules_possibles.push_back(0.8);
    modules_possibles.push_back(1.25);
    modules_possibles.push_back(1.5);
    modules_possibles.push_back(2);
    modules_possibles.push_back(2.5);
    modules_possibles.push_back(3);
    modules_possibles.push_back(4);
    modules_possibles.push_back(5);
    modules_possibles.push_back(6);
    modules_possibles.push_back(8);

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