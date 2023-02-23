#include "mamifero.h"

void mamifero::cazar()
{
    qDebug()<<"El animal mata para alimentarce";
}

mamifero::mamifero(int _numeroPatas ,QString  _colorPelo, QString _genero, double _tamano, QString _nombre) : animal(_numeroPatas, _colorPelo, _genero, _tamano, _nombre)
{

}
