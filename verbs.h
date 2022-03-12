#ifndef VERBS_H
#define VERBS_H

#include <QDialog>

namespace Ui {
class verbs;
}

class verbs : public QDialog
{
    Q_OBJECT

public:
    explicit verbs(QString msg, QWidget *parent = nullptr);
    ~verbs();

signals:
    void msgSignal(QString msg);

private slots:
    void on_home_fromLocations_clicked();

    void on_clear_fromLocations_clicked();

    void on_backspace_fromLocations_clicked();

private:
    Ui::verbs *ui;
};

#endif // VERBS_H
