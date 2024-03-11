#include "Arbre.hpp"

class Trans
{
    private :

    bool _sens;
    double _Ne;
    double _Ns;
    double _Nb;
    int _nombre_arbres;
    Arbre* _arbres; 

    protected :

    public :
    
    Trans();
    ~Trans();

    Arbre* getArbres();
    int getNbArbres();

    void ajoutArbre(Arbre*);
    void retraitArbre();
};