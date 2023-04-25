#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Enemy: public QObject, public QGraphicsPixmapItem {
private:
    int difficulty, healthPoints, baseDamage, type;
    // difficulty is a damage scalar
    // healthPoints represents the health
    // baseDamage is damage before modifiers
    // type is based on a rock paper scissors modifier
    // 0 - normal (no changes)
    // 1 - rock (2.0x to scissors, 0.5x to paper)
    // 2 - paper (2.0x to rock, 0.5x to scissors)
    // 3 - scissors (2.0x to paper, 0.5x to rock)
public:
    Enemy();
    Enemy(int a, int b, int c, int d);

    // Variable getters
    int getDifficulty();
    int getHealthPoints();
    int getBaseDamage();
    int getType();

    void setHP(int hp){
//        this->healthPoints = hp;
    }
    void setDiff(int diff){

    }
    void setDamage(int damage){}

    // Variable modifiers
    void healthModifier(int x);
};



#endif // ENEMY_H
