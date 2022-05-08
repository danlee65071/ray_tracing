 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-08 20:32:49
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-08 21:26:30
 // ===------------------------------------------------------------------------===

#include "RayTracing.hpp"

RayTracing::RayTracing(const std::vector<std::string>& pars_vector)
{
    (void)pars_vector;
}

void RayTracing::CreateAmbient(const std::string& params)
{
    auto ambient = std::make_unique<Ambient>(params);
}
