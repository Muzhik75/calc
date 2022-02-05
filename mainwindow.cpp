#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"




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
    QString val = ui->label->text() + "0";
    ui->label->setText(val);
}


void MainWindow::on_pb_1_clicked()
{
    QString val = ui->label->text() + "1";
    ui->label->setText(val);
}


void MainWindow::on_pb_2_clicked()
{
    QString val = ui->label->text() + "2";
    ui->label->setText(val);
}


void MainWindow::on_pb_3_clicked()
{
    QString val = ui->label->text() + "3";
    ui->label->setText(val);
}


void MainWindow::on_pb_4_clicked()
{
    QString val = ui->label->text() + "4";
    ui->label->setText(val);
}


void MainWindow::on_pb_5_clicked()
{
    QString val = ui->label->text() + "5";
    ui->label->setText(val);
}


void MainWindow::on_pb_6_clicked()
{
    QString val = ui->label->text() + "6";
    ui->label->setText(val);
}


void MainWindow::on_pb_7_clicked()
{
    QString val = ui->label->text() + "7";
    ui->label->setText(val);
}


void MainWindow::on_pb_8_clicked()
{
    QString val = ui->label->text() + "8";
    ui->label->setText(val);
}


void MainWindow::on_pb_9_clicked()
{
    QString val = ui->label->text() + "9";
    ui->label->setText(val);
}


void MainWindow::on_pb_00_clicked()
{
    QString val = ui->label->text();
    ui->label->clear();
}


void MainWindow::on_pb_div_clicked()
{
    QString val = ui->label->text() + "/";
    ui->label->setText(val);
}


void MainWindow::on_pb_multipl_clicked()
{
    QString val = ui->label->text() + "*";
    ui->label->setText(val);
}


void MainWindow::on_pb_minus_clicked()
{
    QString val = ui->label->text() + "-";
    ui->label->setText(val);
}


void MainWindow::on_pb_plus_clicked()
{
    QString val = ui->label->text() + "+";
    ui->label->setText(val);
}


void MainWindow::on_pb_result_clicked()
{
    QString val = ui->label->text() + "=";
    std::string str=val.toStdString();

    double a;
    double b;


    enum actions {
        ADDITION = '+',
        SUBTRACTION = '-',
        MULTIPLICATION = '*',
        SEGMENTATION = '/'
    };
    std::string tmp = "";
    actions action;

    for (char i: str) {
        if (isdigit(i) || i== '.'){
            tmp += i;
        }else if (i == '/' || i == '*' || i == '+' || i == '-') {

            action = actions(i);
            a = std::stoi(tmp);
            tmp = "";
        } else if (i == '=') {
            b = std::stoi(tmp);
        switch (action) {
            case ADDITION:
                ui->label->setText(val+QString::number(a+b));
                break;
            case SUBTRACTION:
                ui->label->setText(val+QString::number(a-b));
                break;
            case MULTIPLICATION:
                ui->label->setText(val+QString::number(a*b));
                break;
            case SEGMENTATION:
                ui->label->setText(val+QString::number(a/b));
                break;
            }
        } else {
            //std::cout << "Action not found" << std::endl;
        }
    }
}
