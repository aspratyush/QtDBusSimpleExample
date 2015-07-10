#ifndef MENUCREATOR_H
#define MENUCREATOR_H

#include <QObject>
#include <iostream>

#include "calculatorProxy.h"


class MenuCreator : public QObject
{
    Q_OBJECT
public:
    explicit MenuCreator(com::wp::asp::Calculator* iFaceObj);

signals:
    void finished();

public slots:

    void createMenu();

private:
    com::wp::asp::Calculator* mIFace;

};

#endif // MENUCREATOR_H
