#ifndef SENSOR_H
#define SENSOR_H

#include <QObject>

class Sensor : public QObject
{
    Q_OBJECT
public:
    explicit Sensor(QObject *parent = nullptr);
    void GenerateSignal(int max_lengs);
    int maxxx;

signals:
    void CreateSignal(int value1, int value2, int max_lengs);

public slots:
    void GetLengs(int max_size);


};

#endif // SENSOR_H
