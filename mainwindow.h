#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void msgSlot(QString msg);



private slots:
    void on_locationsButton_clicked();

    void on_nounsButton_clicked();

    void on_verbButton_clicked();

    void on_peopleButton_clicked();

    void on_adjectivesButton_clicked();

    void on_prepositionButton_clicked();

    void on_conjunctionButton_clicked();

    void on_interjectionButton_clicked();

    void on_clearButton_clicked();

    void on_backspaceButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
