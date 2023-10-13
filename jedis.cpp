#include <stdio.h>
#include "jedis.h"
#include <string>

using namespace std;

Jedis::Jedis(string nomheros, int vieheros, string nomarme, int puissancearme) : Heros(nomheros, vieheros, nomarme, puissancearme), m_force(100) // Constrcueteur avec les attributs du heros à determiner et m_force a 100
{
}

Jedis::Jedis(string nomheros, int vieheros, string nomarme, int puissancearme, int force) : Heros(nomheros, vieheros, nomarme, puissancearme), m_force(force) // Constrcueteur avec tous les attribust à determiner
{
}

void Jedis::utiliserLaForce(Heros &cible)
{
    cout << m_nomheros <<" attaque avec une force de " <<m_force << endl;
    cible.diminuerVie(m_force);
}