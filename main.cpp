/**
 @author dylan grammont
 @date 24/09/2020
 @version 1.0
 @file main.cpp
 @details test du fonctionement des fonction
*/



#include <iostream>
#include "barreCarree.h"
#include "barreRectangle.h"
#include "barreRonde.h"
using namespace std;


int main()
{
    BarreCarree carre(15,15,5,"carre","BL9");
    BarreRonde ronde(15,15,15,"ronde","HR1");
    BarreRectangle rectangle(15,2.7,15,15,"rectangle","SN2");
    cout<<"La masse de la barre carre est de  : "<<carre.CalculerMasse()<<endl;
    cout<<"La masse de la barre ronde est de  : "<<ronde.CalculerMasse()<<endl;
    cout<<"La masse de la barre rectangle est de  : "<<rectangle.CalculerMasse()<<endl;
    carre.Barre::AfficherCaracteristiques();
    ronde.Barre::AfficherCaracteristiques();
    rectangle.Barre::AfficherCaracteristiques();

    return 0;
}
