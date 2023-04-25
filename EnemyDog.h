#ifndef ENEMYDOG_H
#define ENEMYDOG_H
#include "enemy.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <iostream>


class Dog : public Enemy {
    Enemy dog;

public:
    Dog(){
//        Enemy(1,20,2);
        dog.setHealth(20);
        dog.setDamage(2);
        dog.setDiff(1);

    }
    bool isDead(){};

    void takeDamage(int d){};

    void attack(){};
};


#endif // ENEMYDOG_H
