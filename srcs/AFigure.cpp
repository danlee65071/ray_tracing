 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:18:57
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 13:12:07
 // ===------------------------------------------------------------------------===

#include "AFigure.hpp"

AFigure::AFigure(std::string  params): _params(std::move(params)) {}

AFigure::~AFigure() = default;

const std::string& AFigure::getParams() const { return this->_params; }

void AFigure::colorParse()
{
	this->_ss >> this->_str_color;
	this->_color.setColor(this->_str_color);
}

void AFigure::centerParse()
{
	this->_ss >> this->_str_center;
	this->_center.setCoordinate(this->_str_center);
}

void AFigure::keyParse()
{
	Parser::ssClear(this->_ss);
	this->_ss << this->_params;
	this->_ss >> this->_key;
}

 void AFigure::radiusParse()
 {
	 this->_ss >> this->_radius;
 }

 void AFigure::directionParse()
 {
	 this->_ss >> this->_str_direction;
	 this->_direction.setVector3f(this->_str_direction);
 }

 void AFigure::heightParse()
 {
	 this->_ss >> this->_height;
 }
