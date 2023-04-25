#ifndef ENEMYDOG_H
#define ENEMYDOG_H
#include "enemy.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <iostream>


class Dog : public Enemy {
    Enemy dog;

public:
    Dog(){}
    bool isDead(){};

    void takeDamage(int d){};

    void attack(){};
};


#endif // ENEMYDOG_H
