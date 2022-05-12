// ===------------------------------------------------------------------------===
// >  Author: hcharlsi, eshakita, esobchak, amuriel
// >  Create Time: 2022-05-07 16:14:06
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:39:39
// ===------------------------------------------------------------------------===

#pragma once

#include "utils.hpp"

class Parser
{
    private:
        std::string                     _file_name;
        std::vector<std::string>        _v;

        void CheckFileName() const;

        static size_t CheckSpace(const std::string& line) ;
    public:
        explicit Parser(std::string  filename);
        ~Parser();

        [[nodiscard]] const std::vector<std::string>& get_vector() const noexcept;

        static void parseVector3f(const std::string& params, std::vector<GLfloat>& v);

		static void ssClear(std::stringstream& ss);

        class BadFileName: public std::exception
        {
            [[nodiscard]] const char* what() const noexcept override;
        };
		class BadFile: public std::exception
		{
			[[nodiscard]] const char* what() const noexcept override;
		};
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
