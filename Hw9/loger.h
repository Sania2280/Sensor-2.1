#ifndef LOGER_H
#define LOGER_H

#include <QObject>

class Loger : public QObject
{
    Q_OBJECT
public:
    explicit Loger(QObject *parent = nullptr);

signals:
public slots:
    void getLoger(QVector<QString> value1, QVector<QString> value2);
};

#endif // LOGER_H
