#include <QCoreApplication>
#include <QDebug>

class Persona
{
    //atributos
public:
        QString nombre;
        int edad;
        QString colorPelo;
     //metodos

        void Caminar();
        void Saltar();
        void Gritar();
        Persona(QString nombre, int edad, QString colorPelo);
};

Persona::Persona(QString _nombre, int _edad, QString _colorPelo )
{
    nombre = _nombre;
    edad = _edad;
    colorPelo = _colorPelo;
};
void Persona::Gritar()
{
    qDebug() << "El mudo está gritando";
}

void Persona::Saltar()
{
 qDebug()<<" salta lazo";
}

void Persona::Caminar()
{
    qDebug() << " corre media maraton";
}


class Pedro : public Persona
{
public:
    QString cancion;

    Pedro(QString, int, QString, QString);
    void TocarPiano();
};


Pedro::Pedro(QString _nombre, int _edad, QString _colorPelo, QString _cancion) : Persona (_nombre, _edad, _colorPelo)
{
    this->cancion = _cancion;

};

void Pedro::TocarPiano()
{
  qDebug() << "La Rosalia";
};

class Pepita : public Persona
{
public:
    QString cancion;

    void TocarFlauta();
    Pepita(QString, int, QString, QString);

};
Pepita::Pepita(QString _nombre, int _edad, QString _colorPelo, QString _cancion) : Persona (_nombre, _edad, _colorPelo)
{
    this->cancion = _cancion;

};

void Pepita::TocarFlauta()
{
  qDebug() << "inis Mona";
};



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   Pedro p1("Pedro", 26, "Cafe", "chikichiki");
   p1.TocarPiano();
   p1.Caminar();
   qDebug()<< p1.nombre << "tiene pelo de color " << p1.colorPelo <<
              " De nombre" << p1.nombre << "Y su edad es: "<< p1.edad <<" años";

   Pepita p2("Pepita", 18, "verdes", "Inis Mona");
   p2.Caminar();
   p2.TocarFlauta();




    return a.exec();
}
