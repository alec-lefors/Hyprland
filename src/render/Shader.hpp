#pragma once

#include "../defines.hpp"
#include <unordered_map>

class CShader {
public:
    ~CShader();

    GLuint program = 0;
    GLint proj;
    GLint color;
    GLint tex;
    GLint alpha;
    GLint posAttrib;
    GLint texAttrib;
    GLint discardOpaque;

    GLint topLeft;
    GLint bottomRight;
    GLint fullSize;
    GLint radius;
    GLint primitiveMultisample;

    GLint thick;

    GLint halfpixel;

    GLint range;
    GLint shadowPower;

    GLint getUniformLocation(const std::string&);

private:
    std::unordered_map<std::string, GLint> m_muUniforms;
};