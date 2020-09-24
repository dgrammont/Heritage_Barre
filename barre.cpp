#include "barre.h"


/**
 * @brief Barre::Barre
 * @param _longeur
 * @param _densite
 * @param _reference
 * @param _nom
 * @details constructeur de la classe barre
 */
Barre::Barre(const int _longeur, const float _densite, const string _reference, const string _nom)
{
    longeur=_longeur;
    densite=_densite;
    reference=_reference;
    nom=_nom;
    cout<<"constructeur de Barre"<<endl;
}
/**
 * @brief Barre::~Barre
 * @details destructeur de la classe barre
 */
Barre::~Barre()
{
    cout<<"Destructeur de Barre"<<endl;

}
/**
 * @brief Barre::AfficherCaracteristiques
 * @details afficher les caracteristique de la barre
 *
 */
void Barre::AfficherCaracteristiques()
{
    cout<<"Nom : "<<nom<<endl<<"Reference : "<<reference<<endl<<"Longeur : "<<longeur<<endl<<"densité : "<<densite<<endl;
}
