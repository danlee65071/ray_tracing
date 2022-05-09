 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-08 20:21:11
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 12:03:28
 // ===------------------------------------------------------------------------===

#pragma once

#include <iostream>
#include <string>

class Camera
{
    private:
        std::string __params;
    public:
        Camera(const std::string& params);
        ~Camera();

        const std::string& getParams() const;
};
