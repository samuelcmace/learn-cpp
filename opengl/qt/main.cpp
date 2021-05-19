#include <QGuiApplication>

#include "display.h"
#include "shader.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Display display(800, 600, "Hello World");

    Shader shader(":/basicshader.vs", ":/basicshader.fs");

    display.show();
    return app.exec();
}
