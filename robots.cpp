#include <stdio.h>
#include "robots.h"
#include <string>

using namespace std;

Robots::Robots(string nomheros, int vieheros, string nomarme, int puissancearme) : Heros(nomheros, vieheros, nomarme, puissancearme), m_forcegadgets(20) // Constrcueteur avec les attributs du heros à determiner et m_force a 100
{
}

Robots::Robots(string nomheros, int vieheros, string nomarme, int puissancearme, int forcegadgets) : Heros(nomheros, vieheros, nomarme, puissancearme), m_forcegadgets(forcegadgets) // Constrcueteur avec tous les attribust à determiner
{
}

void Robots::utiliserLesGadgets(Heros &cible)
{
    cout << m_nomheros <<" attaque avec une force de " << m_forcegadgets << endl;
    cible.diminuerVie(m_forcegadgets);
}

void Robots::afficher() const //Méthode pour afficher les informations du heros
{
    Heros::afficher();
    cout << "Niveau de Gadgets : " << m_forcegadgets << endl;
}