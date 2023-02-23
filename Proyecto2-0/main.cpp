#include <QCoreApplication>
#include <QDebug>

#include "animal.h"
#include "ave.h"
#include "mamifero.h"
#include "muerte.h"
#include "vaca.h"
#include "colibri.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vaca Lola(4, "blanca", "Femenino", 44, "LOLA");
    Lola.morir(2015, 2020, "Para una Hamburguesa");
    qDebug()<<Lola.reencarnar("Cocodrilo");
    Lola.comer();
    Lola.cazar();

    colibri Roberto(2, "Amarillo", "Masculino", 22, "Roberto");
    Roberto.morir(2015, 2018, "Muerte Natural");
    qDebug()<<Roberto.reencarnar("Tiburon");
    Roberto.comer();
    Roberto.correr();



    return a.exec();
}
