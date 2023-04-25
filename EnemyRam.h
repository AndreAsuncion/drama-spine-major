#ifndef ENEMYRAM_H
#define ENEMYRAM_H

#include "enemy.h"

class Ram : public Enemy
{
public:
    Ram(int hp, int dam);

    void takeDamage(int d){};

    int attack(){};
    bool isDead(){};
};


#endif // ENEMYRAM_H
