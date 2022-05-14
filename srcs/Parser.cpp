 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-07 16:13:47
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:06:53
 // ===------------------------------------------------------------------------===

#include "Parser.hpp"

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
	else { throw BadFile(); }
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
        if (!isspace(line[i]))
            return i;
    return i;
}

void Parser::parseVector(const std::string& params, std::vector<GLfloat>& v)
{
    std::stringstream   ss;
    std::string         coordinate_component;

    ss << params;
    try
    {
		v.clear();
        while(std::getline(ss, coordinate_component, ','))
            v.push_back(std::stof(coordinate_component));
    }
    catch(...)
    {
        throw InvalidParameter();
    }
    if (v.size() < 3)
        throw TooLowParameters();
    else if (v.size() > 3)
        throw TooManyParameters();
}

const std::vector<std::string>& Parser::get_vector() const noexcept
{
    return this->_v;
}

void Parser::ssClear(std::stringstream& ss)
{
	 ss.clear();
	 ss.str("");
}


 void Parser::keyParse(std::stringstream& ss, std::string& key)
 {
	 ss >> key;
 }

 Color Parser::colorParse(std::stringstream& ss)
 {
	 std::string str;
	 Color c;

	 ss >> str;
	 c.setColor(str);
	 return c;
 }

 GLfloat Parser::floatParse(std::stringstream& ss)
 {
	 GLfloat f;
	 ss >> f;
	 return f;
 }

 void Parser::directionParse(std::stringstream& ss, Vector3f& d)
 {
	 std::string str;
	 ss >> str;
	 d.setVector3f(str);
 }

 Vector3f Parser::vectorParse(std::stringstream& ss)
 {
	 Vector3f c;
	 std::string str;

	 ss >> str;
	 c.setVector3f(str);
	 return c;
 }

std::unique_ptr<Ambient> Parser::parseAmbient(std::stringstream& ss)
{
	return std::make_unique<Ambient>(this->floatParse(ss), this->colorParse(ss));
}

 std::unique_ptr<Camera> Parser::parseCamera(std::stringstream &ss)
 {
	 this->coordinateParse();
	 this->directionParse();
	 this->fovParse();
	 return std::unique_ptr<Camera>(this->);
 }

 const char* Parser::BadFileName::what() const noexcept
{
    return "Bad filename!";
}

 const char* Parser::TooManyParameters::what() const noexcept
 {
     return "Too many parameters!";
 }

 const char* Parser::TooLowParameters::what() const noexcept
 {
     return "Too low parameters!";
 }

 const char* Parser::InvalidParameter::what() const noexcept
 {
     return "Invalid _coordinate parameter!";
 }

 const char *Parser::BadFile::what() const noexcept
 {
	 return "Bad file!";
 }
