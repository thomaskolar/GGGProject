#include "adjectives.h"
#include "ui_adjectives.h"

adjectives::adjectives(QString msg, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adjectives)
{
    ui->setupUi(this);
    ui->lineEdit->setText(msg);
}

adjectives::~adjectives()
{
    delete ui;
}

void adjectives::on_home_fromLocations_clicked()
{
    //emit- send what was received to line edit
    emit msgSignal(ui->lineEdit->text());

    parentWidget()->show();
    this->close();
}

void adjectives::on_backspace_fromLocations_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    int pos = current.lastIndexOf(QChar(' '));
    ui->lineEdit->setText(current.left(pos));
}


void adjectives::on_clear_fromLocations_clicked()
{
    ui->lineEdit->clear();
}


void adjectives::on_annoyingButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " annoying");
}


void adjectives::on_awfulButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " awful");
}


void adjectives::on_badButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " bad");
}


void adjectives::on_boredButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " bored");
}


void adjectives::on_calmButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " calm");
}


void adjectives::on_busyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " busy");
}


void adjectives::on_carefulButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " careful");
}


void adjectives::on_cleverButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " clever");
}


void adjectives::on_colorfulButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " colorful");
}


void adjectives::on_crazyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " crazy");
}


void adjectives::on_creepyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " creepy");
}


void adjectives::on_cuteButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " cute");
}


void adjectives::on_confusedButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " confused");
}


void adjectives::on_delightfulButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " delightful");
}


void adjectives::on_difficultButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " difficult");
}


void adjectives::on_differentButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " different");
}


void adjectives::on_easyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " easy");
}


void adjectives::on_fancyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " fancy");
}


void adjectives::on_evilButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " evil");
}


void adjectives::on_filthyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " filthy");
}


void adjectives::on_friendlyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " friendly");
}


void adjectives::on_happyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " happy");
}


void adjectives::on_sadButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " sad");
}


void adjectives::on_grumpyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " grumpy");
}


void adjectives::on_healthyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " healthy");
}


void adjectives::on_helpfulButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " helpful");
}


void adjectives::on_horribleButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " horrible");
}


void adjectives::on_hungryButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " hungry");
}


void adjectives::on_hurtButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " hurt");
}


void adjectives::on_hilariousButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " hilarious");
}


void adjectives::on_kindButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " kind");
}


void adjectives::on_jealousButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " jealous");
}


void adjectives::on_lazyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " lazy");
}


void adjectives::on_nervousButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " nervous");
}


void adjectives::on_niceButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " nice");
}


void adjectives::on_poorButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " poor");
}


void adjectives::on_scaryButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " scary");
}


void adjectives::on_shinyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " shiny");
}


void adjectives::on_powerfulButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " powerful");
}


void adjectives::on_sillyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " silly");
}


void adjectives::on_strangeButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " strange");
}


void adjectives::on_tastyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " tasty");
}


void adjectives::on_uglyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " ugly");
}


void adjectives::on_soreButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " sore");
}


void adjectives::on_tenseButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " tense");
}


void adjectives::on_thankfulButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " thankful");
}


void adjectives::on_tiredButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " tired");
}


void adjectives::on_upsetButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " upset");
}


void adjectives::on_wrongButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " wrong");
}


void adjectives::on_wildButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " wild");
}


void adjectives::on_worriedButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " worried");
}


void adjectives::on_newButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " new");
}


void adjectives::on_longButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " long");
}


void adjectives::on_shortButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " short");
}


void adjectives::on_tallButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " tall");
}


void adjectives::on_hotButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " hot");
}


void adjectives::on_coldButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " cold");
}


void adjectives::on_leftButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " left");
}


void adjectives::on_rightButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " right");
}


void adjectives::on_finalButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " final");
}


void adjectives::on_closeButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " close");
}


void adjectives::on_readyButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " ready");
}


void adjectives::on_similarButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " similar");
}


void adjectives::on_popularButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " popular");
}


void adjectives::on_darkButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " dark");
}

