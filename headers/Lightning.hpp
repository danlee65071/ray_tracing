 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-08 20:21:11
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:31:48
 // ===------------------------------------------------------------------------===

#pragma once

#include "Ambient.hpp"

class Lightning: public Ambient
{
    private:
        
    public:
        explicit Lightning(std::string params);
		~Lightning() override = default;
};
