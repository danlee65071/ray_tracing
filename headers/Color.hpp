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
        std::string             __params;
        std::vector<GLfloat>    __v_color;
    public:
        Color();
        explicit Color(const std::string& params);
        ~Color();

        void setColor(const std::string& params);
        const std::vector<GLfloat>& getColor3fv() const;

        class TooManyParameters: public std::exception
        {
            public:
                const char* what() const throw();
        };

        class TooLowParameters: public std::exception
        {
            public:
                const char* what() const throw();
        };

        class InvalidParameter: public std::exception
        {
            public:
                const char* what() const throw();
        };
};
