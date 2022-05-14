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
        std::vector<std::unique_ptr<Ambient> >                              _v_ambient;
        std::vector<std::unique_ptr<Camera> >                               _v_camera;
        std::vector<std::unique_ptr<AFigure> >                              _v_figure;
        std::map<std::string, std::function<void(const std::string&)> >     _m;
		GLubyte																_buf_image[WIDTH][HEIGHT][3];

        void FillMapTypes();
		void GLDisplay();
		void GLMakeBufImage(GLint y, GLint x, const Color& c);
    public:
        explicit RayTracing(const std::vector<std::string>& pars_vector);
        ~RayTracing() = default;

		void GLInit(char **argv, int argc, int window_x = 0, int window_y = 0,
					const std::string& programm_name = "RT");
		class WrongObject: public std::exception
		{
		public:
			[[nodiscard]] const char* what() const noexcept override;
		};
};
