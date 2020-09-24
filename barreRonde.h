#ifndef BARRE_RONDE_H
#define BARRE_RONDE_H
#include "barre.h"
/**
 * @brief The BarreRonde class
 */
class BarreRonde : public Barre
{
public:
    BarreRonde(const int _longeur,const float _densite,const float _diametre,const string _reference,const string _nom);
    ~BarreRonde();
    float CalculerSection();
        float CalculerMasse();

private:
    float diametre;
};

#endif // BARRE_RONDE_H
