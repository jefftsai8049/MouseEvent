/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *open_camera_pushButton;
    QPushButton *grabcut_pushButton;
    QPushButton *recognize_pushButton;
    QSlider *min_horizontalSlider;
    QSlider *max_horizontalSlider;
    QLabel *max_label;
    QLabel *min_label;
    QLabel *number_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        open_camera_pushButton = new QPushButton(centralWidget);
        open_camera_pushButton->setObjectName(QStringLiteral("open_camera_pushButton"));
        open_camera_pushButton->setGeometry(QRect(10, 10, 161, 71));
        grabcut_pushButton = new QPushButton(centralWidget);
        grabcut_pushButton->setObjectName(QStringLiteral("grabcut_pushButton"));
        grabcut_pushButton->setGeometry(QRect(10, 90, 161, 61));
        recognize_pushButton = new QPushButton(centralWidget);
        recognize_pushButton->setObjectName(QStringLiteral("recognize_pushButton"));
        recognize_pushButton->setGeometry(QRect(10, 160, 161, 61));
        min_horizontalSlider = new QSlider(centralWidget);
        min_horizontalSlider->setObjectName(QStringLiteral("min_horizontalSlider"));
        min_horizontalSlider->setGeometry(QRect(210, 30, 160, 22));
        min_horizontalSlider->setMaximum(500);
        min_horizontalSlider->setValue(70);
        min_horizontalSlider->setOrientation(Qt::Horizontal);
        max_horizontalSlider = new QSlider(centralWidget);
        max_horizontalSlider->setObjectName(QStringLiteral("max_horizontalSlider"));
        max_horizontalSlider->setGeometry(QRect(210, 110, 160, 22));
        max_horizontalSlider->setMaximum(500);
        max_horizontalSlider->setValue(140);
        max_horizontalSlider->setOrientation(Qt::Horizontal);
        max_label = new QLabel(centralWidget);
        max_label->setObjectName(QStringLiteral("max_label"));
        max_label->setGeometry(QRect(220, 80, 47, 12));
        min_label = new QLabel(centralWidget);
        min_label->setObjectName(QStringLiteral("min_label"));
        min_label->setGeometry(QRect(210, 10, 47, 12));
        number_label = new QLabel(centralWidget);
        number_label->setObjectName(QStringLiteral("number_label"));
        number_label->setGeometry(QRect(240, 180, 61, 51));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(36);
        number_label->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        open_camera_pushButton->setText(QApplication::translate("MainWindow", "Open Camera", 0));
        grabcut_pushButton->setText(QApplication::translate("MainWindow", "GrabCut", 0));
        recognize_pushButton->setText(QApplication::translate("MainWindow", "Recognize", 0));
        max_label->setText(QString());
        min_label->setText(QString());
        number_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
