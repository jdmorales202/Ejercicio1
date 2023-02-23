#ifndef ANIMAL_H
#define ANIMAL_H

#include <QDebug>

class animal
{   //atributos
    int numeroPatas;
    QString colorPelo;
    QString genero;
    double tamano;
    QString nombre;


public:
    //metodos
    void comer();
    virtual void correr();
    void nocturno();
    animal(int, QString, QString, double, QString);
};

#endif // ANIMAL_H
