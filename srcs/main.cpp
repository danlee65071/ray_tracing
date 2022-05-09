#include "RayTracing.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
        return -1;
    Parser p(argv[1]);
    RayTracing r(p.get_vector());
    Color c("255 ,   60,    12, 43");
}
