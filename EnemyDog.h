#ifndef ENEMYDOG_H
#define ENEMYDOG_H
#include "enemy.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>


class Dog : public Enemy {
    Enemy dog;

public:
    Dog(){
        dog.setHealth(20);
        dog.setDamage(2);
        dog.setDiff(1);
    }
    bool isDead(){
        int dogHp = getHP();

        if(dogHp <= 0){
            std::cout << "You've killed dog";
            return true;
        } else{
            return false;
        }
    }
    void takeDamage(int d){
        int dogHp = getHP();

        if(!isDead()){
            dogHP -= d;
        } else {
            std::cout << "You've already killed dog";
        }
    }

    void attack(){
        /* initialize random seed: */
        int damageGiven;
        srand (time(NULL));

        /* generate secret number between 1 and class.Damage: */
        damageGiven = rand() % dog.damage + 1;

        return damageGiven;
    }
};


#endif // ENEMYDOG_H
