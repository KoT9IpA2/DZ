#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow mainWindow;
    mainWindow.setWindowTitle("Конвертер валют");
    mainWindow.resize(500, 500);
    mainWindow.show();

    return app.exec();
}
