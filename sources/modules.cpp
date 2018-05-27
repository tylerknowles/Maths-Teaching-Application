#ifndef MODULES_CPP
#define MODULES_CPP

#include "modules.h"

modules::modules()
{

}

void modules::set_module_list()
{
    // open modules file
    QFile module_list_file("..\\files\\modules\\module_list.txt");
    if (module_list_file.open((QFile::ReadOnly | QFile::Text)))
    {}
    // make a stream of modules file
    QTextStream module_list_stream(&module_list_file);
    QString tempModID, tempModName;
    // loop through module file
    while (!module_list_stream.atEnd())
    {
        // read the first part of line into temp mod id
        module_list_stream>>tempModID;
        // get the rest of the line to make up the module name
        tempModName=module_list_stream.readLine();
        // remove the space at the start of the module name
        tempModName=tempModName.right(tempModName.size()-1);
        // push the module id and module name to the module list vector
        module_list.push_back({tempModID, tempModName});
    }
    module_list_file.close();

    // open the tasks file
    QFile task_list_file("..\\files\\modules\\task_list.txt");
    if (task_list_file.open((QFile::ReadOnly | QFile::Text)))
    {}
    // make a stream of the tasks file
    QTextStream task_list_stream(&task_list_file);
    // initiate previous mod id
    QString previousModID = "1";
    QString tempTaskID, tempTaskName;
    // make a vector to temporarily store tasks
    QVector<mod_or_task_struct> tempModTasks;
    // loop through the task file
    while (!task_list_stream.atEnd())
    {
        // get the first part of the line and store it in the temporary module id
        task_list_stream>>tempModID;
        // get the second part of the line and store it in the temporary task id
        task_list_stream>>tempTaskID;
        // get the rest of the line and store it in the temporary task name
        tempTaskName=task_list_stream.readLine();
        // remove the space at the start of the temporary task name
        tempTaskName=tempTaskName.right(tempTaskName.size()-1);
        // if still dealing with the same module id
        if (tempModID==previousModID)
        {
            // push the temporary task id and temporary task name to the current modules' list of tasks
            tempModTasks.push_back({tempTaskID,tempTaskName});
        }
        // if deadling with a different module id now
        else
        {
            // push the module id of the last module along with it's tasks to the task_list
            task_list.push_back({previousModID, tempModTasks});
            // clear the temporary module tasks vector
            tempModTasks.clear();
            // push the temporary task id and temporary task name to the temporary tasks vector
            tempModTasks.push_back({tempTaskID, tempTaskName});
        }
        // increment the previous module id
        previousModID=tempModID;
    }
    task_list.push_back({previousModID, tempModTasks});

}

QVector<mod_or_task_struct> modules::get_module_list()
{
    // return the list of modules
    return module_list;
}

QVector<task_struct> modules::get_task_list()
{
    // return the list of tasks
    return task_list;
}


void modules::set_current_modules(QString id)
{
    // clear the user modules vector
    users_modules.clear();
    // open the user modules file
    QFile user_module_file("..\\files\\modules\\user_modules.txt");
    if (user_module_file.open((QFile::ReadOnly | QFile::Text)))
    {}
    // create a stream of the user modules file
    QTextStream user_module_stream(&user_module_file);

    QString tempID, tempModuleID;
    // create a vector to store the user's module IDs
    QVector<QString> userModIDVec;
    bool notID=true;
    bool endoflist=false;
    // while the user's ID has not be found
    while(notID)
    {
        user_module_stream>>tempID;
        // if the temporary ID equals the user's ID
        if (tempID==id)
        {
            // while not the end of user's modules
            while(!endoflist)
            {
                // get the next module
                user_module_stream>>tempModuleID;
                // if a / is found
                if (tempModuleID=="/")
                {
                    // the end of the list has been reached
                    endoflist=true;
                }
                else
                {
                    // push the module ID to the user's module ID vector
                    userModIDVec.push_back(tempModuleID);
                }
            }
            // the ID has been found so end the loop
            notID=false;
        }
        else
        {
            // read the rest of the line as it isn't the correct ID
            tempModuleID=user_module_stream.readLine();
        }
    }
    user_module_file.close();

    bool modExists=false;
    // loop through the module list
    for(int i=0; i<module_list.size(); i++)
    {
        modExists=false;
        // loop through the user's module ID vector
        for(int j=0; j<userModIDVec.size(); j++)
        {
            // if the user has that module
            if (module_list[i].ID==userModIDVec[j])
            {
                modExists=true;
            }
        }
        if (modExists==true)
        {
            // push the module to the user's modules vector
            users_modules.push_back({module_list[i].ID,module_list[i].Name});
        }
        else
        {
            // push the module to the user's modules to add vector
            users_modules_to_add.push_back({module_list[i].ID,module_list[i].Name});
        }
    }
}

QVector<mod_or_task_struct> modules::get_current_modules()
{
    // return the user's modules
    return users_modules;
}


