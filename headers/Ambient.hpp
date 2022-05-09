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
        std::string __params;
        GLfloat     __intensive;
    public:
        explicit Ambient(const std::string& params);
        virtual ~Ambient() {}
        
        const std::string& getParams() const;
};
