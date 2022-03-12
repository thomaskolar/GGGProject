#ifndef PREPOSITION_H
#define PREPOSITION_H

#include <QDialog>

namespace Ui {
class preposition;
}

class preposition : public QDialog
{
    Q_OBJECT

public:
    explicit preposition(QString msg, QWidget *parent = nullptr);
    ~preposition();

signals:
    void msgSignal(QString msg);

private slots:
    void on_home_fromLocations_clicked();

    void on_backspace_fromLocations_clicked();

    void on_clear_fromLocations_clicked();

private:
    Ui::preposition *ui;
};

#endif // PREPOSITION_H
