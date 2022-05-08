 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-07 16:13:47
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-08 21:04:41
 // ===------------------------------------------------------------------------===

#include "Parser.hpp"

Parser::Parser(const std::string& filename): __file_name(filename)
{
    this->CheckFileName();
    std::string line;
    std::ifstream file(this->__file_name);
    if (file.is_open())
    {
        while (std::getline(file, line, '\n'))
        {
            if (line.size() != 0 && this->CheckSpace(line) != line.size())
                this->__v.push_back(line);
        }
        file.close();
    }
    for (auto it = this->__v.begin(); it != this->__v.end(); ++it)
        std::cout << *it << std::endl;
}

Parser::~Parser() {}

void Parser::CheckFileName() const
{
    if (this->__file_name.size() <= 3 \
        || this->__file_name.substr(this->__file_name.size() - 3, 3) != ".rt")
        throw BadFileName();
}

size_t Parser::CheckSpace(const std::string& line) const
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
    return this->__v;
}

const char* Parser::BadFileName::what() const throw()
{
    return "Bad filename!\n";
}
