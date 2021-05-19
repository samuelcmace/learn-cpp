#ifndef DISPLAY_H
#define DISPLAY_H

#include <QWindow>
#include <QOpenGLContext>
#include <QOpenGLFunctions>

#include <QScreen>
#include <QDebug>
#include <QString>

class Display : public QWindow, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    Display(int width, int height, const QString& title, QScreen *screen = 0);

protected:
    void initializeGL();
    void swapBuffers();

    QOpenGLContext *m_context;
};

#endif // DISPLAY_H
