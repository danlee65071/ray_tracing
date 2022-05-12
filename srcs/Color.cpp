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
	Parser::parseVector(this->_params, this->_v_color);
}

Color::~Color() = default;

const std::vector<GLfloat>& Color::getColor3fv() const
{
    return this->_v_color;
}

void Color::setColor(const std::string& params)
{
	auto				check = [](GLfloat param) -> GLfloat
	{
		return (param < 0) ? (0) : ((param > 1) ? (1) : (param));
	};
	Parser::parseVector(params, this->_v_color);
    for (auto& el: this->_v_color)
        check(el);
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
