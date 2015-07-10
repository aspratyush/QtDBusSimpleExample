#ifndef CCALCULATOR_H
#define CCALCULATOR_H

#include <QObject>
#include <iostream>

/**** project includes ****/
#include "icalculator.h"

class CCalculator : public ICalculator
{
    Q_OBJECT
// shifted to Interface class
//    //D-Bus interface name
//    Q_CLASSINFO("D-Bus Interface", "com.wp.asp.Calculator")
public:
    explicit CCalculator();
    ~CCalculator(){}

    /**
     * @brief helloWorld implements the inherited hello world
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
     * @brief subtraction implements the inherited subtraction
     * @param a int
     * @param b int
     * @return int
     */
    virtual int subtraction(int a, int b);

    /**
     * @brief multiple implements the inherited multiply
     * @param a int
     * @param b int
     * @return int
     */
    virtual int multiply(int a, int b);

    /**
     * @brief divide implements the inherited divide
     * @param a int
     * @param b int
     * @return float
     */
    virtual double divide(int a, int b);

signals:

    //void computationCompleted(QString str);

public slots:

};

#endif // CCALCULATOR_H
