#ifndef BARRE_H
#define BARRE_H
#include <string>
#include <iostream>
using namespace std;

/**
 * @brief The Barre class
 */
class Barre
{
public:
    Barre(const int _longeur,const float _densite,const string _reference,const string _nom);
    ~Barre();
    void AfficherCaracteristiques();
protected:
    int longeur;
    float densite;
    string reference;
    string nom;

};

#endif // BARRE_H
