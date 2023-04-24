#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "game.h"

Game::Game(QWidget * parent)
{
    // Initializes scene
    scene = new QGraphicsScene();

    QGraphicsPixmapItem * menu = new QGraphicsPixmapItem();
    menu->setPixmap(QPixmap(":/images/menu.jpg"));

    // Add object into scene
    scene->addItem(menu);

    // Put scene into view
    QGraphicsView * view = new QGraphicsView(scene);
    view->show();

}
