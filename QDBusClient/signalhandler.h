#ifndef SIGNALHANDLER_H
#define SIGNALHANDLER_H

#include <QObject>
#include "calculatorProxy.h"
#include <iostream>

class SignalHandler : public QObject
{
    Q_OBJECT
public:
    explicit SignalHandler(QObject *parent = 0);

signals:

public slots:
    void printToConsole(QString str);

};

#endif // SIGNALHANDLER_H
