/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open_File;
    QAction *action_Close_File;
    QAction *action_Quit;
    QWidget *centralWidget;
    QLabel *fileNameLabel;
    QPushButton *QuitpushButton;
    QPushButton *showResultspushButton;
    QPushButton *PreFixOutputFilePushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *FCSRadioButton;
    QRadioButton *InOctetsRadioButton;
    QPushButton *GenCSVpushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menu_Help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(813, 727);
        action_Open_File = new QAction(MainWindow);
        action_Open_File->setObjectName(QString::fromUtf8("action_Open_File"));
        action_Close_File = new QAction(MainWindow);
        action_Close_File->setObjectName(QString::fromUtf8("action_Close_File"));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        fileNameLabel = new QLabel(centralWidget);
        fileNameLabel->setObjectName(QString::fromUtf8("fileNameLabel"));
        fileNameLabel->setGeometry(QRect(20, 20, 221, 21));
        QFont font;
        font.setPointSize(14);
        fileNameLabel->setFont(font);
        QuitpushButton = new QPushButton(centralWidget);
        QuitpushButton->setObjectName(QString::fromUtf8("QuitpushButton"));
        QuitpushButton->setGeometry(QRect(30, 260, 81, 32));
        showResultspushButton = new QPushButton(centralWidget);
        showResultspushButton->setObjectName(QString::fromUtf8("showResultspushButton"));
        showResultspushButton->setGeometry(QRect(30, 190, 113, 32));
        PreFixOutputFilePushButton = new QPushButton(centralWidget);
        PreFixOutputFilePushButton->setObjectName(QString::fromUtf8("PreFixOutputFilePushButton"));
        PreFixOutputFilePushButton->setGeometry(QRect(20, 50, 131, 32));
        PreFixOutputFilePushButton->setFont(font);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 100, 128, 79));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        FCSRadioButton = new QRadioButton(widget);
        FCSRadioButton->setObjectName(QString::fromUtf8("FCSRadioButton"));
        FCSRadioButton->setFont(font);
        FCSRadioButton->setChecked(true);

        verticalLayout->addWidget(FCSRadioButton);

        InOctetsRadioButton = new QRadioButton(widget);
        InOctetsRadioButton->setObjectName(QString::fromUtf8("InOctetsRadioButton"));
        InOctetsRadioButton->setFont(font);

        verticalLayout->addWidget(InOctetsRadioButton);

        GenCSVpushButton = new QPushButton(widget);
        GenCSVpushButton->setObjectName(QString::fromUtf8("GenCSVpushButton"));

        verticalLayout->addWidget(GenCSVpushButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 813, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menuFile->addAction(action_Open_File);
        menuFile->addAction(action_Close_File);
        menuFile->addSeparator();
        menuFile->addAction(action_Quit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "WTM4K Stats", nullptr));
        action_Open_File->setText(QCoreApplication::translate("MainWindow", "&Open File", nullptr));
        action_Close_File->setText(QCoreApplication::translate("MainWindow", "&Close File", nullptr));
        action_Quit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
        fileNameLabel->setText(QCoreApplication::translate("MainWindow", "File Name", nullptr));
        QuitpushButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        showResultspushButton->setText(QCoreApplication::translate("MainWindow", "Show Results", nullptr));
#if QT_CONFIG(tooltip)
        PreFixOutputFilePushButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        PreFixOutputFilePushButton->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        PreFixOutputFilePushButton->setText(QCoreApplication::translate("MainWindow", "Pre-fix csv name", nullptr));
#if QT_CONFIG(tooltip)
        FCSRadioButton->setToolTip(QCoreApplication::translate("MainWindow", "Generate in-fcs-errors csv", nullptr));
#endif // QT_CONFIG(tooltip)
        FCSRadioButton->setText(QCoreApplication::translate("MainWindow", "in-fcs-errors", nullptr));
        InOctetsRadioButton->setText(QCoreApplication::translate("MainWindow", "in-octets", nullptr));
        GenCSVpushButton->setText(QCoreApplication::translate("MainWindow", "Generate CSV", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
