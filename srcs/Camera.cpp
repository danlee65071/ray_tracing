 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 12:00:03
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:03:12
 // ===------------------------------------------------------------------------===

#include "Camera.hpp"

#include <utility>

Camera::Camera(std::string  params): _params(std::move(params)) {}

Camera::~Camera() = default;

const std::string& Camera::getParams() const { return this->_params; }
