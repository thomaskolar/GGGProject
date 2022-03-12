#include "interjection.h"
#include "ui_interjection.h"

interjection::interjection(QString msg, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::interjection)
{
    ui->setupUi(this);
    ui->lineEdit->setText(msg);
}

interjection::~interjection()
{
    delete ui;
}

void interjection::on_home_fromLocations_clicked()
{
    //emit- send what was received to line edit
    emit msgSignal(ui->lineEdit->text());

    parentWidget()->show();
    this->close();
}


void interjection::on_eek_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " eek!");
}


void interjection::on_wellwell_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " well, well!");
}


void interjection::on_ooh_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " ooh!");
}


void interjection::on_fooey_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " fooey!");
}


void interjection::on_zoinks_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " zoinks!");
}


void interjection::on_noWay_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " no way!");
}


void interjection::on_youBet_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " you bet!");
}


void interjection::on_yum_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " yum!");
}


void interjection::on_yooHoo_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " yoo-hoo!");
}


void interjection::on_bah_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " bah!");
}


void interjection::on_oho_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " oho!");
}


void interjection::on_zap_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " zap!");
}


void interjection::on_veryWell_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " very well!");
}


void interjection::on_whoa_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " whoa!");
}


void interjection::on_sleepTight_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " sleep tight!");
}


void interjection::on_noThanks_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " no thanks!");
}


void interjection::on_nooo_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " nooo!");
}


void interjection::on_snap_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " snap!");
}


void interjection::on_there_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " there!");
}


void interjection::on_whew_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " whew!");
}


void interjection::on_duh_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " duh!");
}


void interjection::on_psst_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " psst!");
}


void interjection::on_sorry_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " sorry!");
}


void interjection::on_meh_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " meh!");
}


void interjection::on_uhOh_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " uh-oh!");
}


void interjection::on_wellDone_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " well done!");
}


void interjection::on_touche_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " touche!");
}


void interjection::on_gee_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " gee!");
}


void interjection::on_thanks_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " thanks!");
}


void interjection::on_justASec_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " just a sec!");
}


void interjection::on_sigh_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " sigh!");
}


void interjection::on_bravo_intButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " bravo!");
}


void interjection::on_clear_fromLocations_clicked()
{
    ui->lineEdit->clear();
}


void interjection::on_backspace_fromLocations_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    int pos = current.lastIndexOf(QChar(' '));
    ui->lineEdit->setText(current.left(pos));
}

