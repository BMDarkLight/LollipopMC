#ifndef LANDINGWINDOW_H
#define LANDINGWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class LandingWindow;
}
QT_END_NAMESPACE

class LandingWindow : public QMainWindow
{
    Q_OBJECT

public:
    LandingWindow(QWidget *parent = nullptr);
    ~LandingWindow();

private:
    Ui::LandingWindow *ui;
};
#endif // LANDINGWINDOW_H
