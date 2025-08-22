#include "landingwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LandingWindow w;
    w.show();
    return a.exec();
}
