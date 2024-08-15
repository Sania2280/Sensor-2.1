#ifndef SENSORMETRIC_H
#define SENSORMETRIC_H

#include <QObject>

class SensorMetric : public QObject
{
    Q_OBJECT
public:
    explicit SensorMetric(QObject *parent = nullptr);



    void Target(int value1, int value2, int max_lengs);

signals:
    void onAnalyser(QVector<int> value1, QVector<int> value2);
    void onLoger(QVector<QString> value1, QVector<QString> value2);

private:
    QVector<int> Value1;
    QVector<int> Value2;
    QVector<QString> Value1_changed1;
    QVector<QString> Value1_changed2;
};

#endif // SENSORMETRIC_H
