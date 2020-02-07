#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMediaPlayer>
#include <QKeyEvent>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    QMediaPlayer* player;
    void keyPressEvent(QKeyEvent* ev);

private slots:
    void on_pushButton_8_clicked();
    void keyPressed(int);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
