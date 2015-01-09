#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Using the GLUT library for the base windowing setup */
#include <GL/glut.h>

void display(void)
{
	// clear buffer to values set in glClearColor
	glClear(GL_COLOR_BUFFER_BIT);
	//replace current matrix with identity matrix
	glLoadIdentity();

	///// Can not use any of the commands in this block for proj 1
	/////  use glDrawPixels instead
	glColor3f(1.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.25, 0.25);
	glVertex2f(0.75, 0.25);
	glVertex2f(0.75, 0.75);
	glVertex2f(0.25, 0.75);
	glEnd();
	////end block

	//force execution of glcommands
	glFlush();
}

void init()
{
	//specify all values for the color buffer; (red, green, blue, alpha)
	glClearColor(0.0, 0.0, 0.0, 0.0);

	//can set viewing mode and projection here...not for first project
}


int main(int argc, char* argv[])
{
	// initialize and run program

	// GLUT initialization
	glutInit(&argc, argv);
	//set initial display mode, also GLUT_DOUBLE  
	glutInitDisplayMode(GLUT_SINGLE);
	//set window size (width, height)
	glutInitWindowSize(640, 480);
	//set position, (x,y)
	glutInitWindowPosition(100, 100);
	//create with name
	glutCreateWindow("An Example OpenGL Program");
	//optional function "init"
	init();
	//set the callback function, called with each redisplay
	glutDisplayFunc(display);
	//enter processing loop (never ending)
	glutMainLoop();

	return 0;
}