 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:21:44
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:30:58
 // ===------------------------------------------------------------------------===

#include "Sphere.hpp"

Sphere::Sphere(std::string params): AFigure(std::move(params))
{
	this->keyParse();
	this->centerParse();
	this->radiusParse();
	this->colorParse();

	std::cout << "key: " << this->_key << std::endl;
	std::cout << "center: ";
	for (auto& el: this->_center.getCoordinateVector())
		std::cout << el << " ";
	std::cout << std::endl;
	std::cout << "radius: " << this->_radius << std::endl;
	std::cout << "color: ";
	for (auto& el: this->_color.getColor3fv())
		std::cout << el << " ";
	std::cout << std::endl;
	std::cout << std::endl;
}
