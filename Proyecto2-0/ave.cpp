#include "ave.h"

void ave::correr()
{
    qDebug()<<"Mas que correr me gusta volar";
}

QString ave::matar(QString cazadores)
{
    cazadores = "Se llama: " + cazadores;
    return cazadores;
}



ave::ave(int _numeroPatas ,QString  _colorPelo, QString _genero, double _tamano, QString _nombre) : animal(_numeroPatas, _colorPelo, _genero, _tamano, _nombre )
{

}
