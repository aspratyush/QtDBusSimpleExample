#ifndef ICALCULATOR_H
#define ICALCULATOR_H

#include <QObject>

class ICalculator : public QObject
{
    Q_OBJECT
    //D-Bus interface name
    Q_CLASSINFO("D-Bus Interface", "com.wp.asp.Calculator")
public:
    //explicit ICalculator(QObject *parent = 0);

    virtual ~ICalculator(){}

signals:

public slots:

    /**
     * @brief helloWorld hello world from QDBus
     */
    virtual QString helloWorld() = 0;

    /**
     * @brief addition add two nos.
     * @param a int
     * @param b int
     * @return int
     */
    virtual int addition(int a, int b) = 0;

    /**
     * @brief subtraction subtract two nos.
     * @param a int
     * @param b int
     * @return int
     */
    virtual int subtraction(int a, int b) = 0;

    /**
     * @brief multiple multiply two nos.
     * @param a int
     * @param b int
     * @return int
     */
    virtual int multiply(int a, int b) = 0;

    /**
     * @brief divide divide two nos.
     * @param a int
     * @param b int
     * @return float
     */
    virtual double divide(int a, int b) = 0;

};

#endif // ICALCULATOR_H
