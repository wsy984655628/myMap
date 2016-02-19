#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QUrl url("file:///C:/project/Qt/myqt/myMap/map.html");
    ui->webView->setUrl(url);
}

MainWindow::~MainWindow()
{
    delete ui;
}

