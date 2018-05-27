#include "learning_room.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    learning_room gui;
    gui.show();

    return a.exec();
}
