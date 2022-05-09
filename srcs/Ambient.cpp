 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 11:15:55
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:05:03
 // ===------------------------------------------------------------------------===

#include "Ambient.hpp"

Ambient::Ambient(const std::string& params): __params(params), __intensive(0)
{
    
}

const std::string& Ambient::getParams() const
{
    return this->__params;
}
