 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 15:05:45
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:43:08
 // ===------------------------------------------------------------------------===

#include "Color.hpp"

Color::Color(const std::string& params): __params(params)
{
    std::stringstream   ss;
    std::string         color_component;
    int                 i = 0;

    ss << this->__params;
    while(std::getline(ss, color_component, ','))
        this->__color_v[i++] = std::stof(color_component);

    for (auto& i: this->__color_v)
        std::cout << i << std::endl;
}
