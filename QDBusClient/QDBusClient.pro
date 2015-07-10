#-------------------------------------------------
#
# Project created by QtCreator 2015-07-09T13:06:50
#
#-------------------------------------------------

QT          += core
QT          += dbus
QT          -= gui

QMAKE_CXXFLAGS  += -std=c++11

TARGET      = QDBusClient
CONFIG      += console
CONFIG      -= app_bundle

TEMPLATE    = app

HEADERS     += calculatorProxy.h \
    signalhandler.h

SOURCES     += main.cpp \
            calculatorProxy.cpp \
    signalhandler.cpp
