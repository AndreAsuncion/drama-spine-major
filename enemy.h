#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
    //this is a multiplier for damge. so diff = 1 will be damge# * diff
    int difficulty; //out of 5. 1 being easy 5 hardest
    int healthPoints;
    int damage;
public:
    Enemy() : difficulty(0), healthPoints(0), damage(0) {};

    Enemy(int x, int y, int z) : difficulty(x), healthPoints(y), damage(z) {};

    void setDiff(int d){
        this->difficulty = d;
    }
    void setHealth(int hp){
        this->healthPoints = hp;
    }
    void setDamage(int d){
        this->damage = d;
    }
};



#endif // ENEMY_H
