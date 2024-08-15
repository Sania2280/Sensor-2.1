#include <QCoreApplication>
#include "sensor.h"
#include "sensormetric.h"
#include "connect_json.h"
#include <QCommandLineParser>


int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QCommandLineParser parser;

    int max_lengs = 0;
    bool stat;

    parser.setApplicationDescription("Sensor imitation");
    parser.addHelpOption();
    parser.addOption({ {"m", "memory"}, "Input max lengs", "memory"});
    parser.process(app);

    Connect_JSON * JSON = new Connect_JSON();
    Sensor * sens = new Sensor();
    SensorMetric * metric = new SensorMetric();

    if(parser.isSet("memory") ){
        int mem = parser.value("memory").toInt();
        qDebug() << "Size :" << mem;
         stat = true;
        max_lengs = mem;
    }

    qDebug()<<"qwer";
   // QObject::connect(JSON, &Connect_JSON::giveLengs, sens, &Sensor::GetLengs);
    QObject::connect(sens, &Sensor::CreateSignal, metric, &SensorMetric::Target);

    JSON -> Worck_with_json("config.json", sens, max_lengs, stat);



    return app.exec();
}
