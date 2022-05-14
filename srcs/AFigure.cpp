 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:18:57
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 13:12:07
 // ===------------------------------------------------------------------------===

#include "AFigure.hpp"

AFigure::AFigure(std::string  params): _params(std::move(params)) {}

AFigure::~AFigure() = default;

const std::string& AFigure::getParams() const { return this->_params; }

