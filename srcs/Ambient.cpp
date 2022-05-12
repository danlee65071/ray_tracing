 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 11:15:55
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:05:03
 // ===------------------------------------------------------------------------===

#include "Ambient.hpp"

#include <utility>

Ambient::Ambient(std::string  params): _params(std::move(params))
{}

void Ambient::paramsParse()
{
	this->keyParse();
	this->intensiveParse();
	this->colorParse();
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

void Ambient::keyParse()
{
    Parser::ssClear(this->_ss);
    this->_ss << this->_params;
    this->_ss >> this->_key;
}

void Ambient::colorParse()
{
	Parser::ssClear(this->_ss);
    this->_ss >> this->_str_color;
    this->_color.setColor(this->_str_color);
}

void Ambient::intensiveParse()
{
     this->_ss >> this->_intensive;
}
