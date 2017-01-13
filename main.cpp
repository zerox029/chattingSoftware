#include <QApplication>
#include "serverwindow.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    serverWindow window;
    window.show();

    return app.exec();
}
