#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "game.h"

Game * game;

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    /* Here's the gameplan:
     *  Main.cpp will just open the application and the only
     *  scene that will be in it is the main menu. From there
     *  all changing of scenes and gameplay will occur in their
     *  respective files to keep the clutter out of the main.cpp
     */

    game = new Game();
    game->show();

    return app.exec();
}
