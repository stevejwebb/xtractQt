/********************************************************************************
** Form generated from reading UI file 'csvoutput.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSVOUTPUT_H
#define UI_CSVOUTPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSVOutput
{
public:
    QScrollArea *outputCSVscrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *CSVOutput)
    {
        if (CSVOutput->objectName().isEmpty())
            CSVOutput->setObjectName(QString::fromUtf8("CSVOutput"));
        CSVOutput->resize(648, 719);
        outputCSVscrollArea = new QScrollArea(CSVOutput);
        outputCSVscrollArea->setObjectName(QString::fromUtf8("outputCSVscrollArea"));
        outputCSVscrollArea->setGeometry(QRect(20, 30, 611, 671));
        outputCSVscrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 609, 669));
        outputCSVscrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(CSVOutput);

        QMetaObject::connectSlotsByName(CSVOutput);
    } // setupUi

    void retranslateUi(QWidget *CSVOutput)
    {
        CSVOutput->setWindowTitle(QCoreApplication::translate("CSVOutput", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CSVOutput: public Ui_CSVOutput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSVOUTPUT_H
