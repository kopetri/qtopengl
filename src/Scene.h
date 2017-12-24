#pragma once
#include "openglwindow.h"

class QOpenGLShaderProgram;
class Scene : public OpenGLWindow
{
public:
    Scene();

    void initialize() override;
    void render() override;

private:
    GLuint m_posAttr;
    GLuint m_colAttr;
    GLuint m_matrixUniform;

    QOpenGLShaderProgram *m_program;
    int m_frame;
};