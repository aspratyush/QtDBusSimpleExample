#ifndef CCALCULATOR_H
#define CCALCULATOR_H

#include <QObject>
#include <iostream>

class CCalculator : public QObject
{
    Q_OBJECT
    //D-Bus interface name
    Q_CLASSINFO("D-Bus Interface", "com.wp.asp.Calculator")
public:
    explicit CCalculator(QObject *parent = 0);
    ~CCalculator(){}

signals:

public slots:

    /**
     * @brief helloWorld hello world from QDBus
     */
    virtual QString helloWorld();

    /**
     * @brief addition add two nos.
     * @param a int
     * @param b int
     * @return int
     */
    virtual int addition(int a, int b);

    /**
     * @brief subtraction subtract two nos.
     * @param a int
     * @param b int
     * @return int
     */
    virtual int subtraction(int a, int b);

    /**
     * @brief multiple multiply two nos.
     * @param a int
     * @param b int
     * @return int
     */
    virtual int multiply(int a, int b);

    /**
     * @brief divide divide two nos.
     * @param a int
     * @param b int
     * @return float
     */
    virtual double divide(int a, int b);

};

#endif // CCALCULATOR_H
