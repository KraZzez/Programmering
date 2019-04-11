#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Innanför de här måsvingarna
    // skriver man sådant som ska hända när
    // programmet startas
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()), this, SLOT(grisRosa()));
}

// private slots
void MainWindow::grisRosa()
{
    ui->lineEdit->setText("Gais är bajs");
}

MainWindow::~MainWindow()
{
    delete ui;
}
