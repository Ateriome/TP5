#include <iostream>
#include "hero.h"
#include "jedis.h"
#include "siths.h"
#include "humains.h"
#include "robots.h"

using namespace std;

int main()
{
    // Création de tous les objets Heros
    Jedis yoda("Maitre Yode", 120, "Sabre Laser", 50);
    Jedis luke("Luke Skywalker", 120, "Sabre Laser", 50, 150);
    Humains leia("Princesse Leia", 100, "Pistolet Laser", 30);
    Humains solo("Han Solo", 150, "Pistolet Laser", 30, 60);
    Siths palpatine("Empereur Palpatine", 150, "Sabre Laser", 50);
    Siths vador("Dark Vador", 200, "Sabre Laser", 50, 90);
    Robots r2d2("R2D2", 50, "Pistolet Laser", 30);
    Robots c3po("C-3PO", 80, "Laser", 30, 40);

    //Création des informations des Heros
    yoda.afficher();
    luke.afficher();
    palpatine.afficher();
    vador.afficher();
    leia.afficher();
    solo.afficher();
    r2d2.afficher();
    c3po.afficher();

    return 0;
}