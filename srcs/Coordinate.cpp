// ===------------------------------------------------------------------------===
// >  Author: hcharlsi, eshakita, esobchak, amuriel
// >  Create Time: 2022-05-09 12:30:11
// >  Modified by: hcharlsi, eshakita, esobchak, amuriel
// >  Modified time: 2022-05-10 17:32:31
// ===------------------------------------------------------------------------===

#include "Coordinate.hpp"

Coordinate::Coordinate(std::string params) : _params(std::move(params))
{
	this->setCoordinate(this->_params);
}

void Coordinate::setCoordinate(const std::string &params)
{
	std::stringstream   ss;
	std::string         coordinate_component;
	this->_params = params;
	ss << this->_params;
	try
	{
		while(std::getline(ss, coordinate_component, ','))
			this->_v_coordinate.push_back(std::stof(coordinate_component));
	}
	catch(...)
	{
		throw InvalidParameter();
	}
	if (this->_v_coordinate.size() < 3)
		throw TooLowParameters();
	else if (this->_v_coordinate.size() > 3)
		throw TooManyParameters();
}

const char* Coordinate::TooManyParameters::what() const noexcept
{
	return "Too many parameters!";
}

const char* Coordinate::TooLowParameters::what() const noexcept
{
	return "Too low parameters!";
}

const char* Coordinate::InvalidParameter::what() const noexcept
{
	return "Invalid coordinate parameter!";
}
