#ifndef MUERTE_H
#define MUERTE_H
#include <QDebug>

class Imuerte
{
public:
      QString morir(int anoNacimiento, int anoFallecimiento, QString causeMuerte);
      QString reencarnar(QString especie )
      {
          especie = "El animal reencarno en: " +especie;
          return especie;
      }
};






#endif // MUERTE_H
