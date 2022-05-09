// ===------------------------------------------------------------------------===
// >  Author: hcharlsi, eshakita, esobchak, amuriel
// >  Create Time: 2022-05-07 13:23:55
// >  Modified by: hcharlsi, eshakita, esobchak, amuriel
// >  Modified time: 2022-05-08 11:10:48
// ===------------------------------------------------------------------------===

#pragma once

#include "Parser.hpp"
#include "Ambient.hpp"
#include "Camera.hpp"
#include "AFigure.hpp"
#include "Lightning.hpp"
#include "Plane.hpp"
#include "Cylinder.hpp"
#include "Cone.hpp"
#include "Sphere.hpp"
#include "utils.hpp"

class RayTracing
{
    private:
        std::vector<std::unique_ptr<Ambient> >                              __v_ambient;
        std::vector<std::unique_ptr<Camera> >                               __v_camera;
        std::vector<std::unique_ptr<AFigure> >                              __v_figure;
        std::map<std::string, std::function<void(const std::string&)> >     __m;

        void FillMapTypes();
    public:
        explicit RayTracing(const std::vector<std::string>& pars_vector);
        ~RayTracing() {}
        // void setObject(std::unique_ptr<Camera> camera);
        // void setObject(std::unique_ptr<Ambient> figure);

};
