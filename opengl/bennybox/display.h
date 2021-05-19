#ifndef DISPLAY_H
#define DISPLAY_H

#include <SDL2/SDL.h>
#include <GL/glew.h>

#include <iostream>
#include <string>

class Display
{
public:
    Display(int width, int height, const std::string& title);

    void Clear(float r, float g, float b, float a);
    void Update();
    bool IsClosed();

    virtual ~Display();
private:
    Display(const Display& other) {}
    void operator=(const Display& other) {}

    SDL_Window* m_window;
    SDL_GLContext m_glContext;
    bool m_isClosed;
};

#endif