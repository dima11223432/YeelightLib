#include "bulb.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
// For example

    try {
        YeelightLib::Bulb bulb("192.168.1.49", "55443");
        printf("Connection: %s", bulb.TestConnection());

        if (bulb.TestConnection()) {
            bulb.SetPower(true, "smooth", 1500);
        } else {
            printf("Error: No connection to the bulb\n");
        }
    } catch (const std::exception& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception occurred" << std::endl;
    }
    QCoreApplication a(argc, argv);

    return a.exec();
}
