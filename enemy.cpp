#include "enemy.h"

Enemy::Enemy() : difficulty(0), healthPoints(0), baseDamage(0), type(0) {};

Enemy::Enemy(int hp, int dam) : healthPoints(hp), baseDamage(dam) {};

// Variable Getters

int Enemy::getHealthPoints()
{
    return this->healthPoints;
}

int Enemy::getBaseDamage()
{
    return this->baseDamage;
}


// Variable modifiers
// When modifying health from either healing or combat damage
// it will pass through a positive or negative value through
// this function.
//void Enemy::healthModifier(int x)
//{
//    healthPoints += x;
//}
