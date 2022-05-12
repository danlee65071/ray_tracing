#include "RayTracing.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
        return -1;
    Parser p(argv[1]);
    RayTracing r(p.get_vector());
//    Color c("255 ,   60, 75.4");
//	Vector3f v3f("15, 17, -3");
//	for (auto& el: v3f.getV3f())
//		std::cout << el << std::endl;
//	v3f.norm();
//	for (auto& el: v3f.getV3f())
//		std::cout << el << std::endl;
//	Vector3f v2("12, -9, 7");
//	Vector3f v3 = v2 + v3f;
//	for (auto& el: v3.getV3f())
//		std::cout << el << std::endl;
//	GLfloat res = v2 * v3;
//	std::cout << res << std::endl;
//	Vector3f vec1("0, 0, 1");
//	Vector3f vec2("1, 0, 0");
//	Vector3f vec3;
//	vec3 = vec1.cross_product(vec2);
//	for (auto& el: vec3.getV3f())
//		std::cout << el << std::endl;
//
//	Ambient a("A 0.4 255,255,255");
//	Lightning l("L 15,10,-25 0.5 255,255,255");
//	Camera camera("C 0,0,-2 0,0,1 100");
}
