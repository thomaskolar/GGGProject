#ifndef ADJECTIVES_H
#define ADJECTIVES_H

#include <QDialog>

namespace Ui {
class adjectives;
}

class adjectives : public QDialog
{
    Q_OBJECT

public:
    explicit adjectives(QString msg, QWidget *parent = nullptr);
    ~adjectives();

signals:
    void msgSignal(QString msg);

private slots:
    void on_home_fromLocations_clicked();

    void on_backspace_fromLocations_clicked();

    void on_clear_fromLocations_clicked();

    void on_annoyingButton_clicked();

    void on_awfulButton_clicked();

    void on_badButton_clicked();

    void on_boredButton_clicked();

    void on_calmButton_clicked();

    void on_busyButton_clicked();

    void on_carefulButton_clicked();

    void on_cleverButton_clicked();

    void on_colorfulButton_clicked();

    void on_crazyButton_clicked();

    void on_creepyButton_clicked();

    void on_cuteButton_clicked();

    void on_confusedButton_clicked();

    void on_delightfulButton_clicked();

    void on_difficultButton_clicked();

    void on_differentButton_clicked();

    void on_easyButton_clicked();

    void on_fancyButton_clicked();

    void on_evilButton_clicked();

    void on_filthyButton_clicked();

    void on_friendlyButton_clicked();

    void on_happyButton_clicked();

    void on_sadButton_clicked();

    void on_grumpyButton_clicked();

    void on_healthyButton_clicked();

    void on_helpfulButton_clicked();

    void on_horribleButton_clicked();

    void on_hungryButton_clicked();

    void on_hurtButton_clicked();

    void on_hilariousButton_clicked();

    void on_kindButton_clicked();

    void on_jealousButton_clicked();

    void on_lazyButton_clicked();

    void on_nervousButton_clicked();

    void on_niceButton_clicked();

    void on_poorButton_clicked();

    void on_scaryButton_clicked();

    void on_shinyButton_clicked();

    void on_powerfulButton_clicked();

    void on_sillyButton_clicked();

    void on_strangeButton_clicked();

    void on_tastyButton_clicked();

    void on_uglyButton_clicked();

    void on_soreButton_clicked();

    void on_tenseButton_clicked();

    void on_thankfulButton_clicked();

    void on_tiredButton_clicked();

    void on_upsetButton_clicked();

    void on_wrongButton_clicked();

    void on_wildButton_clicked();

    void on_worriedButton_clicked();

    void on_newButton_clicked();

    void on_longButton_clicked();

    void on_shortButton_clicked();

    void on_tallButton_clicked();

    void on_hotButton_clicked();

    void on_coldButton_clicked();

    void on_leftButton_clicked();

    void on_rightButton_clicked();

    void on_finalButton_clicked();

    void on_closeButton_clicked();

    void on_readyButton_clicked();

    void on_similarButton_clicked();

    void on_popularButton_clicked();

    void on_darkButton_clicked();

private:
    Ui::adjectives *ui;
};

#endif // ADJECTIVES_H
