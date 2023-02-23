#ifndef VACA_H
#define VACA_H

#include "muerte.h"
#include "mamifero.h"

class vaca : public mamifero, public Imuerte
{
public:
    void cazar() override;
    QString morir(int, int, QString);
    QString reencarnar(QString);
    vaca(int, QString, QString, double, QString);
};

#endif // VACA_H
