//Name:Junjie Liang
//Email:junjl97@vt.edu
//Class:ECE3574
//Title:HW5
//StudentID:905965464

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QCryptographicHash>
#include <QPixmap>
#include "clickablelabel.h"
#include "locationgenerator.h"
#include <QDebug>
#include <QApplication>
#include <QThread>
#include <QTime>
#define DEBUG(x)

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pages->setCurrentIndex(0);
    ui->actionLogout_User_2->setEnabled(false);
    ui->actionNew_Game->setEnabled(false);
    ui->actionEnd_Game->setEnabled(false);
    ui->actionExit->setEnabled(true);
    ui->actionRegister_User_2->setEnabled(true);

    this->setWindowTitle("Tic-Tac-Toe");
    //ReadUserData();

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            spacecheck[i][j]=0;
    }
    PlayerScore=0;
    ComputerScore=0;
    DrawScore=0;
    GameDone=false;

    QFile file("passwords.dat");
    QFile filename("out.dat");
    QDataStream in(&file);
    QDataStream out(&filename);
    if(file.open(QIODevice::ReadOnly))
       in>>Hashlist;
    file.close();
    if(filename.open(QIODevice::WriteOnly))
        out<<Hashlist;
    filename.close();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CheckWin()
{   Winnermessage winner;
    GameDone=false;
    if((spacecheck[1][1]==1)&&(spacecheck[1][2]==1)&&(spacecheck[1][3]==1))
    {
        winner.PlayerWin();
        GameDone=true;
        PlayerScore++;
        ui->playerscore->setText(QString::number(PlayerScore));

    }
    if((spacecheck[2][1]==1)&&(spacecheck[2][2]==1)&&(spacecheck[2][3]==1))
    {
        winner.PlayerWin();
        GameDone=true;
        PlayerScore++;
        ui->playerscore->setText(QString::number(PlayerScore));
    }
    if((spacecheck[3][1]==1)&&(spacecheck[3][2]==1)&&(spacecheck[3][3]==1))
    {
        winner.PlayerWin();
        GameDone=true;
        PlayerScore++;
        ui->playerscore->setText(QString::number(PlayerScore));
    }
    if((spacecheck[1][1]==1)&&(spacecheck[2][2]==1)&&(spacecheck[3][3]==1))
    {
        winner.PlayerWin();
        GameDone=true;
        PlayerScore++;
        ui->playerscore->setText(QString::number(PlayerScore));
    }
    if((spacecheck[1][3]==1)&&(spacecheck[2][2]==1)&&(spacecheck[3][1]==1))
    {
        winner.PlayerWin();
        GameDone=true;
        PlayerScore++;
        ui->playerscore->setText(QString::number(PlayerScore));
    }
    if((spacecheck[1][3]==1)&&(spacecheck[2][2]==1)&&(spacecheck[3][1]==1))
    {
        winner.PlayerWin();
        GameDone=true;
        PlayerScore++;
        ui->playerscore->setText(QString::number(PlayerScore));
    }
    if((spacecheck[1][1]==1)&&(spacecheck[2][1]==1)&&(spacecheck[3][1]==1))
    {
        winner.PlayerWin();
        GameDone=true;
        PlayerScore++;
        ui->playerscore->setText(QString::number(PlayerScore));
    }
    if((spacecheck[1][2]==1)&&(spacecheck[2][2]==1)&&(spacecheck[3][2]==1))
    {
        winner.PlayerWin();
        GameDone=true;
        PlayerScore++;
        ui->playerscore->setText(QString::number(PlayerScore));
    }
    if((spacecheck[1][3]==1)&&(spacecheck[2][3]==1)&&(spacecheck[3][3]==1))
    {
        winner.PlayerWin();
        GameDone=true;
        PlayerScore++;
        ui->playerscore->setText(QString::number(PlayerScore));
    }
    if((spacecheck[1][1]==2)&&(spacecheck[1][2]==2)&&(spacecheck[1][3]==2))
    {
        winner.ComputerWin();
        GameDone=true;
        ComputerScore++;
        ui->computerscore->setText(QString::number(ComputerScore));
    }
    if((spacecheck[2][1]==2)&&(spacecheck[2][2]==2)&&(spacecheck[2][3]==2))
    {
        winner.ComputerWin();
        GameDone=true;
        ComputerScore++;
        ui->computerscore->setText(QString::number(ComputerScore));
    }
    if((spacecheck[3][1]==2)&&(spacecheck[3][2]==2)&&(spacecheck[3][3]==2))
    {
        winner.ComputerWin();
        GameDone=true;
        ComputerScore++;
        ui->computerscore->setText(QString::number(ComputerScore));
    }
    if((spacecheck[1][1]==2)&&(spacecheck[2][2]==2)&&(spacecheck[3][3]==2))
    {
        winner.ComputerWin();
        GameDone=true;
        ComputerScore++;
        ui->computerscore->setText(QString::number(ComputerScore));
    }
    if((spacecheck[1][3]==2)&&(spacecheck[2][2]==2)&&(spacecheck[3][1]==2))
    {
        winner.ComputerWin();
        GameDone=true;
        ComputerScore++;
        ui->computerscore->setText(QString::number(ComputerScore));
    }
    if((spacecheck[1][1]==2)&&(spacecheck[2][1]==2)&&(spacecheck[3][1]==2))
    {
        winner.ComputerWin();
        GameDone=true;
        ComputerScore++;
        ui->computerscore->setText(QString::number(ComputerScore));
    }
    if((spacecheck[1][2]==2)&&(spacecheck[2][2]==2)&&(spacecheck[3][2]==2))
    {
        winner.ComputerWin();
        GameDone=true;
        ComputerScore++;
        ui->computerscore->setText(QString::number(ComputerScore));
    }
    if((spacecheck[1][3]==2)&&(spacecheck[2][3]==2)&&(spacecheck[3][3]==2))
    {
        winner.ComputerWin();
        GameDone=true;
        ComputerScore++;
        ui->computerscore->setText(QString::number(ComputerScore));
    }
    if((GameDone==false)&&(spacecheck[1][1]!=0) && (spacecheck[1][2]!=0) && (spacecheck[1][3]!=0)
        && (spacecheck[2][1]!=0) && (spacecheck[2][2]!=0) && (spacecheck[2][3]!=0)
        && (spacecheck[3][1]!=0) && (spacecheck[3][2]!=0) && (spacecheck[3][3]!=0)){
        winner.Draw();
        GameDone=true;
        DrawScore++;
        ui->drawscore->setText(QString::number(DrawScore));
    }
    if(GameDone==true)
    {
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
                spacecheck[i][j]=0;
        }
        delay();
        QPixmap Blank("../img/blank.png");
        ui->game11->setPixmap(Blank);
        ui->game12->setPixmap(Blank);
        ui->game13->setPixmap(Blank);

        ui->game21->setPixmap(Blank);
        ui->game22->setPixmap(Blank);
        ui->game23->setPixmap(Blank);

        ui->game31->setPixmap(Blank);
        ui->game32->setPixmap(Blank);
        ui->game33->setPixmap(Blank);
    }
}

