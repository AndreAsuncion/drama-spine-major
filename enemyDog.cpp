#include "EnemyDog.h"


//Enemy dog;
//Ram::Ram(int a, int b, int c, int d) : Enemy(a,b,c,d) {}

//dog() : Enemy (a,b,c,d){};



//dog(){
//    dog.getHealthPoints(20);
//    dog.setDiff(2);
//    dog.setDamage(1);
//}
//Enemy::Enemy(int a, int b, int c, int d) : difficulty(a), healthPoints(b), baseDamage(c), type(d) {};

Enemy dog(2, 20, 1, 0);

bool isDead(){
    int dogHp = dog.getHealthPoints();

    if(dogHp <= 0){
        std::cout << "You've killed dog";
        return true;
    }
    return false;

}

void takeDamage(int d){
    int dogHp = dog.getHealthPoints();

    if(!isDead()){
        dogHp -= d;
    } else {
        std::cout << "You've already killed dog";
    }
}

int attack(){
    /* initialize random seed: */
    int damageGiven = dog.getBaseDamage();
    srand (time(NULL));

    /* generate secret number between 1 and class.Damage: */
    damageGiven = rand() % damageGiven + 1;

    return damageGiven;
}

// Sprite drawing
//setPixmap(QPixmap(":images/dog.png"));



