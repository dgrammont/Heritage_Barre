#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"
/**
 * @brief The BarreRectangle class
 */
class BarreRectangle : public Barre
{
public:
    BarreRectangle(const int _longeur,const float _densite,const float _largeur,const float _hauteur,const string _reference,const string _nom);
    ~BarreRectangle();
    float CalculerSection();
        float CalculerMasse();
private:
   float largeur;
   float hauteur;
};

#endif // BARRERECTANGLE_H
