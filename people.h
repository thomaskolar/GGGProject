#ifndef PEOPLE_H
#define PEOPLE_H

#include <QDialog>

namespace Ui {
class people;
}

class people : public QDialog
{
    Q_OBJECT

public:
    explicit people(QString msg, QWidget *parent = nullptr);
    ~people();

signals:
    void msgSignal(QString msg);

private slots:
    void on_home_fromLocations_clicked();

    void on_clear_fromLocations_clicked();

    void on_backspace_fromLocations_clicked();

    void on_momButton_clicked();

    void on_dadButton_clicked();

    void on_sisterButton_clicked();

    void on_brotherButton_clicked();

    void on_auntButton_clicked();

    void on_uncleButton_clicked();

    void on_grandmaButton_clicked();

    void on_grandpaButton_clicked();

    void on_cousinButton_clicked();

    void on_sonButton_clicked();

    void on_daughterButton_clicked();

    void on_wifeButton_clicked();

    void on_husbandButton_clicked();

    void on_friendButton_clicked();

    void on_bestfriendButton_clicked();

    void on_girlfriendButton_clicked();

    void on_boyfriendButton_clicked();

    void on_teacherButton_clicked();

    void on_doctorButton_clicked();

    void on_professorButton_clicked();

    void on_nurseButton_clicked();

    void on_accountantButton_clicked();

    void on_workerButton_clicked();

    void on_salesmanButton_clicked();

    void on_cookButton_clicked();

    void on_assistantButton_clicked();

    void on_teammateButton_clicked();

private:
    Ui::people *ui;
};

#endif // PEOPLE_H
