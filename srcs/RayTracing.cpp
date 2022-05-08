 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-08 20:32:49
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-08 22:42:51
 // ===------------------------------------------------------------------------===

#include "RayTracing.hpp"

RayTracing::RayTracing(const std::vector<std::string>& pars_vector)
{
    (void)pars_vector;
    // 
    this->__m["A"] = std::function<std::unique_ptr<Ambient>(const std::string&)>([](const std::string& params) {std::unique_ptr<Ambient> ambient(new Ambient(params)); return std::move(ambient);});
    this->__m["C"] = std::function<std::unique_ptr<Camera>(const std::string&)>([](const std::string& params) {std::unique_ptr<Camera> camera(new Camera(params)); return std::move(camera);});
    this->__m["L"] = std::function<std::unique_ptr<Ambient>(const std::string&)>([](const std::string& params) {std::unique_ptr<Ambient> lightning(new Lightning(params)); return std::move(lightning);});
    this->__m["pl"] = std::function<std::unique_ptr<Figure>(const std::string&)>([](const std::string& params) {std::unique_ptr<Figure> plane(new Figure(params)); return std::move(plane);});
}

void RayTracing::CreateAmbient(const std::string& params)
{
    // auto ambient = std::make_unique<Ambient>(params);
    std::unique_ptr<Ambient> ambient(new Ambient(params));
    this->__v_ambient.push_back(std::move(ambient));
}
