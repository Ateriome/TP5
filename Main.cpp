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
    Jedis yoda("Maitre Yoda", 260, "Sabre Laser", 50);
    Jedis luke("Luke Skywalker", 450, "Sabre Laser", 50, 200);
    Humains leia("Princesse Leia", 100, "Pistolet Laser", 30);
    Humains solo("Han Solo", 150, "Pistolet Laser", 30, 60);
    Siths palpatine("Empereur Palpatine", 250, "Sabre Laser", 50);
    Siths vador("Dark Vador", 400, "Sabre Laser", 50, 90);
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
    cout << endl;

    yoda.attaquer(vador);
    vador.attaquer(luke);
    luke.attaquer(palpatine);
    palpatine.attaquer(yoda);
    leia.attaquer(vador);
    solo.attaquer(palpatine);
    r2d2.attaquer(vador);
    c3po.attaquer(palpatine);

    palpatine.utiliserLeCoteObscur(luke);
    vador.utiliserLeCoteObscur(yoda);
    leia.coupDePoing(palpatine);
    solo.coupDePoing(vador);
    r2d2.utiliserLesGadgets(palpatine);
    c3po.utiliserLesGadgets(vador);
    luke.utiliserLaForce(vador);
    yoda.utiliserLaForce(palpatine);
    cout << endl;

    // Affichage des informations des heros

    yoda.afficher();
    luke.afficher();
    palpatine.afficher();
    vador.afficher();
    leia.afficher();
    solo.afficher();
    r2d2.afficher();
    c3po.afficher();
    cout << endl;

    return 0;
}