void MainWindow::on_ExitButton_clicked(){
    QApplication::quit();
}

void MainWindow::on_LoginButton_clicked(){
    QString username=ui->loginUsername->text();
    QString password=ui->loginPassword->text();
    QByteArray BytePassword=password.toUtf8();
    QByteArray EncryptedP=QCryptographicHash::hash(BytePassword,QCryptographicHash::Sha1);
    if(Hashlist.contains(username))
    {
        if(Hashlist.value(username).Hash==EncryptedP)
        {
            ui->pages->setCurrentIndex(2);
            ui->loginUsername->clear();
            ui->loginPassword->clear();
            CurPlayer=username;

            CurPlayerColor=Hashlist.value(username).Color;
            QString Welcome="Welcome,"+CurPlayer;
            //ui->welcomemessage->adjustSize();
            ui->welcomemessage->setAlignment(Qt::AlignCenter);
            ui->welcomemessage->setText(Welcome);

            ui->actionLogout_User_2->setEnabled(true);
            ui->actionNew_Game->setEnabled(true);
            ui->actionEnd_Game->setEnabled(false);
            ui->actionExit->setEnabled(true);
            ui->actionRegister_User_2->setEnabled(false);



        }
        else{
            QMessageBox::critical(this,"Invalid Login","The user/password combination does not match an existing user/password combination");
            ui->loginUsername->clear();
            ui->loginPassword->clear();
            }
    }
    else{
        QMessageBox::critical(this,"Invalid Login","The user/password combination does not match an existing user/password combination");
        ui->loginUsername->clear();
        ui->loginPassword->clear();
    }
}

