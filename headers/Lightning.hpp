 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-08 20:21:11
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:31:48
 // ===------------------------------------------------------------------------===

#pragma once

#include "Ambient.hpp"
#include "utils.hpp"

class Lightning: public Ambient
{
private:
    std::string _str_coordinate;
	Coordinate  _coordinate;

	void coordinateParse();
	void paramsParse();
public:
    explicit Lightning(std::string  params);
    ~Lightning() override = default;
};
