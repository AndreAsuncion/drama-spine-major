#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QPushButton>

class Game : public QGraphicsView
{
public:
    Game(QWidget * parent = 0);

    QGraphicsScene * scene;
    QGraphicsPixmapItem * menu;
    QGraphicsView * view;
};

#endif // MAINMENU_H
