#include "enemy.h"

Enemy::Enemy() : difficulty(0), healthPoints(0), baseDamage(0), type(0) {};

Enemy::Enemy(int a, int b, int c, int d) : difficulty(a), healthPoints(b), baseDamage(c), type(d) {};

// Variable Getters
int Enemy::getDifficulty()
{
    return this->difficulty;
}

int Enemy::getHealthPoints()
{
    return this->healthPoints;
}

int Enemy::getBaseDamage()
{
    return this->baseDamage;
}

int Enemy::getType()
{
    return this->type;
}

// Variable modifiers
// When modifying health from either healing or combat damage
// it will pass through a positive or negative value through
// this function.
void Enemy::healthModifier(int x)
{
    healthPoints += x;
}
