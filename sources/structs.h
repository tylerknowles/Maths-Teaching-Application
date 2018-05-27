#ifndef STRUCTS_H
#define STRUCTS_H

struct mod_or_task_struct
{
  QString ID;
  QString Name;
};
struct task_struct
{
  QString modID;
  QVector<mod_or_task_struct> tasks;
};

struct id_modules_struct
{
    QString id;
    QVector<QString> modules;
};

struct score_struct
{
    QString task_id;
    QString score;
};

struct multiple_users_scores_struct
{
    QString id;
    QVector<score_struct> scores;
};


#endif // STRUCTS_H

