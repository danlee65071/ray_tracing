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
	explicit Coordinate(std::string params);
	~Coordinate() = default;
	void setCoordinate(const std::string& params);
	class TooManyParameters: public std::exception
	{
	public:
		[[nodiscard]] const char* what() const noexcept override;
	};

	class TooLowParameters: public std::exception
	{
	public:
		[[nodiscard]] const char* what() const noexcept override;
	};

	class InvalidParameter: public std::exception
	{
	public:
		[[nodiscard]] const char* what() const noexcept override;
	};
};