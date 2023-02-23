#include "vaca.h"

void vaca::cazar()
{
    qDebug()<<"El animal ya no caza es cazado";
}

QString vaca::morir(int anoNacimiento, int anoFallecimiento, QString causeMuerte)
{
    int edad = anoFallecimiento - anoNacimiento;
    int resulado = edad * 2;
    QString suerte = "";

    if(resulado % 2 == 0){
         suerte = "par";
    }else{
          suerte = "inpar";
    }
    qDebug()<<"La fecha de su muerte:"<<anoFallecimiento<< "el numero es: "<< suerte <<
            "Vivio: "<<edad <<"años " << " Y murio por causa de:" << causeMuerte;

}

QString vaca::reencarnar(QString especie)
{
    especie = "El animal cambia de especie cuando muere: " +especie;
    return especie + " TU PUEDES HACERLO!!";

}


vaca::vaca(int _numeroPatas ,QString  _colorPelo, QString _genero, double _tamano, QString _nombre) : mamifero (_numeroPatas , _colorPelo,_genero, _tamano,_nombre)
{

}
