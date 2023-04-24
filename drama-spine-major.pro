TEMPLATE = app
TARGET = cse-165

QT = core gui

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

SOURCES += \
    game.cpp \
    main.cpp

HEADERS += \
    EnemyDog.h \
    enemy.h \
    game.h

RESOURCES += \
    res.qrc
