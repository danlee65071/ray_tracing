 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-08 20:21:11
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 13:07:52
 // ===------------------------------------------------------------------------===

#pragma once

#include "utils.hpp"

class AFigure
{
    protected:
        std::string 		_params;
		std::stringstream	_ss;
		std::string			_key;
		std::string			_str_color;
		Color				_color;
		std::string			_str_center;
		Coordinate			_center;
		GLfloat				_radius{};
		std::string			_str_direction;
		Vector3f			_direction;
		GLfloat				_height{};

		void keyParse();
		void colorParse();
		void centerParse();
		void radiusParse();
		void directionParse();
		void heightParse();
    public:
        explicit AFigure(std::string  params);
        virtual ~AFigure() = 0;
        
        [[nodiscard]] const std::string& getParams() const;
};
