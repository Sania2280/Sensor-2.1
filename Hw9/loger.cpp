#include "loger.h"
#include <QFile>
#include <QTextStream>

Loger::Loger(QObject *parent)
    : QObject{parent}
{}

void Loger::getLoger(QVector<QString> value1, QVector<QString> value2)
{
    QFile file("Sensor_value.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;
    QTextStream out(&file);
    out << "Sensor 1\n";
    for(auto& i: value1) out << i <<"\n";
    out << " \n\n";
    out << "Sensor 2\n";
    for(auto& i: value2) out << i <<"\n";
}
