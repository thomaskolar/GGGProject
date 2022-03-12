#ifndef INTERJECTION_H
#define INTERJECTION_H

#include <QDialog>

namespace Ui {
class interjection;
}

class interjection : public QDialog
{
    Q_OBJECT

public:
    explicit interjection(QString msg, QWidget *parent = nullptr);
    ~interjection();

signals:
    void msgSignal(QString msg);

private slots:
    void on_home_fromLocations_clicked();

    void on_eek_intButton_clicked();

    void on_wellwell_intButton_clicked();

    void on_ooh_intButton_clicked();

    void on_fooey_intButton_clicked();

    void on_zoinks_intButton_clicked();

    void on_noWay_intButton_clicked();

    void on_youBet_intButton_clicked();

    void on_yum_intButton_clicked();

    void on_yooHoo_intButton_clicked();

    void on_bah_intButton_clicked();

    void on_oho_intButton_clicked();

    void on_zap_intButton_clicked();

    void on_veryWell_intButton_clicked();

    void on_whoa_intButton_clicked();

    void on_sleepTight_intButton_clicked();

    void on_noThanks_intButton_clicked();

    void on_nooo_intButton_clicked();

    void on_snap_intButton_clicked();

    void on_there_intButton_clicked();

    void on_whew_intButton_clicked();

    void on_duh_intButton_clicked();

    void on_psst_intButton_clicked();

    void on_sorry_intButton_clicked();

    void on_meh_intButton_clicked();

    void on_uhOh_intButton_clicked();

    void on_wellDone_intButton_clicked();

    void on_touche_intButton_clicked();

    void on_gee_intButton_clicked();

    void on_thanks_intButton_clicked();

    void on_justASec_intButton_clicked();

    void on_sigh_intButton_clicked();

    void on_bravo_intButton_clicked();

    void on_clear_fromLocations_clicked();

    void on_backspace_fromLocations_clicked();

private:
    Ui::interjection *ui;
};

#endif // INTERJECTION_H
