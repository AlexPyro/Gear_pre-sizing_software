#include "Roue.hpp"

class Arbre{

    private:
    Roue* _menante; //roue menate
    Roue* _menee; //roue menante
    double _N; //vitesse de rotation
    int _sens; //sens de rotation
    Arbre* _suivant; //pointeur sur l'arbre suivant

    public:
    ~Arbre();
    Arbre(Roue*, Roue*, double, int);
    Arbre();
    double getN();
    void setN(double);
    int getSens();
    void setSens(int);
    Roue* getMenee();
    Roue* getMenante();
    void setMenante(Roue*);
    void setMenee(Roue*);
    Arbre* getSuivant();
    void setSuivant(Arbre*);
    Arbre& operator=(const Arbre& autre);
};
