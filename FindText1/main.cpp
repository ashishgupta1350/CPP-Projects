#include "findtext.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FindText w;
    w.show();

    return a.exec();
}
