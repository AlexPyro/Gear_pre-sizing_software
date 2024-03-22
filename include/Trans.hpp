#include "Arbre.hpp"

class Trans
{
    private :

    bool _sens;
    double _Ne;
    double _Ns;
    int _Nb;

    Arbre* _arbres; 

    protected :

    public :
    
    Trans();
    ~Trans();

    Arbre* getArbres();
    int getNbArbres();

    void ajoutArbre(Arbre*);
    void retraitArbre(int);
};