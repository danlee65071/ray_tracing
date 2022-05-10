// ===------------------------------------------------------------------------===
// >  Author: hcharlsi, eshakita, esobchak, amuriel
// >  Create Time: 2022-05-07 16:14:06
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:39:39
// ===------------------------------------------------------------------------===

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <set>
#include <cctype>

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

        [[nodiscard]] const std::vector<std::string>& get_vector() const;

        class BadFileName: public std::exception
        {
            [[nodiscard]] const char* what() const noexcept override;
        };
};
