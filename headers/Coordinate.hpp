// ===------------------------------------------------------------------------===
// >  Author: hcharlsi, eshakita, esobchak, amuriel
// >  Create Time: 2022-05-09 12:30:11
// >  Modified by: hcharlsi, eshakita, esobchak, amuriel
// >  Modified time: 2022-05-10 17:32:31
// ===------------------------------------------------------------------------===

#pragma once

#include "utils.hpp"

class Coordinate
{
private:
	std::vector<GLfloat> 	_v_coordinate;
	std::string				_params;
public:
    Coordinate() = default;
	explicit Coordinate(std::string params);
	~Coordinate() = default;

	[[nodiscard]] const std::vector<GLfloat>& getCoordinateVector() const;
	void setCoordinate(const std::string& params);
};