#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "settings.h"
#include "loading.h"
#include "game.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Exit_clicked();
    void on_Settings_clicked();
    void on_StartGame_clicked();

private:
    Ui::MainWindow *ui;
    Settings settings;
    Loading loading;
};

#endif // MAINWINDOW_H