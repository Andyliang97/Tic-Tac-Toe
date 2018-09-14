#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QList>
#include <QFile>
#include <QDataStream>
#include <QByteArray>
#include <QHash>
#include "clickablelabel.h"
#include "winnermessage.h"
#include <QPixmap>
struct UserData{
    QString Username;
    QString Password;
    QString Color;
};

struct record{
    QString Color;
    QByteArray Hash;
    friend QDataStream& operator <<(QDataStream & out, const record & val){
        out<<val.Color<<val.Hash;
        return out;
    }
    friend QDataStream& operator >>(QDataStream & in, record & val){
        in>>val.Color>>val.Hash;
        return in;
    }
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void CheckWin();
    void delay();



private slots:
    void on_LoginButton_clicked();
    void on_ExitButton_clicked();
    //void RegisterPage();
    void on_RegisterOK_clicked();
    void on_actionRegister_User_2_triggered();
    void on_RegisterCancel_clicked();
    void on_StartGameButton_clicked();
    void on_GameExitButton_clicked();
    void on_game11_clicked();
    void on_game12_clicked();
    void on_game13_clicked();
    void on_game21_clicked();
    void on_game22_clicked();
    void on_game23_clicked();
    void on_game31_clicked();
    void on_game32_clicked();
    void on_game33_clicked();
    void on_GamePanelExit_clicked();
    void on_actionEnd_Game_triggered();
    void on_actionNew_Game_triggered();
    void on_actionLogout_User_2_triggered();
    void on_actionExit_triggered();


private:
    Ui::MainWindow *ui;
    QList<UserData> list;
    QHash<QString,record> Hashlist;
    int count;
    void ReadUserData();
    QString CurPlayer;
    QString CurPlayerColor;
    int spacecheck[4][4];
    int PlayerScore;
    int ComputerScore;
    int DrawScore;
    bool GameDone;
    QPixmap x;
    QPixmap o;
    QPixmap Blank;




};
//QDataStream &operator <<(QDataStream & str, const record & variance);
//QDataStream &operator >>(QDataStream & str,  record & variance);
#endif // MAINWINDOW_H
