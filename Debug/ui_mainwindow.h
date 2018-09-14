/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLogout_User;
    QAction *actionRegister_User;
    QAction *actionRegister_User_2;
    QAction *actionLogout_User_2;
    QAction *actionNew_Game;
    QAction *actionEnd_Game;
    QAction *actionExit;
    QWidget *centralWidget;
    QStackedWidget *pages;
    QWidget *MainLoginPanel;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *loginUsername;
    QLineEdit *loginPassword;
    QPushButton *LoginButton;
    QPushButton *ExitButton;
    QWidget *RegisterPanel;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *registerUsername;
    QLabel *label_4;
    QLineEdit *registerPassword;
    QLabel *label_5;
    QLineEdit *registerPassword2;
    QLabel *label_6;
    QComboBox *comboBox;
    QPushButton *RegisterOK;
    QPushButton *RegisterCancel;
    QWidget *WelcomeUserPanel;
    QLabel *welcomemessage;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *StartGameButton;
    QPushButton *GameExitButton;
    QWidget *GamelPanel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_16;
    ClickableLabel *game11;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_17;
    ClickableLabel *game12;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_18;
    ClickableLabel *game13;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_19;
    ClickableLabel *game21;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_20;
    ClickableLabel *game23;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_21;
    ClickableLabel *game22;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_22;
    ClickableLabel *game31;
    QWidget *gridLayoutWidget_8;
    QGridLayout *gridLayout_23;
    ClickableLabel *game33;
    QWidget *gridLayoutWidget_9;
    QGridLayout *gridLayout_24;
    ClickableLabel *game32;
    QLabel *scorelabel;
    QLabel *label_8;
    QLabel *computerscore;
    QLabel *label_10;
    QLabel *playerscore;
    QLabel *label_12;
    QLabel *drawscore;
    QPushButton *GamePanelExit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuUser;
    QMenu *menuGame;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(484, 348);
        actionLogout_User = new QAction(MainWindow);
        actionLogout_User->setObjectName(QStringLiteral("actionLogout_User"));
        actionRegister_User = new QAction(MainWindow);
        actionRegister_User->setObjectName(QStringLiteral("actionRegister_User"));
        actionRegister_User_2 = new QAction(MainWindow);
        actionRegister_User_2->setObjectName(QStringLiteral("actionRegister_User_2"));
        actionLogout_User_2 = new QAction(MainWindow);
        actionLogout_User_2->setObjectName(QStringLiteral("actionLogout_User_2"));
        actionNew_Game = new QAction(MainWindow);
        actionNew_Game->setObjectName(QStringLiteral("actionNew_Game"));
        actionEnd_Game = new QAction(MainWindow);
        actionEnd_Game->setObjectName(QStringLiteral("actionEnd_Game"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pages = new QStackedWidget(centralWidget);
        pages->setObjectName(QStringLiteral("pages"));
        pages->setGeometry(QRect(10, 0, 471, 291));
        MainLoginPanel = new QWidget();
        MainLoginPanel->setObjectName(QStringLiteral("MainLoginPanel"));
        formLayoutWidget = new QWidget(MainLoginPanel);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 100, 381, 81));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        loginUsername = new QLineEdit(formLayoutWidget);
        loginUsername->setObjectName(QStringLiteral("loginUsername"));

        formLayout->setWidget(0, QFormLayout::FieldRole, loginUsername);

        loginPassword = new QLineEdit(formLayoutWidget);
        loginPassword->setObjectName(QStringLiteral("loginPassword"));
        loginPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, loginPassword);

        LoginButton = new QPushButton(MainLoginPanel);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(210, 230, 99, 27));
        ExitButton = new QPushButton(MainLoginPanel);
        ExitButton->setObjectName(QStringLiteral("ExitButton"));
        ExitButton->setGeometry(QRect(330, 230, 99, 27));
        pages->addWidget(MainLoginPanel);
        RegisterPanel = new QWidget();
        RegisterPanel->setObjectName(QStringLiteral("RegisterPanel"));
        formLayoutWidget_2 = new QWidget(RegisterPanel);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(40, 40, 401, 151));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        registerUsername = new QLineEdit(formLayoutWidget_2);
        registerUsername->setObjectName(QStringLiteral("registerUsername"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, registerUsername);

        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        registerPassword = new QLineEdit(formLayoutWidget_2);
        registerPassword->setObjectName(QStringLiteral("registerPassword"));
        registerPassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, registerPassword);

        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        registerPassword2 = new QLineEdit(formLayoutWidget_2);
        registerPassword2->setObjectName(QStringLiteral("registerPassword2"));
        registerPassword2->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, registerPassword2);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_6);

        comboBox = new QComboBox(formLayoutWidget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, comboBox);

        RegisterOK = new QPushButton(RegisterPanel);
        RegisterOK->setObjectName(QStringLiteral("RegisterOK"));
        RegisterOK->setGeometry(QRect(220, 220, 99, 27));
        RegisterCancel = new QPushButton(RegisterPanel);
        RegisterCancel->setObjectName(QStringLiteral("RegisterCancel"));
        RegisterCancel->setGeometry(QRect(340, 220, 99, 27));
        pages->addWidget(RegisterPanel);
        WelcomeUserPanel = new QWidget();
        WelcomeUserPanel->setObjectName(QStringLiteral("WelcomeUserPanel"));
        welcomemessage = new QLabel(WelcomeUserPanel);
        welcomemessage->setObjectName(QStringLiteral("welcomemessage"));
        welcomemessage->setGeometry(QRect(10, 100, 451, 61));
        QFont font;
        font.setPointSize(26);
        font.setItalic(true);
        welcomemessage->setFont(font);
        horizontalLayoutWidget = new QWidget(WelcomeUserPanel);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(250, 210, 211, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        StartGameButton = new QPushButton(horizontalLayoutWidget);
        StartGameButton->setObjectName(QStringLiteral("StartGameButton"));

        horizontalLayout_2->addWidget(StartGameButton);

        GameExitButton = new QPushButton(horizontalLayoutWidget);
        GameExitButton->setObjectName(QStringLiteral("GameExitButton"));

        horizontalLayout_2->addWidget(GameExitButton);

        pages->addWidget(WelcomeUserPanel);
        GamelPanel = new QWidget();
        GamelPanel->setObjectName(QStringLiteral("GamelPanel"));
        gridLayoutWidget = new QWidget(GamelPanel);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 71, 71));
        gridLayout_16 = new QGridLayout(gridLayoutWidget);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        game11 = new ClickableLabel(gridLayoutWidget);
        game11->setObjectName(QStringLiteral("game11"));

        gridLayout_16->addWidget(game11, 0, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(GamelPanel);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(90, 30, 71, 71));
        gridLayout_17 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        game12 = new ClickableLabel(gridLayoutWidget_2);
        game12->setObjectName(QStringLiteral("game12"));

        gridLayout_17->addWidget(game12, 0, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(GamelPanel);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(170, 30, 71, 71));
        gridLayout_18 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        game13 = new ClickableLabel(gridLayoutWidget_3);
        game13->setObjectName(QStringLiteral("game13"));

        gridLayout_18->addWidget(game13, 0, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(GamelPanel);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 110, 71, 71));
        gridLayout_19 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        gridLayout_19->setContentsMargins(0, 0, 0, 0);
        game21 = new ClickableLabel(gridLayoutWidget_4);
        game21->setObjectName(QStringLiteral("game21"));

        gridLayout_19->addWidget(game21, 0, 0, 1, 1);

        gridLayoutWidget_5 = new QWidget(GamelPanel);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(170, 110, 71, 71));
        gridLayout_20 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        gridLayout_20->setContentsMargins(0, 0, 0, 0);
        game23 = new ClickableLabel(gridLayoutWidget_5);
        game23->setObjectName(QStringLiteral("game23"));

        gridLayout_20->addWidget(game23, 0, 0, 1, 1);

        gridLayoutWidget_6 = new QWidget(GamelPanel);
        gridLayoutWidget_6->setObjectName(QStringLiteral("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(90, 110, 71, 71));
        gridLayout_21 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        game22 = new ClickableLabel(gridLayoutWidget_6);
        game22->setObjectName(QStringLiteral("game22"));

        gridLayout_21->addWidget(game22, 0, 0, 1, 1);

        gridLayoutWidget_7 = new QWidget(GamelPanel);
        gridLayoutWidget_7->setObjectName(QStringLiteral("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(10, 190, 71, 71));
        gridLayout_22 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setContentsMargins(11, 11, 11, 11);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        gridLayout_22->setContentsMargins(0, 0, 0, 0);
        game31 = new ClickableLabel(gridLayoutWidget_7);
        game31->setObjectName(QStringLiteral("game31"));

        gridLayout_22->addWidget(game31, 0, 0, 1, 1);

        gridLayoutWidget_8 = new QWidget(GamelPanel);
        gridLayoutWidget_8->setObjectName(QStringLiteral("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(170, 190, 71, 71));
        gridLayout_23 = new QGridLayout(gridLayoutWidget_8);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        game33 = new ClickableLabel(gridLayoutWidget_8);
        game33->setObjectName(QStringLiteral("game33"));

        gridLayout_23->addWidget(game33, 0, 0, 1, 1);

        gridLayoutWidget_9 = new QWidget(GamelPanel);
        gridLayoutWidget_9->setObjectName(QStringLiteral("gridLayoutWidget_9"));
        gridLayoutWidget_9->setGeometry(QRect(90, 190, 71, 71));
        gridLayout_24 = new QGridLayout(gridLayoutWidget_9);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        gridLayout_24->setContentsMargins(0, 0, 0, 0);
        game32 = new ClickableLabel(gridLayoutWidget_9);
        game32->setObjectName(QStringLiteral("game32"));

        gridLayout_24->addWidget(game32, 0, 0, 1, 1);

        scorelabel = new QLabel(GamelPanel);
        scorelabel->setObjectName(QStringLiteral("scorelabel"));
        scorelabel->setGeometry(QRect(350, 30, 67, 17));
        label_8 = new QLabel(GamelPanel);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(310, 60, 67, 17));
        computerscore = new QLabel(GamelPanel);
        computerscore->setObjectName(QStringLiteral("computerscore"));
        computerscore->setGeometry(QRect(410, 60, 67, 17));
        label_10 = new QLabel(GamelPanel);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(310, 80, 67, 17));
        playerscore = new QLabel(GamelPanel);
        playerscore->setObjectName(QStringLiteral("playerscore"));
        playerscore->setGeometry(QRect(410, 80, 67, 17));
        label_12 = new QLabel(GamelPanel);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(310, 100, 67, 17));
        drawscore = new QLabel(GamelPanel);
        drawscore->setObjectName(QStringLiteral("drawscore"));
        drawscore->setGeometry(QRect(410, 100, 67, 17));
        GamePanelExit = new QPushButton(GamelPanel);
        GamePanelExit->setObjectName(QStringLiteral("GamePanelExit"));
        GamePanelExit->setGeometry(QRect(320, 220, 99, 27));
        pages->addWidget(GamelPanel);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 484, 25));
        menuUser = new QMenu(menuBar);
        menuUser->setObjectName(QStringLiteral("menuUser"));
        menuGame = new QMenu(menuBar);
        menuGame->setObjectName(QStringLiteral("menuGame"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuUser->menuAction());
        menuBar->addAction(menuGame->menuAction());
        menuUser->addAction(actionRegister_User_2);
        menuUser->addAction(actionLogout_User_2);
        menuUser->addAction(actionExit);
        menuGame->addAction(actionNew_Game);
        menuGame->addAction(actionEnd_Game);

        retranslateUi(MainWindow);

        pages->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionLogout_User->setText(QApplication::translate("MainWindow", "Logout User", 0));
        actionRegister_User->setText(QApplication::translate("MainWindow", "Register User", 0));
        actionRegister_User_2->setText(QApplication::translate("MainWindow", "Register User", 0));
        actionLogout_User_2->setText(QApplication::translate("MainWindow", "Logout User", 0));
        actionNew_Game->setText(QApplication::translate("MainWindow", "New Game", 0));
        actionEnd_Game->setText(QApplication::translate("MainWindow", "End Game", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        label->setText(QApplication::translate("MainWindow", "Username", 0));
        label_2->setText(QApplication::translate("MainWindow", "Password", 0));
        LoginButton->setText(QApplication::translate("MainWindow", "Login", 0));
        ExitButton->setText(QApplication::translate("MainWindow", "Exit", 0));
        label_3->setText(QApplication::translate("MainWindow", "Username", 0));
        label_4->setText(QApplication::translate("MainWindow", "Password", 0));
        label_5->setText(QApplication::translate("MainWindow", "password(again)", 0));
        label_6->setText(QApplication::translate("MainWindow", "Player color", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Red", 0)
         << QApplication::translate("MainWindow", "Green", 0)
         << QApplication::translate("MainWindow", "Blue", 0)
        );
        RegisterOK->setText(QApplication::translate("MainWindow", "OK", 0));
        RegisterCancel->setText(QApplication::translate("MainWindow", "Cancel", 0));
        welcomemessage->setText(QString());
        StartGameButton->setText(QApplication::translate("MainWindow", "Start Game", 0));
        GameExitButton->setText(QApplication::translate("MainWindow", "Exit", 0));
        game11->setText(QString());
        game12->setText(QString());
        game13->setText(QString());
        game21->setText(QString());
        game23->setText(QString());
        game22->setText(QString());
        game31->setText(QString());
        game33->setText(QString());
        game32->setText(QString());
        scorelabel->setText(QApplication::translate("MainWindow", "score", 0));
        label_8->setText(QApplication::translate("MainWindow", "computer", 0));
        computerscore->setText(QApplication::translate("MainWindow", "0", 0));
        label_10->setText(QApplication::translate("MainWindow", "player", 0));
        playerscore->setText(QApplication::translate("MainWindow", "0", 0));
        label_12->setText(QApplication::translate("MainWindow", "draw", 0));
        drawscore->setText(QApplication::translate("MainWindow", "0", 0));
        GamePanelExit->setText(QApplication::translate("MainWindow", "Exit Game", 0));
        menuUser->setTitle(QApplication::translate("MainWindow", "User", 0));
        menuGame->setTitle(QApplication::translate("MainWindow", "Game", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
