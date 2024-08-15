#include "analyser.h"
#include <QDebug>

#include <algorithm>

Analyser::Analyser(QObject *parent)
    : QObject{parent}
{}

void Analyser::getData(QVector<int> value1, QVector<int> value2){


    std::for_each(value1.begin(), value1.end(), [&](int a){if (MAX1 < a) MAX1 = a;});
    qDebug()<<"Max1 = "<< MAX1;

    MIN1 = value1.first();

    std::for_each(value1.begin(), value1.end(),[&](int a){if (a < MIN1) MIN1 = a;});
    qDebug()<<"Min1 = "<< MIN1;




    std::sort(value1.begin(), value1.end(), [](int a, int b){return a < b;});

    \
    for(auto i = 0; i < value1.size();i++){AVERAGE1 += static_cast<__int64> (value1[i]);}

    AVERAGE1 = AVERAGE1 / value1.size();
    qDebug()<<"Average1 = " << AVERAGE1;


     size_t size1 = value1.size();

    if (size1 % 2 == 1) {
        // Непарна кількість елементів
        MEDIAN1 = static_cast<double>(value1[size1 / 2]);
    } else {
        // Парна кількість елементів
        MEDIAN1 = (static_cast<double>(value1[(size1 / 2) - 1]) + static_cast<double>(value1[size1 / 2])) / 2.0;
    }
     qDebug()<<"Median = " << MEDIAN1;





     std::for_each(value2.begin(), value2.end(), [&](int a){if (MAX2 < a) MAX2 = a;});
     qDebug()<<"Max2 = "<< MAX2;

     MIN2 = value2.first();

     std::for_each(value2.begin(), value2.end(),[&](int a){if (a < MIN2) MIN2 = a;});
     qDebug()<<"Min2 = "<< MIN2;




     std::sort(value2.begin(), value2.end(), [](int a, int b){return a < b;});

     \
         for(auto i = 0; i < value2.size();i++){AVERAGE2 += static_cast<__int64> (value2[i]);}

     AVERAGE2 = AVERAGE2 / value2.size();
     qDebug()<<"Average2 = " << AVERAGE2;


     size_t size2 = value2.size();

     if (size2 % 2 == 1) {
         // Непарна кількість елементів
         MEDIAN2 = static_cast<double>(value2[size2 / 2]);
     } else {
         // Парна кількість елементів
         MEDIAN2 = (static_cast<double>(value2[(size2 / 2) - 1]) + static_cast<double>(value2[size2 / 2])) / 2.0;
     }
     qDebug()<<"Median2 = " << MEDIAN2;
}
