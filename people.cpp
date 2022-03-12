#include "people.h"
#include "ui_people.h"

people::people(QString msg, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::people)
{
    ui->setupUi(this);
    ui->lineEdit->setText(msg);
}

people::~people()
{
    delete ui;
}

void people::on_home_fromLocations_clicked()
{
    //emit- send what was received to line edit
    emit msgSignal(ui->lineEdit->text());

    parentWidget()->show();
    this->close();
}

void people::on_clear_fromLocations_clicked()
{
    ui->lineEdit->clear();
}


void people::on_backspace_fromLocations_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    int pos = current.lastIndexOf(QChar(' '));
    ui->lineEdit->setText(current.left(pos));
}


void people::on_momButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " mom");
}


void people::on_dadButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " dad");
}


void people::on_sisterButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " sister");
}


void people::on_brotherButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " brother");
}


void people::on_auntButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " aunt");
}


void people::on_uncleButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " uncle");
}


void people::on_grandmaButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " grandma");
}


void people::on_grandpaButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " grandpa");
}


void people::on_cousinButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " cousin");
}


void people::on_sonButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " son");
}


void people::on_daughterButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " daughter");
}


void people::on_wifeButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " wife");
}


void people::on_husbandButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " husband");
}


void people::on_friendButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " friend");
}


void people::on_bestfriendButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " bestfriend");
}


void people::on_girlfriendButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " girlfriend");
}


void people::on_boyfriendButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " boyfriend");
}


void people::on_teacherButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " teacher");
}


void people::on_doctorButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " doctor");
}


void people::on_professorButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " professor");
}


void people::on_nurseButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " nurse");
}


void people::on_accountantButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " accountant");
}


void people::on_workerButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " worker");
}


void people::on_salesmanButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " salesman");
}


void people::on_cookButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " bed");
}


void people::on_assistantButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " cook");
}


void people::on_teammateButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " teammate");
}

