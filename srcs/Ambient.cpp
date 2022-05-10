 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 11:15:55
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:05:03
 // ===------------------------------------------------------------------------===

#include "Ambient.hpp"

#include <utility>

Ambient::Ambient(std::string  params): _params(std::move(params)), _intensive(0)
{
    std::stringstream   ss;
    std::string         key;
    std::string         str_color;

    ss << this->_params;
    ss >> key;
    ss >> this->_intensive;
    ss >> str_color;
    this->_color.setColor(str_color);
}

const std::string& Ambient::getParams() const
{
    return this->_params;
}

GLfloat Ambient::getIntensive() const
{
    return this->_intensive;
}

const Color& Ambient::getColor() const
{
    return this->_color;
}
