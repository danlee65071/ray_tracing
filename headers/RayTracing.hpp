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

// template<class _Tp>
// struct __unique_if
// {
//     typedef std::unique_ptr<_Tp> __unique_single;
// };

// template<class _Tp>
// struct __unique_if<_Tp[]>
// {
//     typedef std::unique_ptr<_Tp[]> __unique_array_unknown_bound;
// };

// template<class _Tp, size_t _Np>
// struct __unique_if<_Tp[_Np]>
// {
//     typedef void __unique_array_known_bound;
// };

// template<class _Tp, class... _Args>
// inline _LIBCPP_INLINE_VISIBILITY
// typename __unique_if<_Tp>::__unique_single
// make_unique(_Args&&... __args)
// {
//     return std::unique_ptr<_Tp>(new _Tp(_VSTD::forward<_Args>(__args)...));
// }

// template<class _Tp>
// inline _LIBCPP_INLINE_VISIBILITY
// typename __unique_if<_Tp>::__unique_array_unknown_bound
// make_unique(size_t __n)
// {
//     typedef typename std::remove_extent<_Tp>::type _Up;
//     return std::unique_ptr<_Tp>(new _Up[__n]());
// }

// template<class _Tp, class... _Args>
//     typename __unique_if<_Tp>::__unique_array_known_bound
//     make_unique(_Args&&...) = delete;

class RayTracing
{
    private:
        typedef void (RayTracing::*CreateObj)(const std::string& params);

        std::vector<std::unique_ptr<Ambient> >  __v_ambient;
        std::vector<std::unique_ptr<Camera> >   __v_camera;
        std::vector<std::unique_ptr<Figure> >   __v_figure;
        std::map<std::string, CreateObj*>       __m;

        void CreateAmbient(const std::string& params);
        void CreateCamera(const std::string& params);
        void CreateFigure(const std::string& params);
    public:
        explicit RayTracing(const std::vector<std::string>& pars_vector);
        ~RayTracing();


};
