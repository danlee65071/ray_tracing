 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-07 16:13:47
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:06:53
 // ===------------------------------------------------------------------------===

#include "Parser.hpp"

#include <utility>

Parser::Parser(std::string  filename): _file_name(std::move(filename))
{
    this->CheckFileName();
    std::string line;
    std::ifstream file(this->_file_name);
    if (file.is_open())
    {
        while (std::getline(file, line, '\n'))
        {
            if (!line.empty() && Parser::CheckSpace(line) != line.size())
                this->_v.push_back(line);
        }
        file.close();
    }
}

Parser::~Parser() = default;

void Parser::CheckFileName() const
{
    if (this->_file_name.size() <= 3 \
 || this->_file_name.substr(this->_file_name.size() - 3, 3) != ".rt")
        throw BadFileName();
}

size_t Parser::CheckSpace(const std::string& line)
{
    size_t i;
    for (i = 0; i < line.size(); ++i)
    {
        if (!isspace(line[i]))
            return i;
    }
    return i;
}

const std::vector<std::string>& Parser::get_vector() const
{
    return this->_v;
}

const char* Parser::BadFileName::what() const noexcept
{
    return "Bad filename!\n";
}
