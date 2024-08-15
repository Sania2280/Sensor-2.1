#ifndef ANALYSER_H
#define ANALYSER_H

#include <QObject>
#include <QVector>

class Analyser : public QObject
{
    Q_OBJECT
public:
    explicit Analyser(QObject *parent = nullptr);

public slots:
    void getData(QVector<int> value1, QVector<int> value2);

signals:
private:
    int MAX1 = 0;
    int MIN1= 0;
   __int64 AVERAGE1 = 0;
   __int64 MEDIAN1 = 0;

   int MAX2 = 0;
   int MIN2 = 0;
   __int64 AVERAGE2 = 0;
   __int64 MEDIAN2 = 0;

};

#endif // ANALYSER_H
