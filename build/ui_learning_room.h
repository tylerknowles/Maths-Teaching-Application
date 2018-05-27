/********************************************************************************
** Form generated from reading UI file 'learning_room.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARNING_ROOM_H
#define UI_LEARNING_ROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_learning_room
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *login_screen;
    QLabel *login_image;
    QLabel *username_label;
    QLineEdit *username_entry;
    QLabel *password_label;
    QLineEdit *password_entry;
    QPushButton *login_button;
    QPushButton *register_button;
    QWidget *main_menu;
    QLabel *menu_image;
    QLabel *welcome_label;
    QLabel *modules_label;
    QLabel *choose_model_heading;
    QPushButton *continue_module;
    QComboBox *existing_modules_list;
    QPushButton *remove_module_button;
    QLabel *add_module_heading;
    QComboBox *add_module_list;
    QPushButton *add_module_button;
    QWidget *task_list;
    QLabel *task_previous_label;
    QLabel *task_name_label;
    QLabel *task_heading_label;
    QLabel *task_heading;
    QPushButton *task_learn_button;
    QPushButton *task_test_button;
    QPushButton *task_previous_button;
    QComboBox *task_dropdown;
    QLabel *to_scores_heading;
    QPushButton *to_scores_button;
    QWidget *task_learn;
    QLabel *task_learn_previous;
    QPushButton *task_learn_previous_button;
    QLabel *task_learn_heading;
    QLabel *task_learn_info;
    QWidget *topic1_test;
    QLabel *task_test_previous;
    QPushButton *task_test_previous_button;
    QLabel *task_test_heading;
    QLabel *task_test_questions;
    QPushButton *task_test_submit;
    QRadioButton *q1_a1;
    QRadioButton *q1_a2;
    QRadioButton *q1_a3;
    QRadioButton *q1_a4;
    QRadioButton *q2_a1;
    QRadioButton *q2_a2;
    QRadioButton *q2_a3;
    QRadioButton *q2_a4;
    QRadioButton *q3_a1;
    QRadioButton *q3_a2;
    QRadioButton *q3_a3;
    QRadioButton *q3_a4;
    QRadioButton *q4_a1;
    QRadioButton *q4_a2;
    QRadioButton *q4_a3;
    QRadioButton *q4_a4;
    QWidget *scores;
    QLabel *scores_previous;
    QPushButton *scores_previous_button;
    QLabel *scores_heading;
    QTableWidget *tableWidget;
    QButtonGroup *task_test_q1;
    QButtonGroup *task_test_q3;
    QButtonGroup *task_test_q4;
    QButtonGroup *task_test_q2;

    void setupUi(QMainWindow *learning_room)
    {
        if (learning_room->objectName().isEmpty())
            learning_room->setObjectName(QStringLiteral("learning_room"));
        learning_room->resize(700, 600);
        learning_room->setMaximumSize(QSize(700, 600));
        centralWidget = new QWidget(learning_room);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMaximumSize(QSize(700, 600));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 700, 600));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMaximumSize(QSize(700, 600));
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QStringLiteral("background-color: rgb(197, 244, 254);"));
        login_screen = new QWidget();
        login_screen->setObjectName(QStringLiteral("login_screen"));
        login_screen->setAutoFillBackground(false);
        login_screen->setStyleSheet(QStringLiteral(""));
        login_image = new QLabel(login_screen);
        login_image->setObjectName(QStringLiteral("login_image"));
        login_image->setGeometry(QRect(222, 20, 257, 262));
        login_image->setPixmap(QPixmap(QString::fromUtf8(":/resources/resources/menuimage.png")));
        login_image->setScaledContents(true);
        username_label = new QLabel(login_screen);
        username_label->setObjectName(QStringLiteral("username_label"));
        username_label->setGeometry(QRect(240, 300, 220, 40));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(18);
        username_label->setFont(font);
        username_entry = new QLineEdit(login_screen);
        username_entry->setObjectName(QStringLiteral("username_entry"));
        username_entry->setGeometry(QRect(240, 350, 220, 40));
        username_entry->setFont(font);
        username_entry->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        password_label = new QLabel(login_screen);
        password_label->setObjectName(QStringLiteral("password_label"));
        password_label->setGeometry(QRect(240, 400, 220, 40));
        password_label->setFont(font);
        password_entry = new QLineEdit(login_screen);
        password_entry->setObjectName(QStringLiteral("password_entry"));
        password_entry->setGeometry(QRect(240, 450, 220, 40));
        password_entry->setFont(font);
        password_entry->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        password_entry->setEchoMode(QLineEdit::Password);
        login_button = new QPushButton(login_screen);
        login_button->setObjectName(QStringLiteral("login_button"));
        login_button->setGeometry(QRect(350, 510, 110, 60));
        login_button->setFont(font);
        login_button->setStyleSheet(QStringLiteral("background-color: rgb(177,219,228);"));
        register_button = new QPushButton(login_screen);
        register_button->setObjectName(QStringLiteral("register_button"));
        register_button->setGeometry(QRect(240, 510, 110, 60));
        QFont font1;
        font1.setPointSize(18);
        register_button->setFont(font1);
        register_button->setStyleSheet(QStringLiteral("background-color: rgb(177,219,228);"));
        stackedWidget->addWidget(login_screen);
        main_menu = new QWidget();
        main_menu->setObjectName(QStringLiteral("main_menu"));
        menu_image = new QLabel(main_menu);
        menu_image->setObjectName(QStringLiteral("menu_image"));
        menu_image->setGeometry(QRect(615, 10, 75, 75));
        menu_image->setPixmap(QPixmap(QString::fromUtf8(":/resources/resources/menuimage.png")));
        menu_image->setScaledContents(true);
        welcome_label = new QLabel(main_menu);
        welcome_label->setObjectName(QStringLiteral("welcome_label"));
        welcome_label->setGeometry(QRect(80, 10, 510, 75));
        welcome_label->setFont(font);
        modules_label = new QLabel(main_menu);
        modules_label->setObjectName(QStringLiteral("modules_label"));
        modules_label->setGeometry(QRect(40, 90, 200, 50));
        QFont font2;
        font2.setPointSize(16);
        modules_label->setFont(font2);
        choose_model_heading = new QLabel(main_menu);
        choose_model_heading->setObjectName(QStringLiteral("choose_model_heading"));
        choose_model_heading->setGeometry(QRect(40, 140, 620, 180));
        QFont font3;
        font3.setPointSize(14);
        choose_model_heading->setFont(font3);
        choose_model_heading->setStyleSheet(QLatin1String("border: 1px solid black;\n"
"background-color: rgb(255, 255, 255);"));
        continue_module = new QPushButton(main_menu);
        continue_module->setObjectName(QStringLiteral("continue_module"));
        continue_module->setGeometry(QRect(470, 190, 170, 50));
        continue_module->setFont(font3);
        continue_module->setStyleSheet(QStringLiteral("background-color: rgba(220, 230, 242); border: none;"));
        existing_modules_list = new QComboBox(main_menu);
        existing_modules_list->addItem(QString());
        existing_modules_list->setObjectName(QStringLiteral("existing_modules_list"));
        existing_modules_list->setGeometry(QRect(60, 220, 360, 50));
        existing_modules_list->setFont(font3);
        remove_module_button = new QPushButton(main_menu);
        remove_module_button->setObjectName(QStringLiteral("remove_module_button"));
        remove_module_button->setGeometry(QRect(470, 250, 170, 50));
        remove_module_button->setFont(font3);
        remove_module_button->setStyleSheet(QStringLiteral("background-color: rgba(242, 220, 219); border: none;"));
        add_module_heading = new QLabel(main_menu);
        add_module_heading->setObjectName(QStringLiteral("add_module_heading"));
        add_module_heading->setGeometry(QRect(40, 350, 620, 180));
        add_module_heading->setFont(font3);
        add_module_heading->setStyleSheet(QLatin1String("border: 1px solid black;\n"
"background-color: rgb(255, 255, 255);"));
        add_module_list = new QComboBox(main_menu);
        add_module_list->addItem(QString());
        add_module_list->setObjectName(QStringLiteral("add_module_list"));
        add_module_list->setGeometry(QRect(60, 430, 360, 50));
        add_module_list->setFont(font3);
        add_module_button = new QPushButton(main_menu);
        add_module_button->setObjectName(QStringLiteral("add_module_button"));
        add_module_button->setGeometry(QRect(470, 430, 170, 50));
        add_module_button->setFont(font3);
        add_module_button->setStyleSheet(QStringLiteral("background-color: rgb(235, 241, 222); border:none;"));
        stackedWidget->addWidget(main_menu);
        task_list = new QWidget();
        task_list->setObjectName(QStringLiteral("task_list"));
        task_previous_label = new QLabel(task_list);
        task_previous_label->setObjectName(QStringLiteral("task_previous_label"));
        task_previous_label->setGeometry(QRect(615, 10, 75, 75));
        task_previous_label->setAutoFillBackground(false);
        task_previous_label->setStyleSheet(QStringLiteral(""));
        task_previous_label->setPixmap(QPixmap(QString::fromUtf8(":/resources/resources/previousimage.png")));
        task_previous_label->setScaledContents(true);
        task_name_label = new QLabel(task_list);
        task_name_label->setObjectName(QStringLiteral("task_name_label"));
        task_name_label->setGeometry(QRect(80, 10, 510, 75));
        task_name_label->setFont(font);
        task_heading_label = new QLabel(task_list);
        task_heading_label->setObjectName(QStringLiteral("task_heading_label"));
        task_heading_label->setGeometry(QRect(40, 90, 200, 50));
        task_heading_label->setFont(font2);
        task_heading = new QLabel(task_list);
        task_heading->setObjectName(QStringLiteral("task_heading"));
        task_heading->setGeometry(QRect(40, 140, 620, 180));
        task_heading->setFont(font3);
        task_heading->setStyleSheet(QLatin1String("border: 1px solid black;\n"
"background-color: rgb(255, 255, 255);"));
        task_learn_button = new QPushButton(task_list);
        task_learn_button->setObjectName(QStringLiteral("task_learn_button"));
        task_learn_button->setGeometry(QRect(470, 190, 170, 50));
        task_learn_button->setFont(font3);
        task_learn_button->setStyleSheet(QStringLiteral("background-color: rgba(220, 230, 242); border: none;"));
        task_test_button = new QPushButton(task_list);
        task_test_button->setObjectName(QStringLiteral("task_test_button"));
        task_test_button->setGeometry(QRect(470, 250, 170, 50));
        task_test_button->setFont(font3);
        task_test_button->setStyleSheet(QStringLiteral("background-color: rgb(235, 241, 222); border:none;"));
        task_previous_button = new QPushButton(task_list);
        task_previous_button->setObjectName(QStringLiteral("task_previous_button"));
        task_previous_button->setGeometry(QRect(615, 10, 75, 75));
        task_previous_button->setStyleSheet(QStringLiteral("background:transparent; border:none;"));
        task_dropdown = new QComboBox(task_list);
        task_dropdown->addItem(QString());
        task_dropdown->setObjectName(QStringLiteral("task_dropdown"));
        task_dropdown->setGeometry(QRect(60, 220, 360, 50));
        task_dropdown->setFont(font3);
        to_scores_heading = new QLabel(task_list);
        to_scores_heading->setObjectName(QStringLiteral("to_scores_heading"));
        to_scores_heading->setGeometry(QRect(40, 350, 621, 180));
        to_scores_heading->setFont(font3);
        to_scores_heading->setStyleSheet(QLatin1String("border: 1px solid black;\n"
"background-color: rgb(255, 255, 255);"));
        to_scores_button = new QPushButton(task_list);
        to_scores_button->setObjectName(QStringLiteral("to_scores_button"));
        to_scores_button->setGeometry(QRect(170, 430, 360, 50));
        to_scores_button->setFont(font3);
        to_scores_button->setStyleSheet(QStringLiteral("background-color: rgba(220, 230, 242); border: none;"));
        stackedWidget->addWidget(task_list);
        task_learn = new QWidget();
        task_learn->setObjectName(QStringLiteral("task_learn"));
        task_learn_previous = new QLabel(task_learn);
        task_learn_previous->setObjectName(QStringLiteral("task_learn_previous"));
        task_learn_previous->setGeometry(QRect(615, 10, 75, 75));
        task_learn_previous->setAutoFillBackground(false);
        task_learn_previous->setStyleSheet(QStringLiteral(""));
        task_learn_previous->setPixmap(QPixmap(QString::fromUtf8(":/resources/resources/previousimage.png")));
        task_learn_previous->setScaledContents(true);
        task_learn_previous_button = new QPushButton(task_learn);
        task_learn_previous_button->setObjectName(QStringLiteral("task_learn_previous_button"));
        task_learn_previous_button->setGeometry(QRect(615, 10, 75, 75));
        task_learn_previous_button->setStyleSheet(QStringLiteral("background:transparent; border:none;"));
        task_learn_heading = new QLabel(task_learn);
        task_learn_heading->setObjectName(QStringLiteral("task_learn_heading"));
        task_learn_heading->setGeometry(QRect(80, 10, 510, 75));
        task_learn_heading->setFont(font);
        task_learn_info = new QLabel(task_learn);
        task_learn_info->setObjectName(QStringLiteral("task_learn_info"));
        task_learn_info->setGeometry(QRect(40, 100, 620, 460));
        task_learn_info->setFont(font3);
        task_learn_info->setStyleSheet(QLatin1String("border: 1px solid black;\n"
"background-color: rgb(255, 255, 255);\n"
"qproperty-alignment: AlignCenter;"));
        task_learn_info->setScaledContents(false);
        stackedWidget->addWidget(task_learn);
        topic1_test = new QWidget();
        topic1_test->setObjectName(QStringLiteral("topic1_test"));
        task_test_previous = new QLabel(topic1_test);
        task_test_previous->setObjectName(QStringLiteral("task_test_previous"));
        task_test_previous->setGeometry(QRect(615, 10, 75, 75));
        task_test_previous->setAutoFillBackground(false);
        task_test_previous->setStyleSheet(QStringLiteral(""));
        task_test_previous->setPixmap(QPixmap(QString::fromUtf8(":/resources/resources/previousimage.png")));
        task_test_previous->setScaledContents(true);
        task_test_previous_button = new QPushButton(topic1_test);
        task_test_previous_button->setObjectName(QStringLiteral("task_test_previous_button"));
        task_test_previous_button->setGeometry(QRect(615, 10, 75, 75));
        task_test_previous_button->setStyleSheet(QStringLiteral("background:transparent; border:none;"));
        task_test_heading = new QLabel(topic1_test);
        task_test_heading->setObjectName(QStringLiteral("task_test_heading"));
        task_test_heading->setGeometry(QRect(80, 10, 510, 75));
        task_test_heading->setFont(font);
        task_test_questions = new QLabel(topic1_test);
        task_test_questions->setObjectName(QStringLiteral("task_test_questions"));
        task_test_questions->setGeometry(QRect(40, 100, 620, 460));
        task_test_questions->setFont(font3);
        task_test_questions->setStyleSheet(QLatin1String("border: 1px solid black;\n"
"background-color: rgb(255, 255, 255);\n"
"qproperty-alignment: AlignCenter;"));
        task_test_questions->setScaledContents(false);
        task_test_submit = new QPushButton(topic1_test);
        task_test_submit->setObjectName(QStringLiteral("task_test_submit"));
        task_test_submit->setGeometry(QRect(100, 500, 501, 50));
        task_test_submit->setFont(font3);
        q1_a1 = new QRadioButton(topic1_test);
        task_test_q1 = new QButtonGroup(learning_room);
        task_test_q1->setObjectName(QStringLiteral("task_test_q1"));
        task_test_q1->addButton(q1_a1);
        q1_a1->setObjectName(QStringLiteral("q1_a1"));
        q1_a1->setGeometry(QRect(100, 150, 20, 20));
        q1_a1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q1_a2 = new QRadioButton(topic1_test);
        task_test_q1->addButton(q1_a2);
        q1_a2->setObjectName(QStringLiteral("q1_a2"));
        q1_a2->setGeometry(QRect(100, 190, 20, 20));
        q1_a2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q1_a3 = new QRadioButton(topic1_test);
        task_test_q1->addButton(q1_a3);
        q1_a3->setObjectName(QStringLiteral("q1_a3"));
        q1_a3->setGeometry(QRect(100, 230, 20, 20));
        q1_a3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q1_a4 = new QRadioButton(topic1_test);
        task_test_q1->addButton(q1_a4);
        q1_a4->setObjectName(QStringLiteral("q1_a4"));
        q1_a4->setGeometry(QRect(100, 260, 20, 20));
        q1_a4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q2_a1 = new QRadioButton(topic1_test);
        task_test_q2 = new QButtonGroup(learning_room);
        task_test_q2->setObjectName(QStringLiteral("task_test_q2"));
        task_test_q2->addButton(q2_a1);
        q2_a1->setObjectName(QStringLiteral("q2_a1"));
        q2_a1->setGeometry(QRect(460, 120, 20, 20));
        q2_a1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q2_a2 = new QRadioButton(topic1_test);
        task_test_q2->addButton(q2_a2);
        q2_a2->setObjectName(QStringLiteral("q2_a2"));
        q2_a2->setGeometry(QRect(460, 160, 20, 20));
        q2_a2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q2_a3 = new QRadioButton(topic1_test);
        task_test_q2->addButton(q2_a3);
        q2_a3->setObjectName(QStringLiteral("q2_a3"));
        q2_a3->setGeometry(QRect(460, 200, 20, 20));
        q2_a3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q2_a4 = new QRadioButton(topic1_test);
        task_test_q2->addButton(q2_a4);
        q2_a4->setObjectName(QStringLiteral("q2_a4"));
        q2_a4->setGeometry(QRect(460, 230, 20, 20));
        q2_a4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q3_a1 = new QRadioButton(topic1_test);
        task_test_q3 = new QButtonGroup(learning_room);
        task_test_q3->setObjectName(QStringLiteral("task_test_q3"));
        task_test_q3->addButton(q3_a1);
        q3_a1->setObjectName(QStringLiteral("q3_a1"));
        q3_a1->setGeometry(QRect(100, 340, 20, 20));
        q3_a1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q3_a2 = new QRadioButton(topic1_test);
        task_test_q3->addButton(q3_a2);
        q3_a2->setObjectName(QStringLiteral("q3_a2"));
        q3_a2->setGeometry(QRect(100, 370, 20, 20));
        q3_a2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q3_a3 = new QRadioButton(topic1_test);
        task_test_q3->addButton(q3_a3);
        q3_a3->setObjectName(QStringLiteral("q3_a3"));
        q3_a3->setGeometry(QRect(90, 400, 20, 20));
        q3_a3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q3_a4 = new QRadioButton(topic1_test);
        task_test_q3->addButton(q3_a4);
        q3_a4->setObjectName(QStringLiteral("q3_a4"));
        q3_a4->setGeometry(QRect(100, 430, 20, 20));
        q3_a4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q4_a1 = new QRadioButton(topic1_test);
        task_test_q4 = new QButtonGroup(learning_room);
        task_test_q4->setObjectName(QStringLiteral("task_test_q4"));
        task_test_q4->addButton(q4_a1);
        q4_a1->setObjectName(QStringLiteral("q4_a1"));
        q4_a1->setGeometry(QRect(460, 330, 20, 20));
        q4_a1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q4_a2 = new QRadioButton(topic1_test);
        task_test_q4->addButton(q4_a2);
        q4_a2->setObjectName(QStringLiteral("q4_a2"));
        q4_a2->setGeometry(QRect(460, 360, 20, 20));
        q4_a2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q4_a3 = new QRadioButton(topic1_test);
        task_test_q4->addButton(q4_a3);
        q4_a3->setObjectName(QStringLiteral("q4_a3"));
        q4_a3->setGeometry(QRect(460, 390, 20, 20));
        q4_a3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        q4_a4 = new QRadioButton(topic1_test);
        task_test_q4->addButton(q4_a4);
        q4_a4->setObjectName(QStringLiteral("q4_a4"));
        q4_a4->setGeometry(QRect(460, 420, 20, 20));
        q4_a4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(topic1_test);
        scores = new QWidget();
        scores->setObjectName(QStringLiteral("scores"));
        scores_previous = new QLabel(scores);
        scores_previous->setObjectName(QStringLiteral("scores_previous"));
        scores_previous->setGeometry(QRect(610, 10, 75, 75));
        scores_previous->setAutoFillBackground(false);
        scores_previous->setStyleSheet(QStringLiteral(""));
        scores_previous->setPixmap(QPixmap(QString::fromUtf8(":/resources/resources/previousimage.png")));
        scores_previous->setScaledContents(true);
        scores_previous_button = new QPushButton(scores);
        scores_previous_button->setObjectName(QStringLiteral("scores_previous_button"));
        scores_previous_button->setGeometry(QRect(615, 10, 75, 75));
        scores_previous_button->setStyleSheet(QStringLiteral("background:transparent; border:none;"));
        scores_heading = new QLabel(scores);
        scores_heading->setObjectName(QStringLiteral("scores_heading"));
        scores_heading->setGeometry(QRect(80, 10, 510, 75));
        scores_heading->setFont(font);
        tableWidget = new QTableWidget(scores);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 100, 620, 460));
        QFont font4;
        font4.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font4.setPointSize(14);
        tableWidget->setFont(font4);
        tableWidget->setStyleSheet(QLatin1String("QHeaderView { font: 14pt \"MS Shell Dlg 2\";}\n"
""));
        stackedWidget->addWidget(scores);
        learning_room->setCentralWidget(centralWidget);

        retranslateUi(learning_room);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(learning_room);
    } // setupUi

    void retranslateUi(QMainWindow *learning_room)
    {
        learning_room->setWindowTitle(QApplication::translate("learning_room", "Learning Room", nullptr));
        login_image->setText(QString());
        username_label->setText(QApplication::translate("learning_room", "Username:", nullptr));
        password_label->setText(QApplication::translate("learning_room", "Password:", nullptr));
        login_button->setText(QApplication::translate("learning_room", "Log in", nullptr));
        register_button->setText(QApplication::translate("learning_room", "Register", nullptr));
        menu_image->setText(QString());
        welcome_label->setText(QApplication::translate("learning_room", "Welcome (User)", nullptr));
        modules_label->setText(QApplication::translate("learning_room", "Modules", nullptr));
        choose_model_heading->setText(QApplication::translate("learning_room", "Choose module to continue or remove\n"
"\n"
"\n"
"\n"
"\n"
"", nullptr));
        continue_module->setText(QApplication::translate("learning_room", "Continue", nullptr));
        existing_modules_list->setItemText(0, QApplication::translate("learning_room", "-", nullptr));

        remove_module_button->setText(QApplication::translate("learning_room", "Remove Module", nullptr));
        add_module_heading->setText(QApplication::translate("learning_room", "Choose module to add\n"
"\n"
"\n"
"\n"
"\n"
"", nullptr));
        add_module_list->setItemText(0, QApplication::translate("learning_room", "-", nullptr));

        add_module_button->setText(QApplication::translate("learning_room", "Add module", nullptr));
        task_previous_label->setText(QString());
        task_name_label->setText(QString());
        task_heading_label->setText(QApplication::translate("learning_room", "Tasks", nullptr));
        task_heading->setText(QApplication::translate("learning_room", "Choose task to learn or be tested on\n"
"\n"
"\n"
"\n"
"\n"
"", nullptr));
        task_learn_button->setText(QApplication::translate("learning_room", "Learning Material", nullptr));
        task_test_button->setText(QApplication::translate("learning_room", "Take Test", nullptr));
        task_previous_button->setText(QString());
        task_dropdown->setItemText(0, QApplication::translate("learning_room", "-", nullptr));

        to_scores_heading->setText(QApplication::translate("learning_room", "View test scores \n"
"\n"
"\n"
"\n"
"\n"
"", nullptr));
        to_scores_button->setText(QApplication::translate("learning_room", "Scores", nullptr));
        task_learn_previous->setText(QString());
        task_learn_previous_button->setText(QString());
        task_learn_heading->setText(QApplication::translate("learning_room", "Quadratic Equations", nullptr));
        task_learn_info->setText(QString());
        task_test_previous->setText(QString());
        task_test_previous_button->setText(QString());
        task_test_heading->setText(QApplication::translate("learning_room", "Quadratic Equations Test", nullptr));
        task_test_questions->setText(QString());
        task_test_submit->setText(QApplication::translate("learning_room", "Submit Answers", nullptr));
        q1_a1->setText(QString());
        q1_a2->setText(QString());
        q1_a3->setText(QString());
        q1_a4->setText(QString());
        q2_a1->setText(QString());
        q2_a2->setText(QString());
        q2_a3->setText(QString());
        q2_a4->setText(QString());
        q3_a1->setText(QString());
        q3_a2->setText(QString());
        q3_a3->setText(QString());
        q3_a4->setText(QString());
        q4_a1->setText(QString());
        q4_a2->setText(QString());
        q4_a3->setText(QString());
        q4_a4->setText(QString());
        scores_previous->setText(QString());
        scores_previous_button->setText(QString());
        scores_heading->setText(QApplication::translate("learning_room", "Scores", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("learning_room", "Task Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("learning_room", "Score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class learning_room: public Ui_learning_room {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNING_ROOM_H
