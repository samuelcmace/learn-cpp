#include "display.h"

Display::Display(int width, int height, const QString& title, QScreen *screen) : QWindow(screen)
{
  setSurfaceType(OpenGLSurface);
  resize(width, height);
  setTitle(title);
  create();

  m_context = new QOpenGLContext;
  m_context->create();

  initializeGL();
}

void Display::initializeGL()
{
m_context->makeCurrent(this);
initializeOpenGLFunctions();
}

void Display::swapBuffers()
{
    m_context->makeCurrent(this);
    initializeOpenGLFunctions();
}
