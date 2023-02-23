#ifndef AVE_H
#define AVE_H

#include "animal.h"

class ave : public animal
{
public:
    void correr() override;
    QString matar(QString cazador);
    ave(int, QString, QString, double, QString);
};

#endif // AVE_H
