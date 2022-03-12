#include "preposition.h"
#include "ui_preposition.h"

preposition::preposition(QString msg, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preposition)
{
    ui->setupUi(this);
    ui->lineEdit->setText(msg);
}

preposition::~preposition()
{
    delete ui;
}

void preposition::on_home_fromLocations_clicked()
{
    //emit- send what was received to line edit
    emit msgSignal(ui->lineEdit->text());

    parentWidget()->show();
    this->close();
}

void preposition::on_backspace_fromLocations_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    int pos = current.lastIndexOf(QChar(' '));
    ui->lineEdit->setText(current.left(pos));
}


void preposition::on_clear_fromLocations_clicked()
{
    ui->lineEdit->clear();
}

