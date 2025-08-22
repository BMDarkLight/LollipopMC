#include "landingwindow.h"
#include "./ui_landingwindow.h"

LandingWindow::LandingWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LandingWindow)
{
    ui->setupUi(this);
}

LandingWindow::~LandingWindow()
{
    delete ui;
}