QVector<mod_or_task_struct> modules::get_modules_to_add()
{
    // return the user's modules to add
    return users_modules_to_add;
}

void modules::add_module(QString ModName, QVector<mod_or_task_struct> mod_list, QString id)
{
    // open the user modules file
    QFile user_module_file("..\\files\\modules\\user_modules.txt");
    if (user_module_file.open((QFile::ReadOnly | QFile::Text)))
    {}
    // create a stream of the user modules file
    QTextStream user_module_stream(&user_module_file);
    QString tempID, tempMod;
    QVector<QString> tempMods;
    QVector<id_modules_struct> id_modules_vector;
    bool endofline = false;
    // while not at the end of file
    while(!user_module_stream.atEnd())
    {
        endofline=false;
        user_module_stream>>tempID;
        while(!endofline)
        {
            user_module_stream>>tempMod;
            // if a / is found then it is the end of the line
            if (tempMod=="/")
            {
                endofline=true;
            }
            else
            {
                // if not then push the module
                tempMods.push_back(tempMod);
            }
        }
        // push the temporary id and temporary modules to the vector
        id_modules_vector.push_back({tempID, tempMods});
        // clear the temporary modules vector
        tempMods.clear();
    }
    user_module_file.close();

    QString idtoadd;
    for (int i=0; i<mod_list.size(); i++)
    {
        if (ModName==mod_list[i].Name)
        {
            idtoadd=mod_list[i].ID;
        }
    }
    QVector<QString> tempVec;
    int id1 = id.toInt();
    tempVec=id_modules_vector[id1-1].modules;
    tempVec.push_back(idtoadd);
    id_modules_vector[id1-1]={id_modules_vector[id1-1].id, tempVec};


    QFile add_module_file("..\\files\\modules\\user_modules.txt");
    if (add_module_file.open((QFile::WriteOnly | QFile::Text)))
    {}
    QTextStream add_module_stream(&add_module_file);
    for (int j=0; j<id_modules_vector.size(); j++)
    {
        add_module_stream<<id_modules_vector[j].id<<" ";
        for (int k=0; k<id_modules_vector[j].modules.size(); k++)
        {
            add_module_stream<<id_modules_vector[j].modules[k]<<" ";
        }
        add_module_stream<<"/";
        if (j!=id_modules_vector.size()-1)
        {
            add_module_stream<<"\r\n";
        }

    }
    add_module_file.close();
    msgBox.setText(ModName+" succesfully added");
    msgBox.exec();
}

void modules::delete_module(QString ModName, QVector<mod_or_task_struct> mod_list, QString id)
{
    QFile user_module_file("..\\files\\modules\\user_modules.txt");
    if (user_module_file.open((QFile::ReadOnly | QFile::Text)))
    {}
    QTextStream user_module_stream(&user_module_file);
    QString tempID, tempMod;
    QVector<QString> tempMods;
    QVector<id_modules_struct> id_modules_vector;
    bool endofline = false;
    while(!user_module_stream.atEnd())
    {
        endofline=false;
        user_module_stream>>tempID;
        while(!endofline)
        {
            user_module_stream>>tempMod;
            if (tempMod=="/")
            {
                endofline=true;
            }
            else
            {
                tempMods.push_back(tempMod);
            }
        }
        id_modules_vector.push_back({tempID, tempMods});
        tempMods.clear();
    }
    user_module_file.close();



    QString idtodel;
    for (int i=0; i<mod_list.size(); i++)
    {
        if (ModName==mod_list[i].Name)
        {
            idtodel=mod_list[i].ID;
        }
    }
    QVector<QString> tempVec;
    int id1 = id.toInt();
    tempVec=id_modules_vector[id1-1].modules;
    for (int l=0; l<tempVec.size(); l++)
    {
        if (tempVec[l]==idtodel)
        {
            tempVec.erase(tempVec.begin()+l);
        }
    }
    id_modules_vector[id1-1]={id_modules_vector[id1-1].id, tempVec};


    QFile delete_module_file("..\\files\\modules\\user_modules.txt");
    if (delete_module_file.open((QFile::WriteOnly | QFile::Text)))
    {}
    QTextStream delete_module_stream(&delete_module_file);
    for (int j=0; j<id_modules_vector.size(); j++)
    {
        delete_module_stream<<id_modules_vector[j].id<<" ";
        for (int k=0; k<id_modules_vector[j].modules.size(); k++)
        {
            delete_module_stream<<id_modules_vector[j].modules[k]<<" ";
        }
        delete_module_stream<<"/";
        if (j!=id_modules_vector.size()-1)
        {
            delete_module_stream<<"\r\n";
        }

    }
    delete_module_file.close();
    msgBox.setText(ModName+" succesfully removed");
    msgBox.exec();

}

