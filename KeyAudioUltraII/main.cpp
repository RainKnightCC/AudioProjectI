#include "MainForm.h"
#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    app.setStyle(QStyleFactory::create("Motif"));
    MainForm win;
    win.show();

    return app.exec();
}
