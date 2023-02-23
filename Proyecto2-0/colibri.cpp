#include "colibri.h"

void colibri::correr()
{
  qDebug() << "más que correr me gusta volar";
}

void colibri::tomaNectar()
{
    qDebug() << "Se alimenta de las plantas";
}

QString colibri::morir(int anoNacimiento, int anoFallecimiento, QString causeMuerte)
{
    int calculo;
    calculo = anoFallecimiento - anoNacimiento;
    qDebug()<< "la fecha de su muerte es: " << anoFallecimiento << "Vivio: " << calculo
            <<"Años y la causa de muerte fue: " << causeMuerte;
}

QString colibri::reencarnar(QString especie)
{
    especie = "De un pajaro se convirtio en un: " + especie;

    return especie;
}

colibri::colibri(int _numeroPatas ,QString  _colorPelo, QString _genero, double _tamano, QString _nombre) : ave(_numeroPatas , _colorPelo,_genero, _tamano,_nombre)
{

}
