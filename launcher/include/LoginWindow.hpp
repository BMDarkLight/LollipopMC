#ifndef LAUNCHERWINDOW_HPP
#define LAUNCHERWINDOW_HPP

#include <QMainWindow>

class LauncherWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LauncherWindow(QWidget *parent = nullptr);
    ~LauncherWindow();
};

#endif