void MainWindow::on_actionRegister_User_2_triggered(){
     ui->pages->setCurrentIndex(1);

     ui->actionLogout_User_2->setEnabled(false);
     ui->actionNew_Game->setEnabled(false);
     ui->actionEnd_Game->setEnabled(false);
     ui->actionExit->setEnabled(true);
     ui->actionRegister_User_2->setEnabled(false);

     ui->registerUsername->clear();
     ui->registerPassword->clear();
     ui->registerPassword2->clear();
     ui->loginUsername->clear();
     ui->loginPassword->clear();

 }

/*void MainWindow::ReadUserData(){
     QFile file("passwords.dat");
     QString username;
     QString color;

 }*/

void MainWindow::on_RegisterOK_clicked(){

     QString username=ui->registerUsername->text();
     QString password=ui->registerPassword->text();
     QString password2=ui->registerPassword2->text();
     QByteArray BytePassword=password.toUtf8();
     QByteArray EncryptedP=QCryptographicHash::hash(BytePassword,QCryptographicHash::Sha1);
     QString colour=ui->comboBox->currentText();

     if(Hashlist.contains(username)){
             QMessageBox::critical(this,"Username Already Exists","A user with that name already exists");

     }
     else{
         if(password!=password2){
             QMessageBox::critical(this,"Passwords Do Not Match","The password fields do not match each other.");
         }
         else{
             QFile file("passwords.dat");
             QDataStream out(&file);
             record temprecord;
             temprecord.Color=colour;
             temprecord.Hash=EncryptedP;
             Hashlist.insert(username,temprecord);
             if(file.open(QIODevice::WriteOnly)){
                 out<<Hashlist;
                 file.close();
             }
             ui->pages->setCurrentIndex(0);
             ui->actionRegister_User_2->setEnabled(true);

         }
     }

 }

void MainWindow::on_RegisterCancel_clicked(){
    ui->pages->setCurrentIndex(0);
    ui->actionRegister_User_2->setEnabled(true);
    ui->loginUsername->clear();
    ui->loginPassword->clear();

}

/*QDataStream &operator <<(QDataStream & str, const record & variance){

    str<<variance.Color<<variance.Hash;
    return str;
}

QDataStream &operator >>(QDataStream& str, record & variance){
    str>>variance.Color>>variance.Hash;
    return str;
}*/

void MainWindow::on_StartGameButton_clicked(){
    Blank.load("../img/blank.png");
    ui->game11->setPixmap(Blank);
    ui->game12->setPixmap(Blank);
    ui->game13->setPixmap(Blank);

    ui->game21->setPixmap(Blank);
    ui->game22->setPixmap(Blank);
    ui->game23->setPixmap(Blank);

    ui->game31->setPixmap(Blank);
    ui->game32->setPixmap(Blank);
    ui->game33->setPixmap(Blank);
    ui->pages->setCurrentIndex(3);

    ui->actionLogout_User_2->setEnabled(true);
    ui->actionNew_Game->setEnabled(false);
    ui->actionEnd_Game->setEnabled(true);
    ui->actionExit->setEnabled(true);
    ui->actionRegister_User_2->setEnabled(false);


    if(CurPlayerColor=="Red")
    {
        x.load("../img/rx.png");
        o.load("../img/ro.png");
    }
    if(CurPlayerColor=="Blue")
    {
        x.load("../img/bx.png");
        o.load("../img/bo.png");
    }
    if(CurPlayerColor=="Green")
    {
        x.load("../img/gx.png");
        o.load("../img/go.png");
    }
    ui->playerscore->setText(QString::number(0));
    ui->computerscore->setText(QString::number(0));
    ui->drawscore->setText(QString::number(0));
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            spacecheck[i][j]=0;
    }


}

