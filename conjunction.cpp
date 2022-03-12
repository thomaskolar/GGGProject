#include "conjunction.h"
#include "ui_conjunction.h"

conjunction::conjunction(QString msg, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::conjunction)
{
    ui->setupUi(this);
    ui->lineEdit->setText(msg);
}

conjunction::~conjunction()
{
    delete ui;
}

void conjunction::on_home_fromLocations_clicked()
{
    //emit- send what was received to line edit
    emit msgSignal(ui->lineEdit->text());

    parentWidget()->show();
    this->close();
}


void conjunction::on_for_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " for");
}


void conjunction::on_and_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " and");
}


void conjunction::on_nor_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " nor");
}


void conjunction::on_but_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " but");
}


void conjunction::on_or_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " or");
}


void conjunction::on_yet_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " yet");
}


void conjunction::on_both_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " both");
}


void conjunction::on_whether_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " whether");
}


void conjunction::on_notOnly_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " not only");
}


void conjunction::on_butAlso_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " but also");
}


void conjunction::on_either_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " either");
}


void conjunction::on_neither_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " neither");
}


void conjunction::on_just_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " just");
}


void conjunction::on_so_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " so");
}


void conjunction::on_after_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " after");
}


void conjunction::on_as_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " as");
}


void conjunction::on_ifOnlyIf_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " if only if");
}


void conjunction::on_although_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " although");
}


void conjunction::on_wherever_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " wherever");
}


void conjunction::on_first_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " first");
}


void conjunction::on_afterward_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " afterward");
}


void conjunction::on_next_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " next");
}


void conjunction::on_actually_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " actually");
}


void conjunction::on_also_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " also");
}


void conjunction::on_besides_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " besides");
}


void conjunction::on_finally_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " finally");
}


void conjunction::on_hence_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " hence");
}


void conjunction::on_moreover_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " moreover");
}


void conjunction::on_since_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " since");
}


void conjunction::on_while_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " while");
}


void conjunction::on_thus_conjButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " thus");
}


void conjunction::on_backspace_fromLocations_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    int pos = current.lastIndexOf(QChar(' '));
    ui->lineEdit->setText(current.left(pos));
}


void conjunction::on_clear_fromLocations_clicked()
{
    ui->lineEdit->clear();
}

