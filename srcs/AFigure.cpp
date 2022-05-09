 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:18:57
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 13:12:07
 // ===------------------------------------------------------------------------===

#include "AFigure.hpp"

AFigure::AFigure(const std::string& params): __params(params) {}

AFigure::~AFigure() {}

const std::string& AFigure::getParams() const { return this->__params; }
