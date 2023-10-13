#ifndef robots_h
#define robots_h

#include "hero.h"

class Robots : public Heros
{
public:
    Robots(std::string nomheros, int vieheros, std::string nomarme, int puissancearme);
    Robots(std::string nomheros, int vieheros, std::string nomarme, int puissancearme, int forcegadgets);
    void utiliserLesGadgets(Heros &cible);
    virtual void afficher() const override;
private:
    int m_forcegadgets;
};
#include "robots.cpp"
#endif /* Robots_h */