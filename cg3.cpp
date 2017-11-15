#include<stdlib.h>
#include<GL/glut.h>

void display3(void)
{
glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.90,0.59,0.70);
	//room
	//top
	
	glColor3f(0.93,0.97,0.99);
	glBegin(GL_POLYGON);
	glVertex2f(0.0,700.0);
	glVertex2f(100.0,600.0);
	glVertex2f(1200.0,600.0);
	glVertex2f(1300.0,700.0);
	glEnd();
	//left
		glColor3f(0.90,0.59,0.70);
	glBegin(GL_POLYGON);
	glVertex2f(0.0,0.0);
	glVertex2f(100.0,100.0);
	glVertex2f(100.0,600.0);
	glVertex2f(0.0,700.0);
	glEnd();
	//bottom
glColor3f(0.9,0.9,0.9);
	glBegin(GL_POLYGON);
	glVertex2f(0.0,0.0);
	glVertex2f(100.0,100.0);
	glVertex2f(1200.0,100.0);
	glVertex2f(1300.0,0.0);
	glEnd();
	//right
		glColor3f(0.90,0.59,0.70);
	glBegin(GL_POLYGON);
	glVertex2f(1200.0,100.0);
	glVertex2f(1300.0,0.0);
	glVertex2f(1300.0,700.0);
	glVertex2f(1200.0,600.0);
	glEnd();
	//table
	
	glColor3f(0.5,0.37,0.25);
	glBegin(GL_POLYGON);
	glVertex2f(200.0,300.0);
	glVertex2f(300.0,450.0);
	glVertex2f(1000.0,450.0);
	glVertex2f(900.0,300.0);
	glEnd();
	//leg left
	glBegin(GL_POLYGON);
	glVertex2f(200.0,100.0);
	glVertex2f(450.0,100.0);
    glVertex2f(450.0,300.0);
	glVertex2f(200.0,300.0);
	glEnd();
	//right front left
	glBegin(GL_POLYGON);
	glVertex2f(850.0,300.0);
	glVertex2f(900.0,300.0);
    glVertex2f(900.0,100.0);
	glVertex2f(850.0,100.0);
	glEnd();
	//right behind leg
	glBegin(GL_POLYGON);
	glVertex2f(1000.0,450.0);
	glVertex2f(1000.0,200.0);
    glVertex2f(960.0,200.0);
	glVertex2f(960.0,400.0);
	glEnd();
	//monitor screen
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(520.0,400.0);
	glVertex2f(520.0,550.0);
    glVertex2f(720.0,550.0);
	glVertex2f(720.0,400.0);
	glEnd();
//monitor inside
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(530.0,410.0);
	glVertex2f(530.0,540.0);
    glVertex2f(710.0,540.0);
	glVertex2f(710.0,410.0);
	glEnd();
	//keyboard
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(510.0,375.0);
	glVertex2f(720.0,375.0);
    glVertex2f(700.0,320.0);
	glVertex2f(490.0,320.0);
	glEnd();

	//triangle under monitor
	glBegin(GL_POLYGON);
	glVertex2f(625.0,400.0);
	glVertex2f(600.0,390.0);
    glVertex2f(650.0,390.0);
	glEnd();
	//chair left leg
	glColor3f(0.396,0.26,0.13);
	glBegin(GL_POLYGON);
	glVertex2f(550.0,100.0);
	glVertex2f(590.0,100.0);
    glVertex2f(590.0,220.0);
	glVertex2f(550.0,220.0);
	glEnd();
    //chair top
	glColor3f(0.396,0.26,0.13);
	glBegin(GL_POLYGON);
	glVertex2f(550.0,220.0);
	glVertex2f(550.0,370.0);
    glVertex2f(710.0,370.0);
	glVertex2f(710.0,220.0);
	glEnd();
	//chair left leg
	glColor3f(0.396,0.26,0.13);
	glBegin(GL_POLYGON);
	glVertex2f(710.0,100.0);
	glVertex2f(710.0,220.0);
    glVertex2f(670.0,220.0);
	glVertex2f(670.0,100.0);
	glEnd();
	//man's body
	


	//man's head



	//window
	
	glColor3f(1.0,1.0,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(1220.0,290.0);
	glVertex2f(1270.0,300.0);
    glVertex2f(1270.0,420.0);
	glVertex2f(1220.0,410.0);
	glEnd();
	glPointSize(4.0);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(1245.0,295.0);
	glVertex2f(1245.0,415.0);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(1220.0,350.0);
	glVertex2f(1270.0,360.0);
	glEnd();
	glFlush();

}

void init3()
{
	glClearColor(0.99,0.9,0.9,0.0);
	glColor3f(1.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(200,100,200,600);

}
