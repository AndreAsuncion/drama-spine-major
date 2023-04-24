#ifndef ENEMYSONIC_H
#define ENEMYSONIC_H

#include "enemy.h"

class Sonic{
    Enemy sonic;
public:
//    Dog(){
//        Enemy(1,20,2);
//        dog.setHealth(20);
//        dog.setDamage(2);
//        dog.setDiff(1);
//    }
    sonic(){
        sonic.setHealth(15);
        sonic.setDamage(4);
        sonic.setDiff(4);
    }

    bool isDead(){
        int sonicHp = sonic.getHP();

        if(sonicHp <= 0){
            std::cout << "You've killed dog";
            return true;
        } else{
            return false;
        }
    }

    void takeDamage(int d){
        int sonicHp = sonicHp.getHP();

        if(!isDead()){
            sonicHp -= d;
        } else {
            std::cout << "You've already killed dog";
        }
    }

    void attack(){
        /* initialize random seed: */
        int damageGiven;
        srand (time(NULL));

        /* generate secret number between 1 and class.Damage: */
        damageGiven = rand() % sonicHp.damage + 1;

        return damageGiven;
    }
};


#endif // ENEMYSONIC_H
