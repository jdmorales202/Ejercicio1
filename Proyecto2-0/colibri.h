#ifndef COLIBRI_H
#define COLIBRI_H


#include "ave.h"
#include "muerte.h"


class colibri : public ave, public Imuerte
{
public:
    void correr() override;
    void tomaNectar();
    QString morir(int, int, QString );
    QString reencarnar(QString especie);
    colibri(int, QString, QString, double, QString);
};


#endif // COLIBRI_H
