 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 15:05:45
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:43:08
 // ===------------------------------------------------------------------------===

#include "Color.hpp"

Color::Color(): __params("") {}

Color::Color(const std::string& params): __params(params)
{
    this->setColor(this->__params);
}

Color::~Color() {}

const std::vector<GLfloat>& Color::getColor3fv() const
{
    return this->__v_color;
}

void Color::setColor(const std::string& params)
{
    std::stringstream   ss;
    std::string         color_component;

    this->__params = params;
    ss << this->__params;
    try
    {
        while(std::getline(ss, color_component, ','))
            this->__v_color.push_back(std::stof(color_component) /255);
    }
    catch(...)
    {
        throw InvalidParameter();
    }
    if (this->__v_color.size() < 3)
        throw TooLowParameters();
    else if (this->__v_color.size() > 3)
        throw TooManyParameters();
}

const char* Color::TooManyParameters::what() const throw()
{
    return "Too many parameters!";
}

const char* Color::TooLowParameters::what() const throw()
{
    return "Too low parameters!";
}

const char* Color::InvalidParameter::what() const throw()
{
    return "Invalid color parameter!";
}
