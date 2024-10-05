#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "calculatecylindersquare.h"
#include "calculateandreducecylindersquare.h"
#include <QDebug>
#include <QMessageBox>
#include <QDoubleValidator>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_calculateSquareButton_clicked();

    void on_calculateReducedSquareButton_clicked();

private:
    Ui::MainWindow *ui;
    CalculateCylinderSquare* cylinder;
    CalculateAndReduceCylinderSquare* reducedCylinder;

};
#endif // MAINWINDOW_H
