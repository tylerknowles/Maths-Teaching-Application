#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "ui_learning_room.h"
#include <fstream>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include "structs.h"
#include <QObject>

class account
{
private:
    QString userID;
    QString username;
    QMessageBox msgBox;

public:
    account();
    bool authenticate_login(QString entered_user, QString entered_password);
    QString return_userID();
    void register_user(QString entered_user, QString entered_password);
    QString return_username();
};

#endif // ACCOUNT_H
