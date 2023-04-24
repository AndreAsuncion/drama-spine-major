#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "game.h"

Game::Game(QWidget * parent)
{
    // Initializes scene
    scene = new QGraphicsScene();

    menu = new QGraphicsPixmapItem();
    menu->setPixmap(QPixmap(":/images/menu.jpg"));

    // Add object into scene
    scene->addItem(menu);

    // Put scene into view
    view = new QGraphicsView(scene);
    view->setFixedSize(800,600); // set the fixed size to 800x600
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
}
