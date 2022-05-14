#include "RayTracing.hpp"

//void init()
//{
//	glClearColor(0.0,0.0,0.0,0.0);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
//}
//
//void display()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0,1.0,1.0);
//	glBegin(GL_POLYGON);
//	glVertex3f(0,0,1);
////	glVertex3f(0.26,0.25,0.0);
////	glVertex3f(0.26,0.26,0.0);
////	glVertex3f(0.25,0.26,0.0);
////	glVertex3f(0.75,0.25,0.0);
////	glVertex3f(0.75,0.75,0.0);
////	glVertex3f(0.25,0.75,0.0);
//	glEnd();
//	glFlush();
//}

#define checkImageWidth 1
#define checkImageHeight 1

GLubyte checkImage[checkImageHeight][checkImageWidth][3];

void makeCheckImage() {
	int c;
			c=255;
			checkImage[0][0][0]=(GLubyte)c;
			checkImage[0][0][1]=(GLubyte)c;
			checkImage[0][0][2]=(GLubyte)c;
}
void init(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glShadeModel(GL_FLAT);
	makeCheckImage();
	glPixelStorei(GL_UNPACK_ALIGNMENT,1);
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos2i(0,0);
	glDrawPixels(checkImageWidth,checkImageHeight,GL_RGB,GL_UNSIGNED_BYTE,checkImage);
	glFlush();
}

int main(int argc, char** argv)
{

	if (argc != 2) return -1;
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(WIDTH,HEIGHT);
	glutInitWindowPosition(0,0);
	glutCreateWindow("RT");
	init();
	glutDisplayFunc(display);
	glutMainLoop();

//    Parser p(argv[1]);
//    RayTracing r(p.get_vector());


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
	return 0;
}


//#define GL_SILENCE_DEPRECATION
//#include <OpenGL/gl.h>
//#include <OpenGL/glu.h>
//#include <GLUT/glut.h>
//void init() {
//
//
//
//glClearColor(0.0,0.0,0.0,0.0);
//glShadeModel(GL_FLAT); }
////Отображение
//void display() {
//	glClear(GL_COLOR_BUFFER_BIT); glColor3f(1.0,1.0,1.0);
//glLoadIdentity();
//gluLookAt(0.0,0.0,5.0,0.0,0.0,0,1.0,1.0,-1000.0);
//glScalef(1.0,2.0,1.0); glutWireCube(1.0); glFlush();
//}
//void reshape(int w, int h) {
//glViewport(0,0,(GLsizei) w, (GLsizei) h); glMatrixMode(GL_PROJECTION); glLoadIdentity(); glFrustum(-1.0,1.0,-1.0,1.0,1.5,20.0); glMatrixMode(GL_MODELVIEW);
//}
//int main(int argc, char** argv) {
//	glutInit(&argc,argv); glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); glutInitWindowSize(500,500); glutInitWindowPosition(100,100); glutCreateWindow("Transformed Cube"); init();
//	glutDisplayFunc(display); glutReshapeFunc(reshape); glutMainLoop();
//	return 0;
//}