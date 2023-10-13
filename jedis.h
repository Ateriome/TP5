#ifndef jedis_h
#define jedis_h

#include "hero.h"

class Jedis : public Heros
{
public:
    Jedis(std::string nomheros, int vieheros, std::string nomarme, int puissancearme);
    Jedis(std::string nomheros, int vieheros, std::string nomarme, int puissancearme, int force);
    void utiliserLaForce(Heros &cible);
    virtual void afficher() const override;
private:
    int m_force;
};
#include "jedis.cpp"
#endif /* jedis_h*/