#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>



cv::Mat img;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_open_camera_pushButton_clicked()
{
    //讀取攝影機影像
    cv::VideoCapture cap;
    cap.open(0);

    cv::Mat src;
    cap.read(src);
    cap.release();

    cv::imshow("src",src);
    cv::setMouseCallback("src",mouseMove,0);

    img = src.clone();
}

void quadrantChange(int &xStart,int &xEnd,int &yStart,int &yEnd)
{
    //II quadrant
    if(xEnd-xStart < 0 && yEnd-yStart > 0)
    {
        std::swap(xStart,xEnd);
    }
    //III quadrant
    if(xEnd-xStart < 0 && yEnd-yStart < 0)
    {
        std::swap(xStart,xEnd);
        std::swap(yStart,yEnd);
    }
    //IV quadrant
    if(xEnd-xStart > 0 && yEnd-yStart < 0)
    {
        std::swap(yStart,yEnd);
    }

}

void mouseMove(int event, int x, int y, int flag, void *param)
{
    //要畫的圖
    cv::Mat dst;
    dst = img.clone();

    //記錄起始結束點
    static int xStartAbs,yStartAbs,xStart,xEnd,yStart,yEnd;

    //滑鼠左鍵按下，紀錄起始點
    if(event == 1)
    {
        xStartAbs = x;
        yStartAbs = y;

        xStart = x;
        yStart = y;
    }
    //滑鼠左鍵按著
    else if(event == 0)
    {
        if(flag == 1)
        {
            xStart = xStartAbs;
            yStart = yStartAbs;
            xEnd = x;
            yEnd = y;
            //處理不同象限的起始結束點
            quadrantChange(xStart,xEnd,yStart,yEnd);
            //畫長方形
            cv::rectangle(dst,cv::Rect(xStart,yStart,xEnd-xStart,yEnd-yStart),cv::Scalar(255,255,255),3);
            cv::imshow("src",dst);
        }
    }
    //滑鼠左鍵放開
    else if(event == 4)
    {
        xStart = xStartAbs;
        yStart = yStartAbs;
        xEnd = x;
        yEnd = y;

        quadrantChange(xStart,xEnd,yStart,yEnd);
        cv::rectangle(dst,cv::Rect(xStart,yStart,xEnd-xStart
                     ,yEnd-yStart),cv::Scalar(255,255,255),3);

        cv::imshow("src",dst);
        //存檔
        cv::imwrite("cut.bmp",dst(cv::Rect(xStart,yStart,xEnd-xStart,yEnd-yStart)));
    }
}
