#include <stdio.h>
#include "humains.h"
#include <string>

using namespace std;

Humains::Humains(string nomheros, int vieheros, string nomarme, int puissancearme) : Heros(nomheros, vieheros, nomarme, puissancearme), m_forcepoing(50) // Constrcueteur avec les attributs du heros à determiner et m_force a 100
{
}

Humains::Humains(string nomheros, int vieheros, string nomarme, int puissancearme, int forcepoing) : Heros(nomheros, vieheros, nomarme, puissancearme), m_forcepoing(forcepoing) // Constrcueteur avec tous les attribust à determiner
{
}

void Humains::coupDePoing(Heros &cible)
{
    cout << m_nomheros <<" attaque avec une force de " << m_forcepoing << endl;
    cible.diminuerVie(m_forcepoing);
}

void Humains::afficher() const //Méthode pour afficher les informations du heros
{
    Heros::afficher();
    cout << "Niveau du Coup de Poing : " << m_forcepoing << endl;
}