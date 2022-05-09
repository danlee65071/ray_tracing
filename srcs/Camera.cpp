 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:00:03
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:03:12
 // ===------------------------------------------------------------------------===

#include "Camera.hpp"

Camera::Camera(const std::string& params): __params(params)
{

}

Camera::~Camera() {}

const std::string& Camera::getParams() const { return this->__params; }
