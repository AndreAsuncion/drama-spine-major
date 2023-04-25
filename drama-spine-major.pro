TEMPLATE = app
TARGET = cse-165

QT = core gui

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

SOURCES += \
    enemy.cpp \
    enemyRam.cpp \
    enemySonic.cpp \
    game.cpp \
    main.cpp

HEADERS += \
    EnemyDog.h \
    enemyRam.h \
    EnemySonic.h \
    enemy.h \
    game.h \
    test.h

RESOURCES += \
    res.qrc
