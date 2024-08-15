#include "sensor.h"
#include <QRandomGenerator>
#include <QDebug>
#include<QVector>
#include <unistd.h>



Sensor::Sensor(QObject *parent)
    : QObject{parent}
{}


void Sensor::GetLengs(int max_lengs){

    Sensor::GetLengs(max_lengs);

}

void Sensor::GenerateSignal(int max_lengs){
   int value1;
   int value2;   
   int counter = 0;

    for (auto i = 0; i <max_lengs; i++){
     value1 = QRandomGenerator::global()->bounded(INT_MAX);
     value2 = QRandomGenerator::global()->bounded(INT_MAX);

      emit CreateSignal(value1, value2, max_lengs);
     counter++;
      if(counter == max_lengs)return;

     usleep(5000);
    }

}


