#include "EnemyRam.h"

//Ram::Ram(int hp, int dam) : Enemy(hp,dam) {}

Ram::Ram(22, 5){};

Ram::takeDamage(int d) {
    int health = Enemy::getHealthPoints();
    if(health <= 0){
        std::cout << "Ram is dead";
    }

    health -= d;
}

Ram::attack(){
    int damage = Enemy::getBaseDamage();

    return damge;
}

Ram::isDead(){
    int health = Enemy::getHealthPoints();
    if(health <= 0){
//        std::cout << "Ram is dead";
        return true;
    }
    return false;
}


