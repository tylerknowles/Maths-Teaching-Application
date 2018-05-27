#ifndef ACCOUNT_CPP
#define ACCOUNT_CPP

#include "account.h"

account::account()
{

}

// function to log the user in
bool account::authenticate_login(QString entered_user, QString entered_password)
{
    // open users file
    QFile users_file("..\\files\\users.txt");
    if (users_file.open((QFile::ReadOnly | QFile::Text)))
    {
    }
    else
    {
        qDebug()<<"Users file not opened";
    }
    // make a stream of users file
    QTextStream users_stream(&users_file);
    QString temp_id, temp_user, temp_password;
    bool logged_in = false;
    // while not at the end of file and not logged in
    while(!users_stream.atEnd() && logged_in == false)
    {
        users_stream>>temp_id;
        users_stream>>temp_user;
        users_stream>>temp_password;
        // if username and password match
        if (entered_user==temp_user && entered_password==temp_password)
        {
            // show a logged in message box
            msgBox.setText("Log in successful");
            msgBox.exec();
            logged_in=true;
            userID=temp_id;
            username=entered_user;
            users_file.close();
            return true;
            }
    }


    if (logged_in==false)
    {
        // show a unsuccessful log in message
        msgBox.setText("Username and password incorrect");
        msgBox.exec();
        users_file.close();
        return false;
    }
    return false;
}


QString account::return_userID()
{
    return userID;
}

QString account::return_username()
{
    return username;
}

// function to register user
void account::register_user(QString entered_user, QString entered_password)
{
    // if username is empty
    if (entered_user=="")
    {
        // show a message saying to enter a username
        msgBox.setText("Please enter a username");
        msgBox.exec();
    }
    else
    {
        // if password is empty
        if (entered_password=="")
        {
            // show a message saying to enter a password
            msgBox.setText("Please enter a password");
            msgBox.exec();        }
        else
        {
            // open user file
            QFile existing_users_file("..\\files\\users.txt");
            if (existing_users_file.open((QFile::ReadOnly | QFile::Text)))
            {}
                //qDebug() << "open";
            //}
            // make a stream of user file
            QTextStream existing_users_stream(&existing_users_file);
            QString temp_existing_id, temp_existing_user, temp_existing_password;
            // sets number of users to 0
            int num_users=0;
            bool already_exists = false;
            // while not at end of user file and doesn't already exist
            while(!existing_users_stream.atEnd() && already_exists == false)
            {
                existing_users_stream>>temp_existing_id;
                existing_users_stream>>temp_existing_user;
                existing_users_stream>>temp_existing_password;
                // increments users
                num_users++;
                // if username exists
                if (entered_user==temp_existing_user)
                {
                    // show a message saying the username already exists
                    msgBox.setText("Username already exists");
                    msgBox.exec();
                    already_exists=true;
                }
            }
            existing_users_file.close();
            // if username isn't taken
            if (already_exists==false)
            {
                // open user file in write mode
                QFile new_user_file("..\\files\\users.txt");
                if (new_user_file.open((QFile::WriteOnly | QFile::Append)))
                {}
                // create a stream of user file
                QTextStream new_user_stream(&new_user_file);
                // opens user modules file
                QFile add_user_file("..\\files\\modules\\user_modules.txt");
                if (add_user_file.open((QFile::WriteOnly | QFile::Append)))
                {}
                // creates a stream of user modules file
                QTextStream add_user_stream(&add_user_file);
                QFile add_scores_file("..\\files\\modules\\scores.txt");
                if (add_scores_file.open((QFile::WriteOnly | QFile::Append)))
                {}
                QTextStream add_scores_stream(&add_scores_file);

                if (num_users==0)
                {
                    new_user_stream<<(num_users+1)<<" "<<entered_user<<" "<<entered_password;
                    add_user_stream<<(num_users+1)<<" /";
                    add_scores_stream<<(num_users+1)<<" /";
                }
                else
                {
                    // writes the id (number of users + 1), username and password to users file
                    new_user_stream<<"\r\n"<<(num_users+1)<<" "<<entered_user<<" "<<entered_password;
                    // writes the user id to the user modules file
                    add_user_stream<<"\r\n"<<(num_users+1)<<" /";
                    add_scores_stream<<"\r\n"<<(num_users+1)<<" /";
                }
                    new_user_file.close();
                    add_user_file.close();
                    add_scores_file.close();

                // shows a message saying that the account has been registered
                msgBox.setText("Account registered");
                msgBox.exec();


            }
}
    }

}

#endif // ACCOUNT_CPP
