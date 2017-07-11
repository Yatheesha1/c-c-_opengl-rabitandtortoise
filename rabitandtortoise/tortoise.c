#include<stdlib.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
void design(int x,int y,int z)
{
  glPushMatrix();
  glTranslated(x,y,z);
  glScaled(0.4,0.5,1);
  glColor3f(0.0,0.0,0.0);
  glLineWidth(3.0);
  glBegin(GL_LINE_LOOP);
  glVertex2f(100,60);
  glVertex2f(110,50);
  glVertex2f(120,50);
  glVertex2f(130,60);
  glVertex2f(120,70);
  glVertex2f(110,70);
  glEnd();
  glPopMatrix();
}

void innerdesign()
{
  design(2,52,0);
  design(13,52,0);
  design(24,52,0);
  design(35,52,0);
  design(46,52,0);
  design(57,52,0);
  design(6,62,0);
  design(17,62,0);
  design(28,62,0);
  design(39,62,0);
  design(50,62,0);
  design(17,72,0);
  design(28,72,0);
  design(39,72,0);

  glPushMatrix();
  glColor3f(0.0,0.0,0.0);
  glTranslated(79,8,0);				//EYE OF TORTOISE
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(36.0,72.0);
  glEnd();
  glPopMatrix();
}

void DrawSegment(float cx, float cy, float r, int degree1,int degree2,int shade) 
{ 
	int num_segments=360;
	if(shade==0)
	  glBegin(GL_LINE_LOOP); 
	if(shade==1)
	  glBegin(GL_POLYGON);
	for(int i = degree1; i < degree2; i++) 
	{ 
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get the current angle 

		float x = r * cosf(theta);//calculate the x component 
		float y = r * sinf(theta);//calculate the y component 

		glVertex2f(x + cx, y + cy);//output vertex 
	} 
	glEnd(); 
}

void tail()
{
glColor3f(0.6470,0.1647,0.1647);
glBegin(GL_POLYGON);
glVertex2f(75-33,82);
glVertex2f(75-33-8,78);
glVertex2f(75-33,75);
glEnd();
}
void tortoisedraw(int a,float aa)
{
  aa=aa-200;
  glPushMatrix();
  glTranslated(600,00,0);
  glColor3f(0.6470,0.1647,0.1647);
  glScaled(2.80,1.58,1.0);
  glTranslated(aa,100,0);
  
  DrawSegment(75,75,35,0,180,1);//body
  glColor3f(0.6470,0.1647,0.1647);
  glPushMatrix();
  if(a%2==0)
     glTranslated(2,0,0);
	
  DrawSegment(75-20,74,5,0,360,1);//leg
  DrawSegment(75+20,74,5,0,360,1);//leg
  glPopMatrix();
  DrawSegment(75+35+3,79,5,0,360,1);//head
  innerdesign();
  tail();
  glPopMatrix();
}
