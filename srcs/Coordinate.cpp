// ===------------------------------------------------------------------------===
// >  Author: hcharlsi, eshakita, esobchak, amuriel
// >  Create Time: 2022-05-09 12:30:11
// >  Modified by: hcharlsi, eshakita, esobchak, amuriel
// >  Modified time: 2022-05-10 17:32:31
// ===------------------------------------------------------------------------===

#include "Coordinate.hpp"

Coordinate::Coordinate(std::string params) : _params(std::move(params))
{
	Parser::parseVector(this->_params, this->_v_coordinate);
}

void Coordinate::setCoordinate(const std::string &params)
{
	Parser::parseVector(params, this->_v_coordinate);
}
