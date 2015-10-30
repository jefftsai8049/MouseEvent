#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <opencv.hpp>

#include "math.h"

void mouseMove(int event,int x,int y,int flag,void* param);
void quadrantChange(int &xStart,int &xEnd,int &yStart,int &yEnd);
void imageLabeling(int event,int x,int y,int flag,void* param);

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
    void on_open_camera_pushButton_clicked();

    void on_grabcut_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
