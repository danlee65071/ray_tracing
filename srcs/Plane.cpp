 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:21:25
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:36:07
 // ===------------------------------------------------------------------------===

#include "Plane.hpp"

Plane::Plane(std::string params): AFigure(std::move(params))
{
	this->keyParse();
	this->centerParse();
	this->directionParse();
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
	std::cout << "color: ";
	for (auto& el: this->_color.getColor3fv())
		std::cout << el << " ";
	std::cout << std::endl;
	std::cout << std::endl;
}
