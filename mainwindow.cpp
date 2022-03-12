#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "locations.h"
#include "nouns.h"
#include "verbs.h"
#include "adjectives.h"
#include "people.h"
#include "preposition.h"
#include "conjunction.h"
#include "interjection.h"

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

void MainWindow::msgSlot(QString msg)
{
    ui->lineEdit->setText(msg);
}

void MainWindow::on_locationsButton_clicked()
{
    locations* locPtr = new locations(ui->lineEdit->text(), this);

    //establish connection to the signal to grab the text
    this->connect(locPtr, SIGNAL(msgSignal(QString)),
          this, SLOT(msgSlot(QString)));


    locPtr->show();
    this->hide();
}


void MainWindow::on_nounsButton_clicked()
{
    nouns* nPtr = new nouns(ui->lineEdit->text(), this);

    //establish connection to the signal to grab the text
    this->connect(nPtr, SIGNAL(msgSignal(QString)),
          this, SLOT(msgSlot(QString)));

    nPtr->show();
    this->hide();
}


void MainWindow::on_verbButton_clicked()
{
    verbs* verbPtr = new verbs(ui->lineEdit->text(), this);

    //establish connection to the signal to grab the text
    this->connect(verbPtr, SIGNAL(msgSignal(QString)),
          this, SLOT(msgSlot(QString)));

    verbPtr->show();
    this->hide();
}


void MainWindow::on_peopleButton_clicked()
{
    people* peopPtr = new people(ui->lineEdit->text(), this);

    //establish connection to the signal to grab the text
    this->connect(peopPtr, SIGNAL(msgSignal(QString)),
          this, SLOT(msgSlot(QString)));

    peopPtr->show();
    this->hide();
}


void MainWindow::on_adjectivesButton_clicked()
{
    adjectives* adjPtr = new adjectives(ui->lineEdit->text(), this);

    //establish connection to the signal to grab the text
    this->connect(adjPtr, SIGNAL(msgSignal(QString)),
          this, SLOT(msgSlot(QString)));

    adjPtr->show();
    this->hide();
}


void MainWindow::on_prepositionButton_clicked()
{
    preposition* prepPtr = new preposition(ui->lineEdit->text(), this);

    //establish connection to the signal to grab the text
    this->connect(prepPtr, SIGNAL(msgSignal(QString)),
          this, SLOT(msgSlot(QString)));

    prepPtr->show();
    this->hide();
}


void MainWindow::on_conjunctionButton_clicked()
{
    conjunction* conPtr = new conjunction(ui->lineEdit->text(), this);

    //establish connection to the signal to grab the text
    this->connect(conPtr, SIGNAL(msgSignal(QString)),
          this, SLOT(msgSlot(QString)));

    conPtr->show();
    this->hide();
}


void MainWindow::on_interjectionButton_clicked()
{
    interjection* intPtr = new interjection(ui->lineEdit->text(), this);

    //establish connection to the signal to grab the text
    this->connect(intPtr, SIGNAL(msgSignal(QString)),
          this, SLOT(msgSlot(QString)));


    intPtr->show();
    this->hide();
}


void MainWindow::on_clearButton_clicked()
{
    ui->lineEdit->clear();
}


void MainWindow::on_backspaceButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    int pos = current.lastIndexOf(QChar(' '));
    ui->lineEdit->setText(current.left(pos));
}

