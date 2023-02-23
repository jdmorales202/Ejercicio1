#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "animal.h"

class mamifero : public animal
{
public:
    virtual void cazar();
    mamifero(int, QString, QString, double, QString);
};

#endif // MAMIFERO_H
