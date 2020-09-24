#include "barreCarree.h"

/**
 * @brief BarreCarree::BarreCarree
 * @param _longeur
 * @param _densite
 * @param _cote
 * @param _reference
 * @param _nom
 * @details  constructeur de la classe barreCarree
 *
 */
BarreCarree::BarreCarree(const int _longeur, const float _densite, const float _cote, const string _reference, const string _nom):
    Barre(_longeur,_densite,_nom,_reference)
{
    cote=_cote;
    cout<<"Constructeur de barre carre"<<endl;

}
/**
 * @brief BarreCarree::~BarreCarree
 * @details  destructeur de la classe barreCarree
 */
BarreCarree::~BarreCarree()
{
    cout<<"Destructeur de barre carre"<<endl;

}
/**
 * @brief BarreCarree::CalculerSection
 * @return
 */
float BarreCarree::CalculerSection()
{
    return cote*cote;
}
/**
 * @brief BarreCarree::CalculerMasse
 * @return
 */
float BarreCarree::CalculerMasse()
{
    return longeur *CalculerSection()*densite;
}
