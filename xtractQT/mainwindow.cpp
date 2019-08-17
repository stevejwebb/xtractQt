#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtDebug"
#include "QInputDialog"
#include "QFile"
#include "QFileDialog"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    //menu actions
    connect(ui->action_Quit, &QAction::triggered,
            QApplication::instance(), &QApplication::quit);
    connect(ui->action_Open_File, &QAction::triggered,
            this, &MainWindow::openFile);
    //gui actions
    connect(ui->QuitpushButton, &QPushButton::clicked,
            QApplication::instance(), &QApplication::quit);
    connect(ui->GenCSVpushButton, &QPushButton::clicked,
            this, &MainWindow::genCSVFile);
    connect(ui->showResultspushButton, &QPushButton::clicked,
            this, &MainWindow::showOutput);
    connect(ui->PreFixOutputFilePushButton, &QPushButton::clicked,
            this, &MainWindow::setOutputFilePrefix);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openFile(){
    qDebug() << "Open file routine";
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Stats File"),
                                                    "/Users/stevenwebb/Downloads"
                                                    );
    qDebug() << "Will try to open " << fileName << endl;
    if (fileName.isEmpty()){
        QMessageBox::information(this,
                                 tr("Unable to open file"),
                                 "No file selected!");
        return;
    }
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)){
        QMessageBox::critical(this,
                              tr("File Error"),
                              "Cannot open file!");
    }
}

void MainWindow::genCSVFile(){
    qDebug() << "Generating CSV File";
}

void MainWindow::showOutput(){
    qDebug() << "Showing the output";
    qDebug() << "The output file would be called ";

    //diaglog test
    bool ok;
    QString name = QInputDialog::getText(this,
                                         tr("Add task"),
                                         tr("Task Name"),
                                         QLineEdit::Normal,
                                         tr("Untitled Task"),
                                         &ok);
}

void MainWindow::setOutputFilePrefix(){
    bool ok;
    QString name = QInputDialog::getText(this,
                                         tr("Add pre-fix to csv output"),
                                         tr("Text to add"),
                                         QLineEdit::Normal,
                                         tr("default"),
                                         &ok);
    if (ok && !name.isEmpty()) {
        qDebug() << "We would set a prefix name to " << name << endl;
    }else
    {
        qDebug() << "prefix left alone" << endl;
    }
}
