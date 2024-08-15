#include "sensormetric.h"
#include "analyser.h"
#include "loger.h"
#include "QDebug"
#include <QString>
#include <QStringBuilder>
#include <QDate>
#include <QTime>



SensorMetric::SensorMetric(QObject *parent)
    : QObject{parent}
{}



void SensorMetric:: Target(int value1, int value2, int max_lengs){



    Value1.push_back(value1);
    Value2.push_back(value2);


    QString date1 = QDate::currentDate(). toString("yyyy-MM-dd") % " | " % QTime::currentTime().toString("HH:mm:ss.zzz") % " | Sensor 1" " | Value = " % QString::number(value1) ;
    Value1_changed1.push_back(date1);

    QString date2 = QDate::currentDate(). toString("yyyy-MM-dd") % " | " % QTime::currentTime().toString("HH:mm:ss.zzz") % " | Sensor 2" " | Value = " % QString::number(value2) ;
    Value1_changed2.push_back(date2);


    if(Value1.size() == max_lengs && Value2.size() == max_lengs){

        qDebug()<< "Size " << max_lengs;

        Analyser * analyser = new Analyser();
        Loger * loger = new Loger();
        connect(this, &SensorMetric::onAnalyser, analyser, &Analyser::getData);
        connect(this, &SensorMetric::onLoger, loger, &Loger::getLoger);
        emit this -> onAnalyser(Value1, Value2);
        emit this -> onLoger(Value1_changed1, Value1_changed2);
       }
}





