 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-09 15:05:45
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 15:12:31
 // ===------------------------------------------------------------------------===

#pragma once

#include "utils.hpp"

class Color
{
    private:
        std::string             _params;
        std::vector<GLfloat>    _v_color;
    public:
		Color() = default;
        explicit Color(std::string  params);
        ~Color();

        void setColor(const std::string& params);
		[[nodiscard]] const std::vector<GLfloat>& getColor3fv() const;

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
