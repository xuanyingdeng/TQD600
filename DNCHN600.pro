#-------------------------------------------------
#
# Project created by QtCreator 2017-12-18T15:26:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DNCHN600
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    imagebutton.cpp \
    testdialog.cpp \
    logindialog.cpp \
    syssettingdlg.cpp \
    tabmenucontrol.cpp \
    dataquerydlg.cpp \
    Frame/framelesswindow.cpp

HEADERS  += mainwindow.h \
    imagebutton.h \
    testdialog.h \
    logindialog.h \
    syssettingdlg.h \
    tabmenucontrol.h \
    dataquerydlg.h \
    Frame/framelesswindow.h

FORMS    += mainwindow.ui \
    testdialog.ui \
    logindialog.ui \
    syssettingdlg.ui \
    dataquerydlg.ui

RESOURCES += \
    resource.qrc

OBJECTIVE_SOURCES += \
    Frame/framelesswindow.mm

