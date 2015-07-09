/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -p calculatorProxy comWpAspServer.xml
 *
 * qdbusxml2cpp is Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CALCULATORPROXY_H_1436426367
#define CALCULATORPROXY_H_1436426367

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.wp.asp.Calculator
 */
class ComWpAspCalculatorInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.wp.asp.Calculator"; }

public:
    ComWpAspCalculatorInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~ComWpAspCalculatorInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<int> addition(int a, int b)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(a) << QVariant::fromValue(b);
        return asyncCallWithArgumentList(QLatin1String("addition"), argumentList);
    }

    inline QDBusPendingReply<double> divide(int a, int b)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(a) << QVariant::fromValue(b);
        return asyncCallWithArgumentList(QLatin1String("divide"), argumentList);
    }

    inline QDBusPendingReply<QString> helloWorld()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("helloWorld"), argumentList);
    }

    inline QDBusPendingReply<int> multiply(int a, int b)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(a) << QVariant::fromValue(b);
        return asyncCallWithArgumentList(QLatin1String("multiply"), argumentList);
    }

    inline QDBusPendingReply<int> subtraction(int a, int b)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(a) << QVariant::fromValue(b);
        return asyncCallWithArgumentList(QLatin1String("subtraction"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace com {
  namespace wp {
    namespace asp {
      typedef ::ComWpAspCalculatorInterface Calculator;
    }
  }
}
#endif