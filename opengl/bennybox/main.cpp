#include "display.h"
#include "shader.h"

int main(int argc, char* argv[])
{
    Display display(800, 600, "Hello World");

    Shader shader("./res/basicShader");

    while(!display.IsClosed())
    {
        display.Clear(0.0f, 0.15f, 0.3f, 1.5f);
        shader.Bind();

        display.Update();
    }

    return 0;
}