void modules::set_scores(QString id)
{
    QFile scores_file("..\\files\\modules\\scores.txt");
    if (scores_file.open((QFile::ReadOnly | QFile::Text)))
    {}
    QTextStream scores_stream(&scores_file);
    QString tempID, tempTaskID, tempScore;
    bool notID=true;
    bool endoflist=false;
    while(notID)
    {
        scores_stream>>tempID;
        if (tempID==id)
        {
            while(!endoflist)
            {
            scores_stream>>tempTaskID;
            scores_stream>>tempScore;
            if (tempTaskID=="/" || tempScore=="/")
            {
                endoflist=true;
            }
            else
            {
                users_scores.push_back({tempTaskID, tempScore});
            }
        }
            notID=false;
        }
        else
        {
            tempTaskID=scores_stream.readLine();
        }
    }
    scores_file.close();
}

QVector<score_struct> modules::get_users_scores()
{
    return users_scores;
}

void modules::add_new_score(QString id, QString taskID, int Score)
{
    QFile scores_file("..\\files\\modules\\scores.txt");
    if (scores_file.open((QFile::ReadOnly | QFile::Text)))
    {}
    QTextStream scores_stream(&scores_file); 

    QString tempID, tempTaskID, tempScore;
    QVector<score_struct> tempScores;
    QVector<multiple_users_scores_struct> allScores;;
    bool endofline = false;

    while(!scores_stream.atEnd())
    {
        endofline=false;
        scores_stream>>tempID;
        while(!endofline)
        {
            scores_stream>>tempTaskID;
            if (tempTaskID=="/")
            {
                endofline=true;
            }
            else
            {
                scores_stream>>tempScore;
                if (tempScore=="/")
                {
                    endofline=true;
                }
                else
                {
                tempScores.push_back({tempTaskID, tempScore});
                }
            }
        }
        allScores.push_back({tempID, tempScores});
        tempScores.clear();
    }
    scores_file.close();

    int idasint = id.toInt();
    bool scoreExists=false;
    int posToUpdate;
    for (int i=0; i<allScores[idasint-1].scores.size(); i++)
    {
        if (allScores[idasint-1].scores[i].task_id == taskID)
        {
            posToUpdate=i;
            scoreExists=true;
        }
    }

    if (scoreExists)
    {
        if (Score>allScores[idasint-1].scores[posToUpdate].score.toInt())
        {
            tempScores=allScores[idasint-1].scores;
            tempScores[posToUpdate].score=QString::number(Score);
            allScores[idasint-1]={id, tempScores};
        }
    }
    else
    {
        tempScores=allScores[idasint-1].scores;
        QString ScoreStr = QString::number(Score);
        tempScores.push_back({taskID, ScoreStr});
        allScores[idasint-1]={id, tempScores};
    }


    QFile add_score_file("..\\files\\modules\\scores.txt");
    if (add_score_file.open((QFile::WriteOnly | QFile::Text)))
    {}
    QTextStream add_score_stream(&add_score_file);
    for (int j=0; j<allScores.size(); j++)
    {
        add_score_stream<<allScores[j].id<<" ";
        for (int k=0; k<allScores[j].scores.size(); k++)
        {
            add_score_stream<<allScores[j].scores[k].task_id<<" ";
            add_score_stream<<allScores[j].scores[k].score<<" ";
        }
        add_score_stream<<"/";
        if (j!=allScores.size()-1)
        {
            add_score_stream<<"\r\n";
        }

    }
    add_score_file.close();

}

int modules::grade_test(QString testID, QVector<QString> answers)
{
    QFile test_file("..\\files\\modules\\test_answers.txt");
    if (test_file.open((QFile::ReadOnly | QFile::Text)))
    {}
    QTextStream test_stream(&test_file);
    QString tempTestID, tempCorrectAnswer;
    QVector <QString> correctAnswers;
    bool foundAnswers=false;
    while (!test_stream.atEnd() && foundAnswers==false)
    {
        test_stream>>tempTestID;
        if (tempTestID==testID)
        {
            for (int i=0;i<4; i++)
            {
                test_stream>>tempCorrectAnswer;
                correctAnswers.push_back(tempCorrectAnswer);
            }
            foundAnswers=true;
        }
        else
        {
            tempTestID=test_stream.readLine();
        }
    }
    int total=0;
    QVector<QString> correctOrIncorrect;
    for(int j=0; j<4; j++)
    {
        if(answers[j]==correctAnswers[j])
        {
            total++;
            correctOrIncorrect.push_back("correct");
        }
        else
        {
            correctOrIncorrect.push_back("incorrect");
        }
    }
    QString message= "You got "+QString::number(total)+ " out of 4.\nQuestion 1: "+correctOrIncorrect[0]+".\nQuestion 2: "+correctOrIncorrect[1]+
            ".\nQuestion 3: "+correctOrIncorrect[2]+".\nQuestion 4: "+correctOrIncorrect[3]+".";
    msgBox.setText(message);
    msgBox.exec();
    return total;
}

#endif // MODULES_CPP
