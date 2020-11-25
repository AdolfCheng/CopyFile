#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //启动前显示一张图片
    QPixmap pixmap(":/image/image/copy.jpg");
    QSplashScreen splash(pixmap);
    splash.show();
    a.processEvents();

    MainWindow w;
    w.show();

    splash.finish(&w);

    return a.exec();
}
