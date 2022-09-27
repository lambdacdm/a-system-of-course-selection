#include <QApplication>
#include "userlogin.h"
#include "datastr.h"

course sheet;

int main(int argc, char *argv[])
{

    sheet.courseid=1;
    sheet.nowid=0;
    sheet.init();

    QApplication a(argc, argv);
    UserLogin w;
    w.show();

    return a.exec();
}


