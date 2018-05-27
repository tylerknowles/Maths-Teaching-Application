#ifndef LEARNING_ROOM_CPP
#define LEARNING_ROOM_CPP

#include "learning_room.h"
#include "ui_learning_room.h"



learning_room::learning_room(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::learning_room)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/resources/resources/logo.png"));
    ui->stackedWidget->setCurrentIndex(0);

}

learning_room::~learning_room()
{
    delete ui;
}

void learning_room::on_login_button_clicked()
{
    bool successful_log_in=false;
    account ac;
    successful_log_in=ac.authenticate_login(ui->username_entry->text(), ui->password_entry->text());
    if (successful_log_in)
    {
        id=ac.return_userID();
        username=ac.return_username();
        ui->welcome_label->setText("Welcome "+ username);
        ui->stackedWidget->setCurrentIndex(1);
        modules mod;
        mod.set_module_list();

        mod.set_current_modules(id);
        user_module_vector=mod.get_current_modules();
        for(int i=0; i<user_module_vector.size(); i++)
        {
            ui->existing_modules_list->addItem(user_module_vector[i].Name);
        }

        add_module_vector=mod.get_modules_to_add();
        for(int j=0; j<add_module_vector.size(); j++)
        {
            ui->add_module_list->addItem(add_module_vector[j].Name);
        }
    }

}


void learning_room::on_register_button_clicked()
{
    account ac;
    ac.register_user(ui->username_entry->text(), ui->password_entry->text());
}


void learning_room::on_continue_module_clicked()
{
    chosenMod = ui->existing_modules_list->currentText();
    if((ui->existing_modules_list->currentIndex()==0))
    {
        msgBox.setText("You must choose a module");
        msgBox.exec();
    }
    else
    {
        ui->task_dropdown->clear();
        ui->task_dropdown->addItem("-");

        modules mod;
        mod.set_module_list();
        module_list=mod.get_module_list();
        task_list=mod.get_task_list();
        int j=0;
        bool correctMod=false;
        QString chosenModID;
        while(!correctMod)
        {
            if (module_list[j].Name==chosenMod)
            {
                chosenModID=module_list[j].ID;
                correctMod=true;
            }
            j++;
        }

        chosen_task_list=task_list[chosenModID.toInt()-1].tasks;
        for (int k=0; k<chosen_task_list.size(); k++)
        {
            ui->task_dropdown->addItem(chosen_task_list[k].Name);
        }

        ui->task_name_label->setText(ui->existing_modules_list->currentText());
        ui->stackedWidget->setCurrentIndex(2);
        ui->task_dropdown->setCurrentIndex(0);

    }

}

void learning_room::on_task_previous_button_clicked()
{
    ui->task_dropdown->clear();
    ui->existing_modules_list->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(1);
}

void learning_room::on_task_learn_button_clicked()
{
    if((ui->task_dropdown->currentIndex()==0))
    {
        msgBox.setText("You must choose a task");
        msgBox.exec();
    }
    else
    {
        QString taskIDtoLearn;
        for (int i = 0; i<task_list.size(); i++)
        {
            for (int j =0; j<task_list[i].tasks.size(); j++)
            {
                if(task_list[i].tasks[j].Name==ui->task_dropdown->currentText())
                {
                    taskIDtoLearn=task_list[i].tasks[j].ID;
                }
            }
        }
        ui->stackedWidget->setCurrentIndex(3);
        ui->task_learn_heading->setText(ui->task_dropdown->currentText());
        QPixmap pix(":/resources/resources/material_"+taskIDtoLearn+".png");
        ui->task_learn_info->setPixmap(pix);
        ui->task_learn_info->setScaledContents(true);
    }
}


void learning_room::on_task_test_button_clicked()
{
    if((ui->task_dropdown->currentIndex()==0))
    {
        msgBox.setText("You must choose a task");
        msgBox.exec();
    }
    else
    {
        chosenTest=ui->task_dropdown->currentText();
        QString taskIDtoTest;
        for (int i = 0; i<task_list.size(); i++)
        {
            for (int j =0; j<task_list[i].tasks.size(); j++)
            {
                if(task_list[i].tasks[j].Name==ui->task_dropdown->currentText())
                {
                    taskIDtoTest=task_list[i].tasks[j].ID;
                }
            }
        }
        ui->stackedWidget->setCurrentIndex(4);
        ui->task_test_heading->setText(ui->task_dropdown->currentText());
        QPixmap pix(":/resources/resources/test_"+taskIDtoTest+".png");
        ui->task_test_questions->setPixmap(pix);
        ui->task_test_questions->setScaledContents(true);
    }

}

void learning_room::on_task_learn_previous_button_clicked()
{
    ui->task_dropdown->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(2);
}

void learning_room::on_task_test_previous_button_clicked()
{
    ui->task_dropdown->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(2);
}

