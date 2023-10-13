#include <stdio.h> 
#include "hero.h"
using namespace std;

void Heros::diminuerVie(int vieenmoins) // Méthode pour diminuer le niveau de vie (vie ne peut pas être en dessous de 0)
{
    m_vieheros -= vieenmoins;
    if (m_vieheros<0)
    m_vieheros=0;
}

void Heros::attaquer (Heros &cible) // Méthode pour attaquer un autre héros
{
    cout << m_nomheros << " attaque " << cible.m_nomheros << endl; 
    cible.diminuerVie(m_puissancearme);
}

bool Heros::vivant () const // Savoir si le héros est vivant, true vivant et false mort
{
    return (m_vieheros>0);
}

Heros::Heros(): m_nomheros("Inconnu"), m_vieheros(0) {} // Constructeur sans attribut

Heros::Heros(string nomheros, int vieheros, string nomarme, int puissancearme) // Constructeur avec attribut
{
    m_nomheros = nomheros;
    m_vieheros = vieheros;
    m_nomarme = nomarme;
    m_puissancearme = puissancearme;
}

void Heros::afficher() const // Méthode pour afficher les informations du héros
{
    cout<<"-----------------------" << endl;
    cout << "Heros :"<<m_nomheros << "\tVie: " << m_vieheros << endl;
    cout << "Arme : " << m_nomarme << "\tPuissance de l'Arme : " << m_puissancearme << endl; 
    if (vivant() == true)
        cout << "Heros Vivant" << endl;
    else
        cout << "Heros Mort" << endl;
    
}