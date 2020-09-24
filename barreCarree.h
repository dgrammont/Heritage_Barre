#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"
/**
 * @brief The BarreCarree class
 */
class BarreCarree : public Barre
{
public:
    BarreCarree(const int _longeur,const float _densite,const float _cote,const string _reference,const string _nom);
    ~BarreCarree();
    float CalculerSection();
    float CalculerMasse();
private:
    float cote;
};

#endif // BARRECARREE_H
