 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 11:15:55
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:05:03
 // ===------------------------------------------------------------------------===

#include "Ambient.hpp"

Ambient::Ambient(GLfloat intensive, const Color& color): _intensive(intensive),
													_color(color)
{
	std::cout << "intensive: " << this->_intensive << std::endl;
	std::cout << "color: ";
	for (auto& el: this->_color.getColor3fv())
		std::cout << el << " ";
	std::cout << std::endl;
	std::cout << std::endl;
}

