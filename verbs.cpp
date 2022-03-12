#include "verbs.h"
#include "ui_verbs.h"

verbs::verbs(QString msg, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::verbs)
{
    ui->setupUi(this);
    ui->lineEdit->setText(msg);
}

verbs::~verbs()
{
    delete ui;
}

void verbs::on_home_fromLocations_clicked()
{
    //emit- send what was received to line edit
    emit msgSignal(ui->lineEdit->text());

    parentWidget()->show();
    this->close();
}


void verbs::on_clear_fromLocations_clicked()
{
    ui->lineEdit->clear();
}


void verbs::on_backspace_fromLocations_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    int pos = current.lastIndexOf(QChar(' '));
    ui->lineEdit->setText(current.left(pos));
}

