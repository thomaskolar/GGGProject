#ifndef NOUNS_H
#define NOUNS_H

#include <QDialog>

namespace Ui {
class nouns;
}

class nouns : public QDialog
{
    Q_OBJECT

public:
    explicit nouns(QString msg, QWidget *parent = nullptr);
    ~nouns();

    //signals send data to the slots
    signals:
        void msgSignal(QString msg);

private slots:
    void on_home_fromLocations_clicked();

    void on_actorButton_clicked();

    void on_adultButton_clicked();

    void on_boyButton_clicked();

    void on_girlButton_clicked();

    void on_babyButton_clicked();

    void on_familyButton_clicked();

    void on_busButton_clicked();

    void on_carButton_clicked();

    void on_animalButton_clicked();

    void on_dogButton_clicked();

    void on_catButton_clicked();

    void on_bridgeButton_clicked();

    void on_breakfastButton_clicked();

    void on_lunchButton_clicked();

    void on_dinnerButton_clicked();

    void on_grassButton_clicked();

    void on_handButton_clicked();

    void on_feetButton_clicked();

    void on_headButton_clicked();

    void on_daughterButton_clicked();

    void on_sonButton_clicked();

    void on_jobButton_clicked();

    void on_glassButton_clicked();

    void on_morningButton_clicked();

    void on_afternoonButton_clicked();

    void on_studentButton_clicked();

    void on_waterButton_clicked();

    void on_yesterdayButton_clicked();

    void on_todayButton_clicked();

    void on_tomorrowButton_clicked();

    void on_laptopButton_clicked();

    void on_phoneButton_clicked();

    void on_televisionButton_clicked();

    void on_treeButton_clicked();

    void on_vegetablesButton_clicked();

    void on_candyButton_clicked();

    void on_drinkButton_clicked();

    void on_foodButton_clicked();

    void on_bookButton_clicked();

    void on_watchButton_clicked();

    void on_shoeButton_clicked();

    void on_shirtButton_clicked();

    void on_pantsButton_clicked();

    void on_paperButton_clicked();

    void on_pencilButton_clicked();

    void on_websiteButton_clicked();

    void on_tableButton_clicked();

    void on_chairButton_clicked();

    void on_fireButton_clicked();

    void on_colorButton_clicked();

    void on_hatButton_clicked();

    void on_ballButton_clicked();

    void on_rainButton_clicked();

    void on_stormButton_clicked();

    void on_backpackButton_clicked();

    void on_deskButton_clicked();

    void on_stateButton_clicked();

    void on_countryButton_clicked();

    void on_cityButton_clicked();

    void on_roadButton_clicked();

    void on_teaButton_clicked();

    void on_coffeeButton_clicked();

    void on_sodaButton_clicked();

    void on_gloveButton_clicked();

    void on_bedButton_clicked();

    void on_clear_fromLocations_clicked();

    void on_backspace_fromLocations_clicked();

private:
    Ui::nouns *ui;
};

#endif // NOUNS_H