void MainWindow::on_GameExitButton_clicked(){
    QApplication::quit();
}

void MainWindow::on_game11_clicked()
{
    if(spacecheck[1][1]==0){
        //QPixmap x("../img/rx.png");
        ui->game11->setPixmap(x);
        spacecheck[1][1]=1;
        CheckWin();
        if(GameDone==false){
            LocationGenerator w;
            int rand=w.GetLocation(spacecheck[1][1],spacecheck[1][2],spacecheck[1][3],
                    spacecheck[2][1],spacecheck[2][2],spacecheck[2][3],
                    spacecheck[3][1],spacecheck[3][2],spacecheck[3][3]);
            //QPixmap o("../img/ro.png");
            if(rand==1) {ui->game11->setPixmap(o); spacecheck[1][1]=2;}
            if(rand==2) {ui->game12->setPixmap(o); spacecheck[1][2]=2;}
            if(rand==3) {ui->game13->setPixmap(o); spacecheck[1][3]=2;}
            if(rand==4) {ui->game21->setPixmap(o); spacecheck[2][1]=2;}
            if(rand==5) {ui->game22->setPixmap(o); spacecheck[2][2]=2;}
            if(rand==6) {ui->game23->setPixmap(o); spacecheck[2][3]=2;}
            if(rand==7) {ui->game31->setPixmap(o); spacecheck[3][1]=2;}
            if(rand==8) {ui->game32->setPixmap(o); spacecheck[3][2]=2;}
            if(rand==9) {ui->game33->setPixmap(o); spacecheck[3][3]=2;}
            CheckWin();
        }
    }
    else
    {}
}

void MainWindow::on_game12_clicked()
{
    if(spacecheck[1][2]==0){
        //QPixmap x("../img/rx.png");
        ui->game12->setPixmap(x);
        spacecheck[1][2]=1;
        CheckWin();
        if(GameDone==false){
            LocationGenerator w;
            int rand=w.GetLocation(spacecheck[1][1],spacecheck[1][2],spacecheck[1][3],
                    spacecheck[2][1],spacecheck[2][2],spacecheck[2][3],
                    spacecheck[3][1],spacecheck[3][2],spacecheck[3][3]);
            //QPixmap o("../img/ro.png");
            if(rand==1) {ui->game11->setPixmap(o); spacecheck[1][1]=2;}
            if(rand==2) {ui->game12->setPixmap(o); spacecheck[1][2]=2;}
            if(rand==3) {ui->game13->setPixmap(o); spacecheck[1][3]=2;}
            if(rand==4) {ui->game21->setPixmap(o); spacecheck[2][1]=2;}
            if(rand==5) {ui->game22->setPixmap(o); spacecheck[2][2]=2;}
            if(rand==6) {ui->game23->setPixmap(o); spacecheck[2][3]=2;}
            if(rand==7) {ui->game31->setPixmap(o); spacecheck[3][1]=2;}
            if(rand==8) {ui->game32->setPixmap(o); spacecheck[3][2]=2;}
            if(rand==9) {ui->game33->setPixmap(o); spacecheck[3][3]=2;}
            CheckWin();
        }

    }
    else
    {}
}

