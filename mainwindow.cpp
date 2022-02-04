#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"


QString new_label;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

    delete ui;
}


void MainWindow::on_pb_0_clicked()
{
    new_label = ui->label->text() + "0";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_1_clicked()
{
    new_label = ui->label->text() + "1";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_2_clicked()
{
    new_label = ui->label->text() + "2";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_3_clicked()
{
    new_label = ui->label->text() + "3";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_4_clicked()
{
    new_label = ui->label->text() + "4";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_5_clicked()
{
    new_label = ui->label->text() + "5";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_6_clicked()
{
    new_label = ui->label->text() + "6";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_7_clicked()
{
    new_label = ui->label->text() + "7";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_8_clicked()
{
    new_label = ui->label->text() + "8";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_9_clicked()
{
    new_label = ui->label->text() + "9";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_00_clicked()
{
    new_label = ui->label->text() + "00";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_div_clicked()
{
    new_label = ui->label->text() + "/";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_multipl_clicked()
{
    new_label = ui->label->text() + "*";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_minus_clicked()
{
    new_label = ui->label->text() + "-";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_plus_clicked()
{
    new_label = ui->label->text() + "+";
    ui->label->setText(new_label);
}


void MainWindow::on_pb_result_clicked()
{
    new_label = ui->label->text() + "=";
    ui->label->setText(new_label);

    double a;
    double b;
    double val;

    enum actions {
        ADDITION = '+',
        SUBTRACTION = '-',
        MULTIPLICATION = '*',
        SEGMENTATION = '/'
    };
    QString tmp = "";
    actions action;

    foreach(QChar i, new_label) {
        tmp += i;
        if (i == '/' || i == '*' || i == '+' || i == '-') {

            action = actions(i);
            a = tmp.toDouble();
            tmp = "";
        } else if (i == '=') {
            b = tmp.toDouble();
        switch (action) {
            case ADDITION:
                val = a + b;
                new_label = ui->label->text() + QString::number(val);
                ui->label->setText(new_label);
                break;
            case SUBTRACTION:
                val = a - b;
                new_label = ui->label->text() + QString::number(val);
                ui->label->setText(new_label);
                break;
            case MULTIPLICATION:
                val = a * b;
                new_label = ui->label->text() + QString::number(val);
                ui->label->setText(new_label);
                break;
            case SEGMENTATION:
                val = a / b;
                new_label = ui->label->text() + QString::number(val);
                ui->label->setText(new_label);
                break;
            }
        } else {
            //std::cout << "Action not found" << std::endl;
        }
    }
}
