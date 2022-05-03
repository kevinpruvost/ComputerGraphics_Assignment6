/*****************************************************************//**
 * \file   AxisDisplayer.hpp
 * \brief  AxisDisplayer class
 * 
 * \author Kevin Pruvost (pruvostkevin0@gmail.com)
 * \date   May, 03 2022
 *********************************************************************/
#pragma once

// Project includes
#include "OGL_Implementation\Camera.hpp"
#include "OGL_Implementation\Quaternion.hpp"
#include "OGL_Implementation\Shader\Shader.hpp"

class AxisDisplayer
{
public:
    AxisDisplayer(const Shader & shader_, const GLfloat axisSize = 60.0f);
    ~AxisDisplayer();

public:
    void Draw();
    glm::mat4 GetModelMatrix() const;

public:
    glm::vec2 pos;
    Quaternion quat;

    Shader shader;

private:
    GLuint __xVAO, __yVAO, __zVAO;
    GLuint __xVBO, __yVBO, __zVBO;
};