void MainWindow::on_game13_clicked()
{
    if(spacecheck[1][3]==0){
        //QPixmap x("../img/rx.png");
        ui->game13->setPixmap(x);
        spacecheck[1][3]=1;
        CheckWin();
        if(GameDone==false){
            LocationGenerator w;
            int rand=w.GetLocation(spacecheck[1][1],spacecheck[1][2],spacecheck[1][3],
                    spacecheck[2][1],spacecheck[2][2],spacecheck[2][3],
                    spacecheck[3][1],spacecheck[3][2],spacecheck[3][3]);
            //QPixmap o("../img/ro.png");
            if(rand==1) {ui->game11->setPixmap(o); spacecheck[1][1]=2;}
            if(rand==2) {ui->game12->setPixmap(o); spacecheck[1][2]=2;}
            if(rand==3) {ui->game13->setPixmap(o); spacecheck[1][3]=2;}
            if(rand==4) {ui->game21->setPixmap(o); spacecheck[2][1]=2;}
            if(rand==5) {ui->game22->setPixmap(o); spacecheck[2][2]=2;}
            if(rand==6) {ui->game23->setPixmap(o); spacecheck[2][3]=2;}
            if(rand==7) {ui->game31->setPixmap(o); spacecheck[3][1]=2;}
            if(rand==8) {ui->game32->setPixmap(o); spacecheck[3][2]=2;}
            if(rand==9) {ui->game33->setPixmap(o); spacecheck[3][3]=2;}
            CheckWin();
        }

    }
    else
    {}
}

void MainWindow::on_game21_clicked()
{
    if(spacecheck[2][1]==0){
        //QPixmap x("../img/rx.png");
        ui->game21->setPixmap(x);
        spacecheck[2][1]=1;
        CheckWin();
        if(GameDone==false){
            LocationGenerator w;
            int rand=w.GetLocation(spacecheck[1][1],spacecheck[1][2],spacecheck[1][3],
                    spacecheck[2][1],spacecheck[2][2],spacecheck[2][3],
                    spacecheck[3][1],spacecheck[3][2],spacecheck[3][3]);
            //QPixmap o("../img/ro.png");
            if(rand==1) {ui->game11->setPixmap(o); spacecheck[1][1]=2;}
            if(rand==2) {ui->game12->setPixmap(o); spacecheck[1][2]=2;}
            if(rand==3) {ui->game13->setPixmap(o); spacecheck[1][3]=2;}
            if(rand==4) {ui->game21->setPixmap(o); spacecheck[2][1]=2;}
            if(rand==5) {ui->game22->setPixmap(o); spacecheck[2][2]=2;}
            if(rand==6) {ui->game23->setPixmap(o); spacecheck[2][3]=2;}
            if(rand==7) {ui->game31->setPixmap(o); spacecheck[3][1]=2;}
            if(rand==8) {ui->game32->setPixmap(o); spacecheck[3][2]=2;}
            if(rand==9) {ui->game33->setPixmap(o); spacecheck[3][3]=2;}
            CheckWin();
        }

    }
    else
    {}
}

void MainWindow::on_game22_clicked()
{
    if(spacecheck[2][2]==0){
        //QPixmap x("../img/rx.png");
        ui->game22->setPixmap(x);
        spacecheck[2][2]=1;
        CheckWin();
        if(GameDone==false){
            LocationGenerator w;
            int rand=w.GetLocation(spacecheck[1][1],spacecheck[1][2],spacecheck[1][3],
                    spacecheck[2][1],spacecheck[2][2],spacecheck[2][3],
                    spacecheck[3][1],spacecheck[3][2],spacecheck[3][3]);
            //QPixmap o("../img/ro.png");
            if(rand==1) {ui->game11->setPixmap(o); spacecheck[1][1]=2;}
            if(rand==2) {ui->game12->setPixmap(o); spacecheck[1][2]=2;}
            if(rand==3) {ui->game13->setPixmap(o); spacecheck[1][3]=2;}
            if(rand==4) {ui->game21->setPixmap(o); spacecheck[2][1]=2;}
            if(rand==5) {ui->game22->setPixmap(o); spacecheck[2][2]=2;}
            if(rand==6) {ui->game23->setPixmap(o); spacecheck[2][3]=2;}
            if(rand==7) {ui->game31->setPixmap(o); spacecheck[3][1]=2;}
            if(rand==8) {ui->game32->setPixmap(o); spacecheck[3][2]=2;}
            if(rand==9) {ui->game33->setPixmap(o); spacecheck[3][3]=2;}
            CheckWin();
        }
    }
    else
    {}
}

