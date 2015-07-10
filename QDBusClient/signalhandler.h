#ifndef SIGNALHANDLER_H
#define SIGNALHANDLER_H

#include <QObject>
#include <iostream>
#include "calculatorProxy.h"

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
