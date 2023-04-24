#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

class Game : public QGraphicsView
{
public:
    Game(QWidget * parent = 0);

    QGraphicsScene * scene;
};

#endif // MAINMENU_H
