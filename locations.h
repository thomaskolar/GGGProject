#ifndef LOCATIONS_H
#define LOCATIONS_H

#include <QDialog>

namespace Ui {
class locations;
}

class locations : public QDialog
{
    Q_OBJECT

public:
    explicit locations(QString msg, QWidget *parent = nullptr);
    ~locations();

//signals send data to the slots
signals:
    void msgSignal(QString msg);

private slots:
    void on_home_fromLocations_clicked();

    void on_clear_fromLocations_clicked();

    void on_backspace_fromLocations_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_14_clicked();

    void on_homeButton_clicked();

    void on_houseButton_clicked();

    void on_schoolButton_clicked();

    void on_hospitalButton_clicked();

    void on_playgroundButton_clicked();

    void on_parkButton_clicked();

    void on_fieldButton_clicked();

    void on_lakeButton_clicked();

    void on_oceanButton_clicked();

    void on_beachButton_clicked();

    void on_mountainButton_clicked();

    void on_restrauntButton_clicked();

    void on_hotelButton_clicked();

    void on_resortButton_clicked();

    void on_airportButton_clicked();

    void on_apartmentButton_clicked();

    void on_garageButton_clicked();

    void on_parkinglotButton_clicked();

    void on_backyardButton_clicked();

    void on_frontyardButton_clicked();

    void on_drivewayButton_clicked();

    void on_kitchenButton_clicked();

    void on_storeButton_clicked();

    void on_bakeryButton_clicked();

    void on_factoryButton_clicked();

    void on_stadiumButton_clicked();

    void on_bankButton_clicked();

    void on_busstopButton_clicked();

    void on_movietheatreButton_clicked();

    void on_zooButton_clicked();

    void on_libraryButton_clicked();

    void on_classroomButton_clicked();

    void on_restroomButton_clicked();

    void on_racetrackButton_clicked();

    void on_gasstationButton_clicked();

    void on_farmButton_clicked();

    void on_townButton_clicked();

    void on_poolButton_clicked();

    void on_courtButton_clicked();

    void on_spaceButton_clicked();

    void on_churchButton_clicked();

    void on_bedroomButton_clicked();

    void on_livingroomButton_clicked();

    void on_cafeteriaButton_clicked();

    void on_gymButton_clicked();

    void on_streetButton_clicked();

    void on_dogparkButton_clicked();

    void on_riverwalkButton_clicked();

    void on_basketballButton_clicked();

    void on_footballButton_clicked();

    void on_mallButton_clicked();

    void on_waterparkButton_clicked();

    void on_amusementButton_clicked();

    void on_mechanicButton_clicked();

    void on_dealershipButton_clicked();

    void on_hobbystoreButton_clicked();

    void on_computerButton_clicked();

    void on_barButton_clicked();

    void on_golfButton_clicked();

    void on_minigolfButton_clicked();

    void on_bowlingButton_clicked();

    void on_ranchButton_clicked();

    void on_officeButton_clicked();

    void on_subwayButton_clicked();

    void on_trainButton_clicked();

private:
    Ui::locations *ui;
};

#endif // LOCATIONS_H
