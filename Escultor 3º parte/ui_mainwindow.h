/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "drawmanager.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *createNewSculptor;
    QPushButton *createNewVoxel;
    QPushButton *cutVoxel;
    QPushButton *createNewBox;
    QPushButton *cutBox;
    QPushButton *createNewSphere;
    QPushButton *cutSphere;
    QPushButton *createNewEllipsoid;
    QPushButton *cutEllipsoid;
    QPushButton *setPlaneXY;
    QPushButton *setPlaneXZ;
    QPushButton *setPlaneYZ;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_3;
    QLabel *label_6;
    QSpinBox *spinBox_5;
    QLabel *label_7;
    QSpinBox *spinBox_6;
    QLabel *label_8;
    QSpinBox *spinBox_7;
    QGroupBox *groupBox;
    QLabel *label_2;
    QSpinBox *spinBox;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QSpinBox *spinBox_3;
    QLabel *label_5;
    QSpinBox *spinBox_4;
    QGroupBox *groupBox_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label;
    QPushButton *pushButton_15;
    QGroupBox *groupBox_6;
    QLabel *label_12;
    QSlider *horizontalSlider_11;
    QSpinBox *spinBox_11;
    QLabel *label_13;
    QSlider *horizontalSlider_12;
    QSpinBox *spinBox_12;
    QLabel *label_14;
    QSlider *horizontalSlider_13;
    QSpinBox *spinBox_13;
    DrawManager *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 768);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        createNewSculptor = new QPushButton(centralWidget);
        createNewSculptor->setObjectName(QString::fromUtf8("createNewSculptor"));
        createNewSculptor->setGeometry(QRect(10, 10, 60, 60));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/new_item.png"), QSize(), QIcon::Normal, QIcon::Off);
        createNewSculptor->setIcon(icon);
        createNewSculptor->setIconSize(QSize(32, 32));
        createNewVoxel = new QPushButton(centralWidget);
        createNewVoxel->setObjectName(QString::fromUtf8("createNewVoxel"));
        createNewVoxel->setGeometry(QRect(80, 10, 60, 60));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons/color_cube.png"), QSize(), QIcon::Normal, QIcon::Off);
        createNewVoxel->setIcon(icon1);
        createNewVoxel->setIconSize(QSize(32, 32));
        cutVoxel = new QPushButton(centralWidget);
        cutVoxel->setObjectName(QString::fromUtf8("cutVoxel"));
        cutVoxel->setGeometry(QRect(150, 10, 60, 60));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons/empty_cube.png"), QSize(), QIcon::Normal, QIcon::Off);
        cutVoxel->setIcon(icon2);
        cutVoxel->setIconSize(QSize(32, 32));
        createNewBox = new QPushButton(centralWidget);
        createNewBox->setObjectName(QString::fromUtf8("createNewBox"));
        createNewBox->setGeometry(QRect(220, 10, 60, 60));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons/colour_rubik.png"), QSize(), QIcon::Normal, QIcon::Off);
        createNewBox->setIcon(icon3);
        createNewBox->setIconSize(QSize(32, 32));
        cutBox = new QPushButton(centralWidget);
        cutBox->setObjectName(QString::fromUtf8("cutBox"));
        cutBox->setGeometry(QRect(290, 10, 60, 60));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons/empty_rubik.png"), QSize(), QIcon::Normal, QIcon::Off);
        cutBox->setIcon(icon4);
        cutBox->setIconSize(QSize(32, 32));
        createNewSphere = new QPushButton(centralWidget);
        createNewSphere->setObjectName(QString::fromUtf8("createNewSphere"));
        createNewSphere->setGeometry(QRect(360, 10, 60, 60));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("icons/colour_globe.png"), QSize(), QIcon::Normal, QIcon::Off);
        createNewSphere->setIcon(icon5);
        createNewSphere->setIconSize(QSize(32, 32));
        cutSphere = new QPushButton(centralWidget);
        cutSphere->setObjectName(QString::fromUtf8("cutSphere"));
        cutSphere->setGeometry(QRect(430, 10, 60, 60));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("icons/empty_globe.png"), QSize(), QIcon::Normal, QIcon::Off);
        cutSphere->setIcon(icon6);
        cutSphere->setIconSize(QSize(32, 32));
        createNewEllipsoid = new QPushButton(centralWidget);
        createNewEllipsoid->setObjectName(QString::fromUtf8("createNewEllipsoid"));
        createNewEllipsoid->setGeometry(QRect(500, 10, 60, 60));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("icons/colour_ellipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        createNewEllipsoid->setIcon(icon7);
        createNewEllipsoid->setIconSize(QSize(32, 32));
        cutEllipsoid = new QPushButton(centralWidget);
        cutEllipsoid->setObjectName(QString::fromUtf8("cutEllipsoid"));
        cutEllipsoid->setGeometry(QRect(570, 10, 60, 60));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("icons/empty_ellipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        cutEllipsoid->setIcon(icon8);
        cutEllipsoid->setIconSize(QSize(32, 32));
        setPlaneXY = new QPushButton(centralWidget);
        setPlaneXY->setObjectName(QString::fromUtf8("setPlaneXY"));
        setPlaneXY->setGeometry(QRect(640, 10, 60, 60));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("icons/xy.png"), QSize(), QIcon::Normal, QIcon::Off);
        setPlaneXY->setIcon(icon9);
        setPlaneXY->setIconSize(QSize(48, 48));
        setPlaneXZ = new QPushButton(centralWidget);
        setPlaneXZ->setObjectName(QString::fromUtf8("setPlaneXZ"));
        setPlaneXZ->setGeometry(QRect(780, 10, 60, 60));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("icons/zx.png"), QSize(), QIcon::Normal, QIcon::Off);
        setPlaneXZ->setIcon(icon10);
        setPlaneXZ->setIconSize(QSize(48, 48));
        setPlaneYZ = new QPushButton(centralWidget);
        setPlaneYZ->setObjectName(QString::fromUtf8("setPlaneYZ"));
        setPlaneYZ->setGeometry(QRect(710, 10, 60, 60));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("icons/yz.png"), QSize(), QIcon::Normal, QIcon::Off);
        setPlaneYZ->setIcon(icon11);
        setPlaneYZ->setIconSize(QSize(48, 48));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(720, 80, 291, 621));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));
        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 30, 270, 120));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 30, 41, 17));
        spinBox_5 = new QSpinBox(groupBox_3);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(130, 30, 48, 26));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 60, 41, 17));
        spinBox_6 = new QSpinBox(groupBox_3);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setGeometry(QRect(130, 60, 48, 26));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 90, 41, 17));
        spinBox_7 = new QSpinBox(groupBox_3);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setGeometry(QRect(130, 90, 48, 26));
        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 160, 270, 101));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 50, 41, 17));
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(130, 50, 71, 26));
        groupBox_2 = new QGroupBox(groupBox_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 270, 270, 120));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 30, 21, 17));
        spinBox_2 = new QSpinBox(groupBox_2);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(97, 30, 71, 26));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 60, 21, 17));
        spinBox_3 = new QSpinBox(groupBox_2);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(97, 60, 71, 26));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 90, 21, 17));
        spinBox_4 = new QSpinBox(groupBox_2);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(97, 90, 71, 26));
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 400, 270, 151));
        groupBox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 30, 21, 17));
        label_9->setStyleSheet(QString::fromUtf8(""));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(170, 60, 21, 17));
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(170, 90, 16, 17));
        doubleSpinBox = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(190, 25, 61, 26));
        doubleSpinBox->setStyleSheet(QString::fromUtf8(""));
        doubleSpinBox->setDecimals(3);
        doubleSpinBox->setMaximum(1.000000000000000);
        doubleSpinBox->setSingleStep(0.004000000000000);
        doubleSpinBox->setValue(1.000000000000000);
        doubleSpinBox_2 = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(190, 55, 61, 26));
        doubleSpinBox_2->setDecimals(3);
        doubleSpinBox_2->setMaximum(1.000000000000000);
        doubleSpinBox_2->setSingleStep(0.004000000000000);
        doubleSpinBox_2->setValue(1.000000000000000);
        doubleSpinBox_3 = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(190, 85, 61, 26));
        doubleSpinBox_3->setDecimals(3);
        doubleSpinBox_3->setMaximum(1.000000000000000);
        doubleSpinBox_3->setSingleStep(0.004000000000000);
        doubleSpinBox_3->setValue(1.000000000000000);
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(170, 120, 21, 17));
        label_15->setStyleSheet(QString::fromUtf8(""));
        doubleSpinBox_4 = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(190, 120, 61, 26));
        doubleSpinBox_4->setDecimals(3);
        doubleSpinBox_4->setMaximum(1.000000000000000);
        doubleSpinBox_4->setSingleStep(0.004000000000000);
        doubleSpinBox_4->setValue(1.000000000000000);
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 111, 91));
        label->setStyleSheet(QString::fromUtf8(""));
        pushButton_15 = new QPushButton(groupBox_4);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(48, 560, 191, 41));
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 540, 700, 161));
        groupBox_6->setLayoutDirection(Qt::LeftToRight);
        groupBox_6->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));
        groupBox_6->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 40, 67, 17));
        horizontalSlider_11 = new QSlider(groupBox_6);
        horizontalSlider_11->setObjectName(QString::fromUtf8("horizontalSlider_11"));
        horizontalSlider_11->setGeometry(QRect(30, 40, 531, 16));
        horizontalSlider_11->setOrientation(Qt::Horizontal);
        spinBox_11 = new QSpinBox(groupBox_6);
        spinBox_11->setObjectName(QString::fromUtf8("spinBox_11"));
        spinBox_11->setGeometry(QRect(570, 40, 101, 26));
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 80, 67, 17));
        horizontalSlider_12 = new QSlider(groupBox_6);
        horizontalSlider_12->setObjectName(QString::fromUtf8("horizontalSlider_12"));
        horizontalSlider_12->setGeometry(QRect(30, 80, 531, 16));
        horizontalSlider_12->setOrientation(Qt::Horizontal);
        spinBox_12 = new QSpinBox(groupBox_6);
        spinBox_12->setObjectName(QString::fromUtf8("spinBox_12"));
        spinBox_12->setGeometry(QRect(570, 75, 101, 26));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 120, 67, 17));
        horizontalSlider_13 = new QSlider(groupBox_6);
        horizontalSlider_13->setObjectName(QString::fromUtf8("horizontalSlider_13"));
        horizontalSlider_13->setGeometry(QRect(30, 120, 531, 16));
        horizontalSlider_13->setOrientation(Qt::Horizontal);
        spinBox_13 = new QSpinBox(groupBox_6);
        spinBox_13->setObjectName(QString::fromUtf8("spinBox_13"));
        spinBox_13->setGeometry(QRect(570, 115, 101, 26));
        plainTextEdit = new DrawManager(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(-10, 90, 691, 441));
        plainTextEdit->setMouseTracking(true);
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        createNewSculptor->setToolTip(QCoreApplication::translate("MainWindow", "nova escultura", nullptr));
#endif // QT_CONFIG(tooltip)
        createNewSculptor->setText(QCoreApplication::translate("MainWindow", "nw sculptor", nullptr));
