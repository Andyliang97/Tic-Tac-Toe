#ifndef WINNERMESSAGE_H
#define WINNERMESSAGE_H

#include <QObject>
#include <QMessageBox>

class Winnermessage : public QObject
{
    Q_OBJECT
public:
    explicit Winnermessage(QObject *parent = 0);

signals:


public slots:
    void PlayerWin();
    void ComputerWin();
    void Draw();
private:
    QMessageBox *box;

};

#endif // WINNERMESSAGE_H
