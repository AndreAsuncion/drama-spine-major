TEMPLATE = app
TARGET = cse-165

QT = core gui

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

SOURCES += \
    game.cpp \
    main.cpp

HEADERS += \
    EnemyDog.h \
    EnemyRam.h \
    EnemySonic.h \
    enemy.h \
    game.h \
    test.h

RESOURCES += \
    res.qrc