#if QT_CONFIG(tooltip)
        createNewVoxel->setToolTip(QCoreApplication::translate("MainWindow", "pintar voxel", nullptr));
#endif // QT_CONFIG(tooltip)
        createNewVoxel->setText(QCoreApplication::translate("MainWindow", "nw voxel", nullptr));
#if QT_CONFIG(tooltip)
        cutVoxel->setToolTip(QCoreApplication::translate("MainWindow", "remover voxel", nullptr));
#endif // QT_CONFIG(tooltip)
        cutVoxel->setText(QCoreApplication::translate("MainWindow", "cut voxel", nullptr));
#if QT_CONFIG(tooltip)
        createNewBox->setToolTip(QCoreApplication::translate("MainWindow", "pintar cubo", nullptr));
#endif // QT_CONFIG(tooltip)
        createNewBox->setText(QCoreApplication::translate("MainWindow", "nw box", nullptr));
#if QT_CONFIG(tooltip)
        cutBox->setToolTip(QCoreApplication::translate("MainWindow", "remover cubo", nullptr));
#endif // QT_CONFIG(tooltip)
        cutBox->setText(QCoreApplication::translate("MainWindow", "cut box", nullptr));
#if QT_CONFIG(tooltip)
        createNewSphere->setToolTip(QCoreApplication::translate("MainWindow", "pintar esfera", nullptr));
