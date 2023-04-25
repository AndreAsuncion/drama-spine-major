#include "EnemyDog.h"

Enemy::Dog(){
    this->healthPoints = 20;
    this->baseDamage = 2;
}

Dog::isDead(){
    int health = Enemy::getHealthPoints();
    if(health <= 0){
        std::cout << "Dog is dead";
        return true;
    }
    return false;
}

Dog::takeDamage(int d){
    int health = Enemy::getHealthPoints();
    if(!Dog::isDead()){
        health -= d;
    } else {
        std::cout << "Dog is dead";
    }
}

Dog::attack(){
    int damage = Enemy::getBaseDamage();
    return damage;
}



