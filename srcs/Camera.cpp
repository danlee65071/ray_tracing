 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:00:03
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:03:12
 // ===------------------------------------------------------------------------===

#include "Camera.hpp"

Camera::Camera(std::string  params): _params(std::move(params))
{
	this->paramsParse();

	std::cout << "key: " << this->_key << std::endl;
	std::cout << "coordinate: ";
	for (auto& el: this->_coordinate.getCoordinateVector())
		std::cout << el << " ";
	std::cout << std::endl;
	std::cout << "direction: ";
	for (auto& el: this->_direction.getV3f())
		std::cout << el << " ";
	std::cout << std::endl;
	std::cout << "fov: " << this->_fov << std::endl;
	std::cout << std::endl;
}

Camera::~Camera() = default;

const std::string& Camera::getParams() const { return this->_params; }

void Camera::paramsParse()
{
	this->keyParse();
	this->coordinateParse();
	this->directionParse();
	this->fovParse();
}

void Camera::keyParse()
{
	Parser::ssClear(this->_ss);
	this->_ss << this->_params;
	this->_ss >> this->_key;
}

void Camera::coordinateParse()
{
	this->_ss >> this->_str_coordinate;
	this->_coordinate.setCoordinate(this->_str_coordinate);
}

void Camera::directionParse()
{
	this->_ss >> this->_str_direction;
	this->_direction.setVector3f(this->_str_direction);
}

void Camera::fovParse()
{
	this->_ss >> this->_fov;
}

 GLfloat Camera::getFOV() const
 {
	 return this->_fov;
 }
