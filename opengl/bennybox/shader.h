#ifndef SHADER_H
#define SHADER_H

#include <iostream>
#include <string>
#include <fstream>
#include <GL/glew.h>

class Shader
{ 
public:
    Shader(const std::string& fileName);

    void Bind();

    virtual ~Shader();
protected:
private:
    static const unsigned int NUM_SHADERS = 2;
    Shader(const Shader& other) {}
    void operator=(const Shader& other) {}

    GLuint m_program;
    GLuint m_shaders[NUM_SHADERS];

    void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);
    GLuint CreateShader(const std::string& text, GLenum shaderType);
    std::string LoadShader(const std::string& fileName);
};

#endif