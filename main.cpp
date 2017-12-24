#include "src/Scene.h"
#include <QtGui/QGuiApplication>
#include <QtCore/qmath.h>
#include <QDebug>



int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);

    Scene window;
    window.setFormat(format);
    window.resize(640, 480);
    window.show();

    window.setAnimating(true);

    return app.exec();
}