#include "locations.h"
#include "ui_locations.h"

locations::locations(QString msg, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::locations)
{
    ui->setupUi(this);
    ui->lineEdit->setText(msg);
}

locations::~locations()
{
    delete ui;
}

void locations::on_home_fromLocations_clicked()
{
    //emit- send what was received to line edit
    emit msgSignal(ui->lineEdit->text());

    parentWidget()->show();
    this->close();
}

void locations::on_clear_fromLocations_clicked()
{
    ui->lineEdit->clear();
}


void locations::on_backspace_fromLocations_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    int pos = current.lastIndexOf(QChar(' '));
    ui->lineEdit->setText(current.left(pos));
}




void locations::on_homeButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " home");
}


void locations::on_houseButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " house");
}


void locations::on_schoolButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " school");
}


void locations::on_hospitalButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " hospital");
}


void locations::on_playgroundButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " playground");
}


void locations::on_parkButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " park");
}


void locations::on_fieldButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " field");
}


void locations::on_lakeButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " lake");
}


void locations::on_oceanButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " ocean");
}


void locations::on_beachButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " beach");
}


void locations::on_mountainButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " mountain");
}


void locations::on_restrauntButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " restraunt");
}


void locations::on_hotelButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " hotel");
}


void locations::on_resortButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " resort");
}


void locations::on_airportButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " airport");
}


void locations::on_apartmentButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " apartment");
}


void locations::on_garageButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " garage");
}


void locations::on_parkinglotButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " parking lot");
}


void locations::on_backyardButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " backyard");
}


void locations::on_frontyardButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " frontyard");
}


void locations::on_drivewayButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " driveway");
}


void locations::on_kitchenButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " kitchen");
}


void locations::on_storeButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " store");
}


void locations::on_bakeryButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " bakery");
}


void locations::on_factoryButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " factory");
}


void locations::on_stadiumButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " stadium");
}


void locations::on_bankButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " bank");
}


void locations::on_busstopButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " bus stop");
}


void locations::on_movietheatreButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " movie theatre");
}


void locations::on_zooButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " zoo");
}


void locations::on_libraryButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " library");
}


void locations::on_classroomButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " classroom");
}


void locations::on_restroomButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " restroom");
}


void locations::on_racetrackButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " race track");
}


void locations::on_gasstationButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " gas station");
}


void locations::on_farmButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " farm");
}


void locations::on_townButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " town");
}


void locations::on_poolButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " pool");
}


void locations::on_courtButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " court");
}


void locations::on_spaceButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " space");
}


void locations::on_churchButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " church");
}


void locations::on_bedroomButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " bedroom");
}


void locations::on_livingroomButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " livingroom");
}


void locations::on_cafeteriaButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " cafeteria");
}


void locations::on_gymButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " gym");
}


void locations::on_streetButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " street");
}


void locations::on_dogparkButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " dog park");
}


void locations::on_riverwalkButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " river walk");
}


void locations::on_basketballButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " basketball court");
}


void locations::on_footballButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " football field");
}


void locations::on_mallButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " mall");
}


void locations::on_waterparkButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " waterpark");
}


void locations::on_amusementButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " amusement park");
}


void locations::on_mechanicButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " mechanic shop");
}


void locations::on_dealershipButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " dealership");
}


void locations::on_hobbystoreButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " hobby store");
}


void locations::on_computerButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " computer store");
}


void locations::on_barButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " bar");
}


void locations::on_golfButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " golf course");
}


void locations::on_minigolfButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " mini-golf");
}


void locations::on_bowlingButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " bowling alley");
}


void locations::on_ranchButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " ranch");
}


void locations::on_officeButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " office");
}


void locations::on_subwayButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " subway");
}


void locations::on_trainButton_clicked()
{
    QString current;
    current = ui->lineEdit->text();
    ui->lineEdit->setText(current + " train");
}

