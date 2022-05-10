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
    // std::cout << this->__v_ambient.size() << std::endl;
    // std::cout << this->__v_camera.size() << std::endl;
    // std::cout << this->__v_figure.size() << std::endl;
    for (auto &line: pars_vector)
    {
        ss.clear();
        ss.str("");
        ss << line;
        ss >> key;
        this->__m[key](ss.str());
    }
    // std::cout << this->__v_ambient.size() << std::endl;
    // std::cout << this->__v_camera.size() << std::endl;
    // std::cout << this->__v_figure.size() << std::endl;
}

void RayTracing::FillMapTypes()
{
    this->__m["A"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->__v_ambient.push_back(std::move(std::make_unique<Ambient>(params)));
        });
    
    this->__m["C"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->__v_camera.push_back(std::move(std::make_unique<Camera>(params)));
        });
        
    this->__m["L"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->__v_ambient.push_back(std::move(std::make_unique<Lightning>(params)));
        });

    this->__m["pl"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->__v_figure.push_back(std::move(std::make_unique<Plane>(params)));
        });
    
    this->__m["cy"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->__v_figure.push_back(std::move(std::make_unique<Cylinder>(params)));
        });
    
    this->__m["sp"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->__v_figure.push_back(std::move(std::make_unique<Sphere>(params)));
        });

    this->__m["co"] = std::function<void(const std::string&)>([this](const std::string& params) \
        {
            this->__v_figure.push_back(std::move(std::make_unique<Cone>(params)));
        });
}

