#ifndef ENEMYRAM_H
#define ENEMYRAM_H
#include "enemy.h"


class Ram{
    Enemy ram;
public:
    Ram(){
        ram.setHealth(10);
        ram.setDiff(5);
        ram.setDamage(2);
    }
    bool isDead(){
        int ramHp = ramHp.getHP();

        if(ramHp <= 0){
            std::cout << "You've killed dog";
            return true;
        } else{
            return false;
        }
    }

    void takeDamage(int d){
        int ramHp = sonicHp.getHP();

        if(!isDead()){
            ramHp -= d;
        } else {
            std::cout << "You've already killed dog";
        }
    }

    void attack(){
        /* initialize random seed: */
        int damageGiven;
        srand (time(NULL));

        /* generate secret number between 1 and class.Damage: */
        damageGiven = rand() % ramHp.damage + 1;

        return damageGiven;
    }
};


#endif // ENEMYRAM_H
