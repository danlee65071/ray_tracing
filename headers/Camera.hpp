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
        std::string _params;
    public:
        explicit Camera(std::string  params);
        ~Camera();

        [[nodiscard]] const std::string& getParams() const;
};
