#include "enemyRam.h"

Ram::Ram(int a, int b, int c, int d) : Enemy(a,b,c,d)
{
    // Sprite drawing
    setPixmap(QPixmap(":images/ram.png"));
}


