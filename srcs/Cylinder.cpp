 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:21:33
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:28:42
 // ===------------------------------------------------------------------------===

#include "Cylinder.hpp"

Cylinder::Cylinder(std::string params): AFigure(std::move(params))
{
	this->keyParse();
	this->centerParse();
	this->directionParse();
	this->radiusParse();
	this->heightParse();
	this->colorParse();

	std::cout << "key: " << this->_key << std::endl;
	std::cout << "center: ";
	for (auto& el: this->_center.getCoordinateVector())
		std::cout << el << " ";
	std::cout << std::endl;
	std::cout << "direction: ";
	for (auto& el: this->_direction.getV3f())
		std::cout << el << " ";
	std::cout << std::endl;
	std::cout << "radius: " << this->_radius << std::endl;
	std::cout << "height: " << this->_height << std::endl;
	std::cout << "color: ";
	for (auto& el: this->_color.getColor3fv())
		std::cout << el << " ";
	std::cout << std::endl;
	std::cout << std::endl;
}

 Cylinder::~Cylinder() = default;