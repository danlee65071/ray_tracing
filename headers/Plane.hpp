 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:22:14
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:48:24
 // ===------------------------------------------------------------------------===

#pragma once

#include "AFigure.hpp"

class Plane: public AFigure
{
    private:
    public:
        explicit Plane(std::string params);
        ~Plane() override = default;
};