void MainWindow::on_game23_clicked()
{
    if(spacecheck[2][3]==0){
        //QPixmap x("../img/rx.png");
        ui->game23->setPixmap(x);
        spacecheck[2][3]=1;
        CheckWin();
        if(GameDone==false){
            LocationGenerator w;
            int rand=w.GetLocation(spacecheck[1][1],spacecheck[1][2],spacecheck[1][3],
                    spacecheck[2][1],spacecheck[2][2],spacecheck[2][3],
                    spacecheck[3][1],spacecheck[3][2],spacecheck[3][3]);
            //QPixmap o("../img/ro.png");
            if(rand==1) {ui->game11->setPixmap(o); spacecheck[1][1]=2;}
            if(rand==2) {ui->game12->setPixmap(o); spacecheck[1][2]=2;}
            if(rand==3) {ui->game13->setPixmap(o); spacecheck[1][3]=2;}
            if(rand==4) {ui->game21->setPixmap(o); spacecheck[2][1]=2;}
            if(rand==5) {ui->game22->setPixmap(o); spacecheck[2][2]=2;}
            if(rand==6) {ui->game23->setPixmap(o); spacecheck[2][3]=2;}
            if(rand==7) {ui->game31->setPixmap(o); spacecheck[3][1]=2;}
            if(rand==8) {ui->game32->setPixmap(o); spacecheck[3][2]=2;}
            if(rand==9) {ui->game33->setPixmap(o); spacecheck[3][3]=2;}
            CheckWin();
        }
    }
    else
    {}
}

void MainWindow::on_game31_clicked()
{
    if(spacecheck[3][1]==0){
        //QPixmap x("../img/rx.png");
        ui->game31->setPixmap(x);
        spacecheck[3][1]=1;
        CheckWin();
        if(GameDone==false){
            LocationGenerator w;
            int rand=w.GetLocation(spacecheck[1][1],spacecheck[1][2],spacecheck[1][3],
                    spacecheck[2][1],spacecheck[2][2],spacecheck[2][3],
                    spacecheck[3][1],spacecheck[3][2],spacecheck[3][3]);
            //QPixmap o("../img/ro.png");
            if(rand==1) {ui->game11->setPixmap(o); spacecheck[1][1]=2;}
            if(rand==2) {ui->game12->setPixmap(o); spacecheck[1][2]=2;}
            if(rand==3) {ui->game13->setPixmap(o); spacecheck[1][3]=2;}
            if(rand==4) {ui->game21->setPixmap(o); spacecheck[2][1]=2;}
            if(rand==5) {ui->game22->setPixmap(o); spacecheck[2][2]=2;}
            if(rand==6) {ui->game23->setPixmap(o); spacecheck[2][3]=2;}
            if(rand==7) {ui->game31->setPixmap(o); spacecheck[3][1]=2;}
            if(rand==8) {ui->game32->setPixmap(o); spacecheck[3][2]=2;}
            if(rand==9) {ui->game33->setPixmap(o); spacecheck[3][3]=2;}
            CheckWin();
            }

    }
    else
    {}
}

void MainWindow::on_game32_clicked()
{
    if(spacecheck[3][2]==0){
        //QPixmap x("../img/rx.png");
        ui->game32->setPixmap(x);
        spacecheck[3][2]=1;
        CheckWin();
        if(GameDone==false){
            LocationGenerator w;
            int rand=w.GetLocation(spacecheck[1][1],spacecheck[1][2],spacecheck[1][3],
                    spacecheck[2][1],spacecheck[2][2],spacecheck[2][3],
                    spacecheck[3][1],spacecheck[3][2],spacecheck[3][3]);
            //QPixmap o("../img/ro.png");
            if(rand==1) {ui->game11->setPixmap(o); spacecheck[1][1]=2;}
            if(rand==2) {ui->game12->setPixmap(o); spacecheck[1][2]=2;}
            if(rand==3) {ui->game13->setPixmap(o); spacecheck[1][3]=2;}
            if(rand==4) {ui->game21->setPixmap(o); spacecheck[2][1]=2;}
            if(rand==5) {ui->game22->setPixmap(o); spacecheck[2][2]=2;}
            if(rand==6) {ui->game23->setPixmap(o); spacecheck[2][3]=2;}
            if(rand==7) {ui->game31->setPixmap(o); spacecheck[3][1]=2;}
            if(rand==8) {ui->game32->setPixmap(o); spacecheck[3][2]=2;}
            if(rand==9) {ui->game33->setPixmap(o); spacecheck[3][3]=2;}
            CheckWin();
        }

    }
    else
    {}
}

