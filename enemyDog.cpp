#include "EnemyDog.h"


Enemy dog;

dog(){
    dog.setHP(20);
    dog.setDiff(2);
    dog.setDamage(1);
}

bool isDead(){
    int dogHp = dog.getHP();

    if(dogHp <= 0){
        std::cout << "You've killed dog";
        return true;
    } else{
        return false;
    }
}

void takeDamage(int d){
    int dogHp = dog.getHP();

    if(!isDead()){
        dogHP -= d;
    } else {
        std::cout << "You've already killed dog";
    }
}

int attack(){
    /* initialize random seed: */
    int damageGiven;
    srand (time(NULL));

    /* generate secret number between 1 and class.Damage: */
    damageGiven = rand() % dog.damage + 1;

    return damageGiven;
}

// Sprite drawing
setPixmap(QPixmap(":images/dog.png"));



