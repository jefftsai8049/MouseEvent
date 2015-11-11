#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>

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

    void on_recognize_pushButton_clicked();

    void on_min_horizontalSlider_valueChanged(int value);

    void on_max_horizontalSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;

    cv::Mat maskReal;
};

#endif // MAINWINDOW_H
