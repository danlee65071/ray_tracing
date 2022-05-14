 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-08 20:21:11
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:04:48
 // ===------------------------------------------------------------------------===

#pragma once

#include "utils.hpp"

class Ambient
{
protected:
    GLfloat             _intensive{};
    Color               _color;

public:
    Ambient() = default;
    explicit Ambient(GLfloat intensive, const Color& color);
    virtual ~Ambient() = default;

    [[nodiscard]] GLfloat getIntensive() const;
    [[nodiscard]] const Color& getColor() const;
};
