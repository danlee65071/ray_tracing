 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 15:05:45
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:12:31
 // ===------------------------------------------------------------------------===

#pragma once

#include "utils.hpp"

class Color
{
    private:
        std::string __params;
        GLfloat     __color_v[3] = {0, 0, 0};
    public:
        explicit Color(const std::string& params);
};
