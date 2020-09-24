#include "barreRectangle.h"


/**
 * @brief BarreRectangle::BarreRectangle
 * @param _longeur
 * @param _densite
 * @param _largeur
 * @param _hauteur
 * @param _reference
 * @param _nom
 * @details  constructeur de la classe barreRectangle
 */
BarreRectangle::BarreRectangle(const int _longeur, const float _densite, const float _largeur, const float _hauteur, const string _reference, const string _nom):
    Barre(_longeur,_densite,_nom,_reference)
{
    largeur=_largeur;
    hauteur=_hauteur;
    cout<<"Constructeur de barre rectangle"<<endl;


}
/**
 * @brief BarreRectangle::~BarreRectangle
 * @details destructeur de la classe barreRectangle
 */
BarreRectangle::~BarreRectangle()
{
    cout<<"destructeur de barre rectangle"<<endl;

}
/**
 * @brief BarreRectangle::CalculerSection
 * @return
 */
float BarreRectangle::CalculerSection()
{
    return hauteur*largeur;
}
/**
 * @brief BarreRectangle::CalculerMasse
 * @return
 */
float BarreRectangle::CalculerMasse()
{
    return longeur*CalculerSection()*densite;
}
