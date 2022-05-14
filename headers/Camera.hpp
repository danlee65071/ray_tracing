 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-08 20:21:11
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:03:28
 // ===------------------------------------------------------------------------===

#pragma once

#include "utils.hpp"

class Camera
{
    private:
		Vector3f			_coordinate;
		Vector3f			_direction;
		GLfloat				_fov{};

		void keyParse();
		void coordinateParse();
		void directionParse();
		void fovParse();
    public:
        explicit Camera(std::string  params);
        ~Camera();

		[[nodiscard]] GLfloat getFOV() const;
		void paramsParse();
        [[nodiscard]] const std::string& getParams() const;
};
