#-------------------------------------------------
#
# Project created by QtCreator 2015-07-09T11:36:35
#
#-------------------------------------------------

QT                  += core
QT                  += dbus
QT                  -= gui
QMAKE_CXXFLAGS      += -std=c++11

TARGET = QDBusServer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
        ccalculator.cpp \
        calculatorAdapter.cpp

HEADERS += ccalculator.h \
        calculatorAdapter.h \
    icalculator.h
