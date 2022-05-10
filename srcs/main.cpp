#include "RayTracing.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
        return -1;
    Parser p(argv[1]);
    RayTracing r(p.get_vector());
    Color c("255 ,   60, 75.4");
    auto v = c.getColor3fv();
    for (auto& it: v)
    {
        std::cout << it << std::endl;
    }
    // Ambient a("A 0.4 255,255,255");
    // for (auto& it: a.getColor().getColor3fv())
    // {
    //     std::cout << it << std::endl;
    // }
}
