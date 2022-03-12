#ifndef CONJUNCTION_H
#define CONJUNCTION_H

#include <QDialog>

namespace Ui {
class conjunction;
}

class conjunction : public QDialog
{
    Q_OBJECT

public:
    explicit conjunction(QString msg, QWidget *parent = nullptr);
    ~conjunction();

signals:
    void msgSignal(QString msg);

private slots:
    void on_home_fromLocations_clicked();

    void on_for_conjButton_clicked();

    void on_and_conjButton_clicked();

    void on_nor_conjButton_clicked();

    void on_but_conjButton_clicked();

    void on_or_conjButton_clicked();

    void on_yet_conjButton_clicked();

    void on_both_conjButton_clicked();

    void on_whether_conjButton_clicked();

    void on_notOnly_conjButton_clicked();

    void on_butAlso_conjButton_clicked();

    void on_either_conjButton_clicked();

    void on_neither_conjButton_clicked();

    void on_just_conjButton_clicked();

    void on_so_conjButton_clicked();

    void on_after_conjButton_clicked();

    void on_as_conjButton_clicked();

    void on_ifOnlyIf_conjButton_clicked();

    void on_although_conjButton_clicked();

    void on_wherever_conjButton_clicked();

    void on_first_conjButton_clicked();

    void on_afterward_conjButton_clicked();

    void on_next_conjButton_clicked();

    void on_actually_conjButton_clicked();

    void on_also_conjButton_clicked();

    void on_besides_conjButton_clicked();

    void on_finally_conjButton_clicked();

    void on_hence_conjButton_clicked();

    void on_moreover_conjButton_clicked();

    void on_since_conjButton_clicked();

    void on_while_conjButton_clicked();

    void on_thus_conjButton_clicked();

    void on_backspace_fromLocations_clicked();

    void on_clear_fromLocations_clicked();

private:
    Ui::conjunction *ui;
};

#endif // CONJUNCTION_H
