#include "winnermessage.h"
#include <QMessageBox>

Winnermessage::Winnermessage(QObject *parent) : QObject(parent)
{
    box=new QMessageBox;
}

void Winnermessage::PlayerWin()
{
    box->setWindowTitle("Tic-Tac-Toe");
    box->setText("Congratulation, you win!");
    box->setStandardButtons(QMessageBox::Ok);
    box->show();
}
void Winnermessage::ComputerWin(){
    box->setWindowTitle("Tic-Tac-Toe");
    box->setText("Sorry, you lost. Better luck next time.");
    box->setStandardButtons(QMessageBox::Ok);
    box->show();
}
void Winnermessage::Draw(){
    box->setWindowTitle("Tic-Tac-Toe");
    box->setText("Game drawn");
    box->setStandardButtons(QMessageBox::Ok);
    box->show();
}


