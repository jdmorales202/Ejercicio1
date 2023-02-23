#include "animal.h"

void animal::comer()
{
    qDebug()<<"El animal come 3 veces al día";
}

void animal::correr()
{
   qDebug()<<"El animal corre 5km por hora";
}

void animal::nocturno()
{
    qDebug()<<"el animal sale más de noche";
}

animal::animal(int _numeroPatas ,QString  _colorPelo, QString _genero, double _tamano, QString _nombre)
{
     numeroPatas = _numeroPatas;
     colorPelo = _colorPelo;
     genero = _genero;
     tamano = _tamano;
     nombre = _nombre;
}
