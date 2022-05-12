 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:09:51
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:11:10
 // ===------------------------------------------------------------------------===

#include "Lightning.hpp"

Lightning::Lightning(std::string params)
{
	this->_params = std::move(params);
	this->paramsParse();

	std::cout << "key: " << this->_key << std::endl;
	std::cout << "coordinate: ";
	for (auto& el: this->_coordinate.getCoordinateVector())
		std::cout << el << " ";
	std::cout << std::endl;
	std::cout << "intensive: " << this->_intensive << std::endl;
	std::cout << "color: ";
	for (auto& el: this->_color.getColor3fv())
		std::cout << el << " ";
	std::cout << std::endl;
	std::cout << std::endl;
}

void Lightning::coordinateParse()
{
	this->_ss >> this->_str_coordinate;
	this->_coordinate.setCoordinate(this->_str_coordinate);
}

void Lightning::paramsParse()
{
	this->keyParse();
	this->coordinateParse();
	this->intensiveParse();
	this->colorParse();
}


