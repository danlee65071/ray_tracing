 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:09:51
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:11:10
 // ===------------------------------------------------------------------------===

#include "Lightning.hpp"

Lightning::Lightning(std::string params): Ambient(std::move(params))
{}

void Lightning::coordinateParse()
{
	Parser::ssClear(this->_ss);
	this->_ss >> this->_str_coordinate;
	this->_coordinate.setCoordinate(this->_str_coordinate);
}

void Lightning::paramsParse()
{
	this->keyParse();
	this->coordinateParse();
	this->intensiveParse();
	this->coordinateParse();
}


