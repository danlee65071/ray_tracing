// ===------------------------------------------------------------------------===
// >  Author: hcharlsi, eshakita, esobchak, amuriel
// >  Create Time: 2022-05-07 13:23:55
// >  Modified by: hcharlsi, eshakita, esobchak, amuriel
// >  Modified time: 2022-05-08 11:10:48
// ===------------------------------------------------------------------------===

#pragma once

#include <iostream>
// #include <OpenGl/glu.h>
// #include <OpenGL/gl.h>
// #include <GLUT/glut.h>
#include "Parser.hpp"
#include "Ambient.hpp"
#include "Camera.hpp"
#include "Figure.hpp"
#include "Lightning.hpp"
#include <vector>
#include <map>
#include <string>
#include <memory>
#include <functional>

class RayTracing
{
    private:
        typedef void (RayTracing::*CreateObj)(const std::string& params);

        std::vector<std::unique_ptr<Ambient> >                              __v_ambient;
        std::vector<std::unique_ptr<Camera> >                               __v_camera;
        std::vector<std::unique_ptr<Figure> >                               __v_figure;
        std::map<std::string, std::function<std::unique_ptr<Ambient>(const std::string&)> >     __m;

        void CreateAmbient(const std::string& params);
        void CreateCamera(const std::string& params);
        void CreateFigure(const std::string& params);
    public:
        explicit RayTracing(const std::vector<std::string>& pars_vector);
        ~RayTracing();


};
