#include "shader.h"

Shader::Shader(QOpenGLShader::ShaderType type, QString& fileName, QObject *parent) : QObject(parent)
{
    QOpenGLShader* shader = new QOpenGLShader(type, this);
    shader->compileSourceFile(fileName);
}
