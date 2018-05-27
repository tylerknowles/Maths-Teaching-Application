#ifndef LEARNING_ROOM_H
#define LEARNING_ROOM_H

#include "account.h"
#include "modules.h"
#include <QMainWindow>
#include <QString>
#include <QDebug>
#include "structs.h"
#include <QObject>
#include <iomanip>


namespace Ui {
class learning_room;
}

class learning_room : public QMainWindow
{
    Q_OBJECT

public:
    explicit learning_room(QWidget *parent = 0);
    ~learning_room();





private slots:
    void on_login_button_clicked();

    void on_continue_module_clicked();

    void on_task_previous_button_clicked();

    void on_task_learn_previous_button_clicked();

    void on_task_test_previous_button_clicked();

    void on_task_learn_button_clicked();

    void on_task_test_button_clicked();

    void on_register_button_clicked();

    void on_add_module_button_clicked();

    void on_remove_module_button_clicked();

    void on_to_scores_button_clicked();

    void on_scores_previous_button_clicked();

    void on_task_test_submit_clicked();

private:
    Ui::learning_room *ui;
    QString id;
    QString username;
    QVector<mod_or_task_struct> module_list;
    QVector<task_struct> task_list;
    QVector<mod_or_task_struct> chosen_task_list;
    QString chosenMod;
    QString chosenTest;
    QVector<mod_or_task_struct> user_module_vector;
    QVector<mod_or_task_struct> add_module_vector;

    QVector<id_modules_struct> id_modules_vector;
    QVector<id_modules_struct> id_modules_vector1;
    QVector<id_modules_struct> all_modules_vector;
    QVector<id_modules_struct> current_module_id_vector;
    QVector<id_modules_struct> add_module_id_vector;
    QString taskID;
    float scoretopercent;
    QMessageBox msgBox;




};

#endif // LEARNING_ROOM_H
