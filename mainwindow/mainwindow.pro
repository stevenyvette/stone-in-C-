#-------------------------------------------------
#
# Project created by QtCreator 2014-12-24T09:22:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mainwindow
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    form.cpp \
    reshape.cpp \
    graph.cpp \
    graph2.cpp \
    stone.cpp \
    aboutCT.cpp \
    guide.cpp

HEADERS  += mainwindow.h \
    form.h \
    reshape.h \
    networklethality.h \
    graph.h \
    graph2.h \
    stone.h \
    aboutCT.h \
    guide.h

FORMS    += first.ui \
    reshape.ui \
    graph.ui \
    graph2.ui \
    stone.ui \
    TSP.ui \
    aboutCT.ui \
    guide.ui


RESOURCES += \
    resource.qrc
