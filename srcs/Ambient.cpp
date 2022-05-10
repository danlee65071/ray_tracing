 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 11:15:55
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:05:03
 // ===------------------------------------------------------------------------===

#include "Ambient.hpp"

Ambient::Ambient(const std::string& params): __params(params), __intensive(0)
{
    std::stringstream   ss;
    std::string         key;
    std::string         str_color;

    ss << this->__params;
    ss >> key;
    ss >> this->__intensive;
    ss >> str_color;
    std::cout << str_color << std::endl;
    this->__color.setColor(str_color);
}

const std::string& Ambient::getParams() const
{
    return this->__params;
}

GLfloat Ambient::getIntensive() const
{
    return this->__intensive;
}

const Color& Ambient::getColor() const
{
    return this->__color;
}
