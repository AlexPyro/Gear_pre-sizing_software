#include "Arbre.hpp"

class Trans
{
    private :

    int _sens;
    double _Ne;
    double _Ns;
    int _Nb; //nb arbre
    Arbre* _arbres; 
    //std::vector<Arbre> listeArbre;

    protected :

    public :
    
    Trans();
    ~Trans();

    Arbre* getArbres();
    int getNbArbres();

    void ajoutArbre(Arbre*);
    void retraitArbre(int);
};