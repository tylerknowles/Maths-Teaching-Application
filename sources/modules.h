#ifndef MODULES_H
#define MODULES_H

#include "ui_learning_room.h"
#include <QMainWindow>
#include <fstream>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include "structs.h"
#include <QObject>
#include <QMessageBox>

class modules
{
private:


    QVector<mod_or_task_struct> module_list;
    QVector<task_struct> task_list;
    QVector<mod_or_task_struct>users_modules;
    QVector<mod_or_task_struct>users_modules_to_add;
    QVector<score_struct> users_scores;
    QString selected_module;
    QString selected_task;
    QMessageBox msgBox;
public:
    modules();
    void set_module_list();
    QVector<mod_or_task_struct> get_module_list();
    QVector<task_struct> get_task_list();

    void set_current_modules(QString id);
    QVector<mod_or_task_struct> get_current_modules();
    QVector<mod_or_task_struct> get_modules_to_add();
    void add_module(QString ModName, QVector<mod_or_task_struct> mod_list, QString id);
    void delete_module(QString ModName, QVector<mod_or_task_struct> mod_list, QString id);
    void set_scores(QString id);
    QVector<score_struct> get_users_scores();
    void add_new_score(QString id, QString taskID, int Score);
    int grade_test(QString testID, QVector<QString> answers);


};

#endif // MODULES_H
