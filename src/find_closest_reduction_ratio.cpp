#include "../include/prototypes.hpp"
#include <vector>



double find_closest_reduction_ratio(double r, Arbre* arbre_menant, Arbre* arbre_mene)
{
    std::vector<double> modules_possibles = {0.13, 0.5, 0.6, 0.8, 1.25, 1.5, 2, 2.5, 3, 4, 5, 6, 8};

    double best_error = 1000;
    Roue* best_menee = nullptr;
    Roue* best_menante = nullptr;

    for (int i = 0; i < modules_possibles.size(); i++) 
    {
        for (int j = 0; j < modules_possibles.size(); j++) 
        {
            for (int k = 18; k < 150; k++) 
            {
                for (int l = 18; l < 150; l++) 
                {
                    double ratio = k * modules_possibles[i] / (l * modules_possibles[j]);
                    double error = r - ratio;
                    
                

                    if ( error <= 0 && error > best_error || error >= 0 && error < best_error) 
                    {   
                        best_error = error;
                        best_menee = new Roue(modules_possibles[i], k);
                        best_menante = new Roue(modules_possibles[j], l);
                    }
                }
            }
        }
    }

    arbre_menant->setMenante(best_menante);
    arbre_mene->setMenee(best_menee);

    return (best_menee->getD())/(best_menante->getD());
}