void learning_room::on_add_module_button_clicked()
{
    if((ui->add_module_list->currentIndex()==0))
    {
        msgBox.setText("You must choose a module");
        msgBox.exec();
    }
    else
    {
        modules mod;
        mod.set_module_list();
        mod.set_current_modules(id);
        mod.add_module(ui->add_module_list->currentText(), mod.get_modules_to_add(), id);



        ui->existing_modules_list->clear();
        ui->add_module_list->clear();
        ui->existing_modules_list->addItem("-");
        ui->add_module_list->addItem("-");


        QVector<mod_or_task_struct> user_module_vector1;
        QVector<mod_or_task_struct> add_module_vector1;

        modules mod1;
        mod1.set_module_list();
        mod1.set_current_modules(id);
        user_module_vector1=mod1.get_current_modules();


        for(int i=0; i<user_module_vector1.size(); i++)
        {
            ui->existing_modules_list->addItem(user_module_vector1[i].Name);
        }

        add_module_vector1=mod1.get_modules_to_add();
        for(int j=0; j<add_module_vector1.size(); j++)
        {
            ui->add_module_list->addItem(add_module_vector1[j].Name);
        }
    }

}

void learning_room::on_remove_module_button_clicked()
{
    if((ui->existing_modules_list->currentIndex()==0))
    {
        msgBox.setText("You must choose a module");
        msgBox.exec();
    }
    else
    {
        modules mod;
        mod.set_module_list();
        mod.set_current_modules(id);
        mod.delete_module(ui->existing_modules_list->currentText(), mod.get_current_modules(), id);

        ui->existing_modules_list->clear();
        ui->add_module_list->clear();
        ui->existing_modules_list->addItem("-");
        ui->add_module_list->addItem("-");

        QVector<mod_or_task_struct> user_module_vector1;
        QVector<mod_or_task_struct> add_module_vector1;

        modules mod1;
        mod1.set_module_list();
        mod1.set_current_modules(id);
        user_module_vector1=mod1.get_current_modules();
        for(int i=0; i<user_module_vector1.size(); i++)
        {
            ui->existing_modules_list->addItem(user_module_vector1[i].Name);
        }

        add_module_vector1=mod1.get_modules_to_add();
        for(int j=0; j<add_module_vector1.size(); j++)
        {
            ui->add_module_list->addItem(add_module_vector1[j].Name);
        }
    }
}

void learning_room::on_to_scores_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Task Name" << "Score");
    ui->tableWidget->setColumnWidth(0,520);
    ui->tableWidget->setColumnWidth(1,73);
    modules mod;
    mod.set_scores(id);
    QVector<score_struct> scores = mod.get_users_scores();
    //if(scores.size()!=0)
    //{
    QString tempTaskName;
    for (int i=0; i<scores.size(); i++)
    {
        for(int j=0; j<task_list.size(); j++)
        {
            for(int k=0; k<task_list[j].tasks.size(); k++)
            {
                if (scores[i].task_id==task_list[j].tasks[k].ID)
                {
                    tempTaskName=task_list[j].tasks[k].Name;
                }
            }

        }
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, new QTableWidgetItem(tempTaskName));
        scoretopercent=(scores[i].score.toFloat()/4)*100;
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 1, new QTableWidgetItem(QString::number(scoretopercent)));

    }

}

void learning_room::on_scores_previous_button_clicked()
{
    ui->task_dropdown->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(2);
}

void learning_room::on_task_test_submit_clicked()
{
    QVector<QString> answers;
    switch (ui->task_test_q1->checkedId())
    {
    case -2:
        answers.push_back("1");
        break;
    case -3:
        answers.push_back("2");
        break;
    case -4:
        answers.push_back("3");
        break;
    case -5:
        answers.push_back("4");
        break;
    }
    switch (ui->task_test_q2->checkedId())
    {
    case -2:
        answers.push_back("1");
        break;
    case -3:
        answers.push_back("2");
        break;
    case -4:
        answers.push_back("3");
        break;
    case -5:
        answers.push_back("4");
        break;
    }
    switch (ui->task_test_q3->checkedId())
    {
    case -2:
        answers.push_back("1");
        break;
    case -3:
        answers.push_back("2");
        break;
    case -4:
        answers.push_back("3");
        break;
    case -5:
        answers.push_back("4");
        break;
    }
    switch (ui->task_test_q4->checkedId())
    {
    case -2:
        answers.push_back("1");
        break;
    case -3:
        answers.push_back("2");
        break;
    case -4:
        answers.push_back("3");
        break;
    case -5:
        answers.push_back("4");
        break;
    }
    QString testID;
    for(int j=0; j<task_list.size(); j++)
    {
        for(int k=0; k<task_list[j].tasks.size(); k++)
        {
            if (chosenTest==task_list[j].tasks[k].Name)
            {
                testID=task_list[j].tasks[k].ID;
            }
        }
    }
    modules mod;
    int grade=mod.grade_test(testID, answers);

    mod.add_new_score(id,testID,grade);
    ui->task_dropdown->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(2);
}

#endif // LEARNING_ROOM_CPP
