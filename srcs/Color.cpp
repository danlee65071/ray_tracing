 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 15:05:45
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:43:08
 // ===------------------------------------------------------------------------===

#include "Color.hpp"

#include <utility>


Color::Color(std::string  params): _params(std::move(params))
{
    this->setColor(this->_params);
}

Color::~Color() = default;

const std::vector<GLfloat>& Color::getColor3fv() const
{
    return this->_v_color;
}

void Color::setColor(const std::string& params)
{
    std::stringstream   ss;
    std::string         color_component;
	auto				check = [](GLfloat param) -> GLfloat
	{
		return (param < 0) ? (0) : ((param > 1) ? (1) : (param));
	};

    this->_params = params;
    ss << this->_params;
    try
    {
        while(std::getline(ss, color_component, ','))
            this->_v_color.push_back(check(std::stof(color_component) / 255));
    }
    catch(...)
    {
        throw InvalidParameter();
    }
    if (this->_v_color.size() < 3)
        throw TooLowParameters();
    else if (this->_v_color.size() > 3)
        throw TooManyParameters();
}

 const char* Color::TooManyParameters::what() const noexcept
{
    return "Too many parameters!";
}

const char* Color::TooLowParameters::what() const noexcept
{
    return "Too low parameters!";
}

const char* Color::InvalidParameter::what() const noexcept
{
    return "Invalid color parameter!";
}
