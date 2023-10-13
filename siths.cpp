#include <stdio.h>
#include "siths.h"
#include <string>

using namespace std;

Siths::Siths(string nomheros, int vieheros, string nomarme, int puissancearme) : Heros(nomheros, vieheros, nomarme, puissancearme), m_coteobscur(80) // Constrcueteur avec les attributs du heros à determiner et m_force a 100
{
}

Siths::Siths(string nomheros, int vieheros, string nomarme, int puissancearme, int coteobscur) : Heros(nomheros, vieheros, nomarme, puissancearme), m_coteobscur(coteobscur) // Constrcueteur avec tous les attribust à determiner
{
}

void Siths::utiliserLeCoteObscur(Heros &cible)
{
    cout << m_nomheros <<" attaque avec une force de " << m_coteobscur << endl;
    cible.diminuerVie(m_coteobscur);
}

void Siths::afficher() const //Méthode pour afficher les informations du heros
{
    Heros::afficher();
    cout << "Niveau de Cote Obscur : " << m_coteobscur << endl;
}