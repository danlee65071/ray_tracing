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
    private:
        std::string _params;
        GLfloat     _intensive;
        Color       _color;
    public:
        explicit Ambient(std::string  params);
        virtual ~Ambient() = default;
        
        [[nodiscard]] const std::string& getParams() const;
        [[nodiscard]] GLfloat getIntensive() const;
        [[nodiscard]] const Color& getColor() const;
};
