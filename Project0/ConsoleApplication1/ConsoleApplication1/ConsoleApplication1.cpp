// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>


#include "GL\glew.h"
#include "GL\freeglut.h"
#include <iostream>

void renderScene(void) {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.3, 0.3, 0.3, 0.8);

	glutSwapBuffers();
}

int main(int argc, char **argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(500, 500);
	glutInitWindowSize(800, 600);
	glutCreateWindow("OpenGL First Window");
	
	glewInit();
	if (glewIsSupported("GL_VERSION_4_5"))
	{
		std::cout << " OpenGL Version is 4.5\n ";
	}
	else
	{
		std::cout << "OpenGL 4.5 not supported\n ";
	}

	glEnable(GL_DEPTH_TEST);
	// register callbacks
	glutDisplayFunc(renderScene);

	glutMainLoop();

	return 0;
}