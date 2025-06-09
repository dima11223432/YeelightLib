#include "bulb.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
// For example

    YeelightLib::Bulb bulb("192.168.1.49","55443");
    printf("Connection: %s",bulb.TestConnection());
    QCoreApplication a(argc, argv);

    return a.exec();
}
