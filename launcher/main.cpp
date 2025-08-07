#include "LauncherWindow.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    LauncherWindow window;
    window.setWindowTitle("Minecraft Launcher");
    window.resize(800, 600); // Optional: set initial size
    window.show();

    return app.exec();
}