void MainWindow::on_game33_clicked()
{
    if(spacecheck[3][3]==0){
        //QPixmap x("../img/rx.png");
        ui->game33->setPixmap(x);
        spacecheck[3][3]=1;
        CheckWin();
        if(GameDone==false){
            LocationGenerator w;
            int rand=w.GetLocation(spacecheck[1][1],spacecheck[1][2],spacecheck[1][3],
                    spacecheck[2][1],spacecheck[2][2],spacecheck[2][3],
                    spacecheck[3][1],spacecheck[3][2],spacecheck[3][3]);
            //QPixmap o("../img/ro.png");
            if(rand==1) {ui->game11->setPixmap(o); spacecheck[1][1]=2;}
            if(rand==2) {ui->game12->setPixmap(o); spacecheck[1][2]=2;}
            if(rand==3) {ui->game13->setPixmap(o); spacecheck[1][3]=2;}
            if(rand==4) {ui->game21->setPixmap(o); spacecheck[2][1]=2;}
            if(rand==5) {ui->game22->setPixmap(o); spacecheck[2][2]=2;}
            if(rand==6) {ui->game23->setPixmap(o); spacecheck[2][3]=2;}
            if(rand==7) {ui->game31->setPixmap(o); spacecheck[3][1]=2;}
            if(rand==8) {ui->game32->setPixmap(o); spacecheck[3][2]=2;}
            if(rand==9) {ui->game33->setPixmap(o); spacecheck[3][3]=2;}
            CheckWin();
            }
    }
    else
    {}
}

void MainWindow::on_GamePanelExit_clicked()
{
    ui->actionNew_Game->setEnabled(true);
    ui->actionEnd_Game->setEnabled(false);
    ui->pages->setCurrentIndex(2);
}

void MainWindow::on_actionEnd_Game_triggered()
{
    ui->actionNew_Game->setEnabled(true);
    ui->actionEnd_Game->setEnabled(false);
    ui->pages->setCurrentIndex(2);

}

void MainWindow::on_actionNew_Game_triggered()
{
    Blank.load("../img/blank.png");
    ui->game11->setPixmap(Blank);
    ui->game12->setPixmap(Blank);
    ui->game13->setPixmap(Blank);

    ui->game21->setPixmap(Blank);
    ui->game22->setPixmap(Blank);
    ui->game23->setPixmap(Blank);

    ui->game31->setPixmap(Blank);
    ui->game32->setPixmap(Blank);
    ui->game33->setPixmap(Blank);
    ui->pages->setCurrentIndex(3);

    ui->actionLogout_User_2->setEnabled(true);
    ui->actionNew_Game->setEnabled(false);
    ui->actionEnd_Game->setEnabled(true);
    ui->actionExit->setEnabled(true);
    ui->actionRegister_User_2->setEnabled(false);


    if(CurPlayerColor=="Red")
    {
        x.load("../img/rx.png");
        o.load("../img/ro.png");
    }
    if(CurPlayerColor=="Blue")
    {
        x.load("../img/bx.png");
        o.load("../img/bo.png");
    }
    if(CurPlayerColor=="Green")
    {
        x.load("../img/gx.png");
        o.load("../img/go.png");
    }
    ui->playerscore->setText(QString::number(0));
    ui->computerscore->setText(QString::number(0));
    ui->drawscore->setText(QString::number(0));
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            spacecheck[i][j]=0;
    }
}

void MainWindow::on_actionLogout_User_2_triggered()
{
    ui->pages->setCurrentIndex(0);
    ui->actionRegister_User_2->setEnabled(true);
    ui->actionLogout_User_2->setEnabled(false);
    ui->loginUsername->clear();
    ui->loginPassword->clear();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::delay()
{
    QTime dieTime= QTime::currentTime().addSecs(1);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}


