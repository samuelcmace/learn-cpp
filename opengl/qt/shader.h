#ifndef SHADER_H
#define SHADER_H

#include <QObject>
#include <QString>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>

class Shader : public QObject
{
    Q_OBJECT
public:
    explicit Shader(QOpenGLShader::ShaderType type, QString& filePath, QObject *parent = nullptr);
};

#endif // SHADER_H
