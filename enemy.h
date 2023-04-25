#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Enemy: public QObject, public QGraphicsPixmapItem {
private:
    int  healthPoints, baseDamage;

public:
    Enemy();
    Enemy(int hp, int dam);

    // Variable getters
    int getHealthPoints();
    int getBaseDamage();

    // Variable modifiers
//    void healthModifier(int x);
};



#endif // ENEMY_H
