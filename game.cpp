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

    // Create a new scene
    QGraphicsScene* mapScene = new QGraphicsScene();

    // Set the scene size
    mapScene->setSceneRect(0, 0, 800, 600);

    // Add a rectangle item to the scene
    QGraphicsRectItem* rect = new QGraphicsRectItem(0, 0, 50, 50);
    rect->setBrush(Qt::blue);
    mapScene->addItem(rect);

    // Add a text item to the scene
    QGraphicsTextItem* text = new QGraphicsTextItem("Hello, World!");
    text->setPos(100, 100);
    mapScene->addItem(text);

    // Set the scene background color
    mapScene->setBackgroundBrush(Qt::gray);



    // Put scene into view
    view = new QGraphicsView(mapScene);
    view->setFixedSize(800,600); // set the fixed size to 800x600
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
}