#endif // QT_CONFIG(tooltip)
        createNewSphere->setText(QCoreApplication::translate("MainWindow", "nw sphere", nullptr));
#if QT_CONFIG(tooltip)
        cutSphere->setToolTip(QCoreApplication::translate("MainWindow", "remover esfera", nullptr));
#endif // QT_CONFIG(tooltip)
        cutSphere->setText(QCoreApplication::translate("MainWindow", "cut spher", nullptr));
#if QT_CONFIG(tooltip)
        createNewEllipsoid->setToolTip(QCoreApplication::translate("MainWindow", "pintar ellipsoid", nullptr));
#endif // QT_CONFIG(tooltip)
        createNewEllipsoid->setText(QCoreApplication::translate("MainWindow", "nw ellip", nullptr));
#if QT_CONFIG(tooltip)
        cutEllipsoid->setToolTip(QCoreApplication::translate("MainWindow", "remover ellipsoid", nullptr));
#endif // QT_CONFIG(tooltip)
        cutEllipsoid->setText(QCoreApplication::translate("MainWindow", "cut ellip", nullptr));
#if QT_CONFIG(tooltip)
        setPlaneXY->setToolTip(QCoreApplication::translate("MainWindow", "visualizar plano XY", nullptr));
#endif // QT_CONFIG(tooltip)
        setPlaneXY->setText(QCoreApplication::translate("MainWindow", "xy", nullptr));
#if QT_CONFIG(tooltip)
        setPlaneXZ->setToolTip(QCoreApplication::translate("MainWindow", "visualizar plano ZX", nullptr));
#endif // QT_CONFIG(tooltip)
        setPlaneXZ->setText(QCoreApplication::translate("MainWindow", "xz", nullptr));
#if QT_CONFIG(tooltip)
        setPlaneYZ->setToolTip(QCoreApplication::translate("MainWindow", "visualizar plano YZ", nullptr));
#endif // QT_CONFIG(tooltip)
        setPlaneYZ->setText(QCoreApplication::translate("MainWindow", "yz", nullptr));
        groupBox_4->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Retangulo", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "dimX", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "dimY", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "dimZ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Raio", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Ellipse", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ry", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Rz", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Cor", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label->setText(QString());
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "aplicar", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "localiza\303\247\303\243o", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
