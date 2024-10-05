#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cylinder = nullptr;
    reducedCylinder = nullptr;

    QDoubleValidator* val = new QDoubleValidator(0.0, 100.0, 2, this);
    val -> setLocale(QLocale::C);
    val -> setNotation(QDoubleValidator::StandardNotation);


    ui -> heightLineEdit -> setValidator(val);
    ui -> radiusLineEdit -> setValidator(val);

    ui -> reducedHeightLineEdit -> setValidator(val);
    ui -> reducedRadiusLineEdit -> setValidator(val);
    ui -> reduceLineEdit -> setValidator(val);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_calculateSquareButton_clicked()
{
    if(ui -> heightLineEdit -> text() == "" || ui -> radiusLineEdit -> text() == "") {
        QMessageBox::warning(nullptr, "Предупреждение", "Не все поля для этого подсчёта введены");
    }
    else {
        double height = ui -> heightLineEdit -> text().replace(',', '.').toDouble();
        double radius = ui -> radiusLineEdit -> text().replace(',', '.').toDouble();

        cylinder = new CalculateCylinderSquare(radius, height);

        double result = cylinder -> CalculateSquare();
        ui -> resultLineEdit -> setText(QString::number(result));
    }
}


void MainWindow::on_calculateReducedSquareButton_clicked()
{
    if(ui -> reducedHeightLineEdit -> text() == "" || ui -> reduceLineEdit -> text() == "" || ui -> reducedRadiusLineEdit -> text() == "") {
        QMessageBox::warning(nullptr, "Предупреждение", "Не все поля для этого подсчёта введены");
    }
    else {
        double height = ui -> reducedHeightLineEdit -> text().replace(',', '.').toDouble();
        double radius = ui -> reducedRadiusLineEdit -> text().replace(',', '.').toDouble();
        double c = ui -> reduceLineEdit -> text().replace(',', '.').toDouble();

        reducedCylinder = new CalculateAndReduceCylinderSquare(radius, height, c);

        double result = reducedCylinder -> CalculateReducedSquare();
        ui -> reducedResultLineEdit -> setText(QString::number(result));


    }
}

