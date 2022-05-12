 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-08 20:32:49
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 13:10:35
 // ===------------------------------------------------------------------------===

#include "RayTracing.hpp"

RayTracing::RayTracing(const std::vector<std::string>& pars_vector)
{
    std::stringstream   ss;
    std::string         key;
    this->FillMapTypes();
    for (auto &line: pars_vector)
    {
        Parser::ssClear(ss);
		ss << line;
        ss >> key;
		!this->_m[key] ? throw WrongObject() : this->_m[key](ss.str());
    }
}

void RayTracing::FillMapTypes()
{
    this->_m["A"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->_v_ambient.push_back(std::make_unique<Ambient>(params));
        });
    
    this->_m["C"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->_v_camera.push_back(std::make_unique<Camera>(params));
        });
        
    this->_m["L"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->_v_ambient.push_back(std::make_unique<Lightning>(params));
        });

    this->_m["pl"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->_v_figure.push_back(std::make_unique<Plane>(params));
        });
    
    this->_m["cy"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->_v_figure.push_back(std::make_unique<Cylinder>(params));
        });
    
    this->_m["sp"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->_v_figure.push_back(std::make_unique<Sphere>(params));
        });

    this->_m["co"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->_v_figure.push_back(std::make_unique<Cone>(params));
        });
}

 const char *RayTracing::WrongObject::what() const noexcept
 {
	 return "Wrong object!";
 }
