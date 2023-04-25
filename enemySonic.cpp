#include "EnemySonic.h"

Sonic::sonic(22, 4);

Sonic::attack(){
    int damage = Enemy::getBaseDamage();

    return damage;
}

Sonic::takeDamage(int d){
    int health = Enemy::getHealthPoints();
    if(!Sonic::isDead()){
        health -= d;
    } else {
        std::cout << "Sonic is dead";
    }
}

Sonic::isDead(){
    int health = Enemy::getHealthPoints();
    if(health <= 0){
        std::cout << "Sonic is dead";
        return true;
    }
    return false;
}
