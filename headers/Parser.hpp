// ===------------------------------------------------------------------------===
// >  Author: hcharlsi, eshakita, esobchak, amuriel
// >  Create Time: 2022-05-07 16:14:06
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-08 20:08:53
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
        std::string                     __file_name;
        std::vector<std::string>        __v;

        void CheckFileName() const;

        size_t CheckSpace(const std::string& line) const;


    public:
        explicit Parser(const std::string& filename);
        ~Parser();

        const std::vector<std::string>& get_vector() const;

        class BadFileName: public std::exception
        {
            virtual const char* what() const throw();
        };
};
