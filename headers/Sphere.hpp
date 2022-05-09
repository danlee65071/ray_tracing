 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:30:11
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:48:29
 // ===------------------------------------------------------------------------===

#pragma once

#include "AFigure.hpp"

class Sphere: public AFigure
{
    private:
    public:
        Sphere(const std::string& params);
        ~Sphere() override;
};