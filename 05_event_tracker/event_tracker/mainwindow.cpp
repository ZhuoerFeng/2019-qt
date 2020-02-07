#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->installEventFilter(this);
}


bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == ui->textEdit) {
        if (event->type() == QEvent::KeyPress) {
            QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);
            qDebug() << "Ate key press " << keyEvent->key();
            QString info;
            QTextStream(&info) << "Ate key press " << keyEvent->key();
            ui->textEdit_3->append(info);
            return true;
        } else {
            return false;
        }
    } else {
        // pass the event on to the parent class
        return QMainWindow::eventFilter(obj, event);
    }
}

void MainWindow::closeEvent(QCloseEvent* event) {
    int ret = QMessageBox::warning(nullptr, "Quit", "Are you sure to quit?\n",
                                   QMessageBox::Yes | QMessageBox::No);
    if (ret == QMessageBox::Yes) {
        event->accept();
    } else {
        event->ignore();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *e) {
    QString posi = "(" + QString::number(e->x()) + ", " + QString::number(e->y()) + ")";
    QString info = "Mosue move";

}

void MainWindow::mousePressEvent(QMouseEvent *e) {
    QString posi = "(" + QString::number(e->x()) + ", " + QString::number(e->y()) + ")";
    QString info = "Mouse ";
    if (e->button() == Qt::LeftButton) {
        info = info + "LeftButton pressed at " + posi;
    } else if (e->button() == Qt::MidButton) {
        info = info + "MidButton pressed at " + posi;
    } else if (e->button() == Qt::RightButton) {
        info = info + "RightButton pressed at " + posi;
    }
    ui->textEdit_3->append(info);
}

void MainWindow::mouseReleaseEvent(QMouseEvent *e) {
    QString posi = "(" + QString::number(e->x()) + ", " + QString::number(e->y()) + ")";
    QString info = "Mouse Released at " + posi;
    ui->textEdit_3->append(info);
    statusBar()->showMessage(tr("Mouse Released at ") + posi);
}

void MainWindow::mouseDoubleClickEvent(QMouseEvent *e) {
    QString posi = "(" + QString::number(e->x()) + ", " + QString::number(e->y()) + ")";
    QString info = "Mouse double clicked at " + posi;
    ui->textEdit_3->append(info);
}

MainWindow::~MainWindow()
{
    delete ui;
}
