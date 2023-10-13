#ifndef siths_h
#define siths_h

#include "hero.h"

class Siths : public Heros
{
public:
    Siths(std::string nomheros, int vieheros, std::string nomarme, int puissancearme);
    Siths(std::string nomheros, int vieheros, std::string nomarme, int puissancearme, int coteobscur);
    void utiliserLeCoteObscur(Heros &cible);
    virtual void afficher() const override;
private:
    int m_coteobscur;
};
#include "siths.cpp"
#endif /* siths_h*/