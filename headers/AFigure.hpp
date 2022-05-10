 // ===------------------------------------------------------------------------===
 // >  Author: hcharlsi, eshakita, esobchak, amuriel
 // >  Create Time: 2022-05-08 20:21:11
 // >  Modified by: hcharlsi, eshakita, esobchak, amuriel
 // >  Modified time: 2022-05-09 13:07:52
 // ===------------------------------------------------------------------------===

#pragma once

#include <iostream>
#include <string>

class AFigure
{
    private:
        std::string _params;
    public:
        explicit AFigure(std::string  params);
        virtual ~AFigure() = 0;
        
        [[nodiscard]] const std::string& getParams() const;
};
