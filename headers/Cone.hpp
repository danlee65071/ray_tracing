 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:22:07
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 13:00:32
 // ===------------------------------------------------------------------------===

#pragma once

#include "AFigure.hpp"

class Cone: public AFigure
{
    private:
    public:
        explicit Cone(std::string params);
        ~Cone() override;
};
