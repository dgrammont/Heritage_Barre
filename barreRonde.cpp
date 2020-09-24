#include "barreRonde.h"

/**
 * @brief BarreRonde::BarreRonde
 * @param _longeur
 * @param _densite
 * @param _diametre
 * @param _reference
 * @param _nom
 * @details  constructeur de la classe barreRonde
 */
BarreRonde::BarreRonde(const int _longeur, const float _densite, const float _diametre, const string _reference, const string _nom):
Barre(_longeur,_densite,_nom,_reference)
{
    diametre = _diametre;
    cout<<"Constructeur de barre ronde"<<endl;
}
/**
 * @brief BarreRonde::~BarreRonde
 * @details  destructeur de la classe barreRonde
 */
BarreRonde::~BarreRonde()
{
    cout<<"Destructeur de barre ronde"<<endl;

}
/**
 * @brief BarreRonde::CalculerSection
 * @return
 */
float BarreRonde::CalculerSection()
{
    return (3.14*(diametre*diametre))/4;
}
/**
 * @brief BarreRonde::CalculerMasse
 * @return
 */
float BarreRonde::CalculerMasse()
{
    return longeur*CalculerSection()*densite;
}
