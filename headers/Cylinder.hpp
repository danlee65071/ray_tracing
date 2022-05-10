 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:22:27
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:48:21
 // ===------------------------------------------------------------------------===

#pragma once

#include "AFigure.hpp"

class Cylinder: public AFigure
{
    private:
    public:
        explicit Cylinder(std::string params);
        ~Cylinder() override;
};
