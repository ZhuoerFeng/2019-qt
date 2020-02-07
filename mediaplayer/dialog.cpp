#include "dialog.h"
#include "ui_dialog.h"
#include <QSignalMapper>
#include <QObject>
#include <QMediaPlayer>
#include <QUrl>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog),
    player(new QMediaPlayer)
{
    ui->setupUi(this);
    QSignalMapper* map = new QSignalMapper(this);

    connect(ui->pushButton, SIGNAL(clicked()), map, SLOT(map()));
    connect(ui->pushButton_2, SIGNAL(clicked()), map, SLOT(map()));
    connect(ui->pushButton_3, SIGNAL(clicked()), map, SLOT(map()));
    connect(ui->pushButton_4, SIGNAL(clicked()), map, SLOT(map()));
    connect(ui->pushButton_5, SIGNAL(clicked()), map, SLOT(map()));
    connect(ui->pushButton_6, SIGNAL(clicked()), map, SLOT(map()));
    connect(ui->pushButton_7, SIGNAL(clicked()), map, SLOT(map()));
    map->setMapping(ui->pushButton, 1);
    map->setMapping(ui->pushButton_2, 2);
    map->setMapping(ui->pushButton_3, 3);
    map->setMapping(ui->pushButton_4, 4);
    map->setMapping(ui->pushButton_5, 5);
    map->setMapping(ui->pushButton_6, 6);
    map->setMapping(ui->pushButton_7, 7);
    connect(map, SIGNAL(mapped(int)), this, SLOT(keyPressed(int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_8_clicked()
{
    qApp->quit();
}

void Dialog::keyPressed(int t) {

    ui->textEdit->append(QString::number(t));
    player->stop();

    switch (t) {
    case 1 :
    {
        qDebug() << 1;
        player->setMedia(QUrl("qrc:/sound/1 do.mp3"));
        break;
    }
    case 2 :
    {
        qDebug() << 2;
        player->setMedia(QUrl("qrc:/sound/2 re.mp3"));
        break;
    }
    case 3 :
    {
        qDebug() << 3;
        player->setMedia(QUrl("qrc:/sound/3 mi.mp3"));
        break;
    }
    case 4 :
    {
        qDebug() << 4;
        player->setMedia(QUrl("qrc:/sound/4 fa.mp3"));
        break;
    }
    case 5 :
    {
        player->setMedia(QUrl("qrc:/sound/5 sol.mp3"));
        break;
    }
    case 6 :
    {
        player->setMedia(QUrl("qrc:/sound/6 la.mp3"));
        break;
    }
    case 7 :
    {
        player->setMedia(QUrl("qrc:/sound/7 si.mp3"));
        break;
    }
    default: break;
    }
    player->setVolume(50);
    player->play();
}

void Dialog::keyPressEvent(QKeyEvent *ev) {
    if (ev->key() == Qt::Key_1) {
        ui->pushButton->animateClick();
        ui->pushButton->clicked();
    } else if  (ev->key() == Qt::Key_2) {
        ui->pushButton_2->animateClick();
        ui->pushButton_2->clicked();
    } else if  (ev->key() == Qt::Key_3) {
        ui->pushButton_3->animateClick();
        ui->pushButton_3->clicked();
    } else if  (ev->key() == Qt::Key_4) {
        ui->pushButton_4->animateClick();
        ui->pushButton_4->clicked();
    } else if  (ev->key() == Qt::Key_5) {
        ui->pushButton_5->animateClick();
        ui->pushButton_5->clicked();
    } else if  (ev->key() == Qt::Key_6) {
        ui->pushButton_6->animateClick();
        ui->pushButton_6->clicked();
    } else if  (ev->key() == Qt::Key_7) {
        ui->pushButton_7->animateClick();
        ui->pushButton_7->clicked();
    }
}
