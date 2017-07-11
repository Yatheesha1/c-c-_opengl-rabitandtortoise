#include<stdio.h>
#include<GL/glut.h>
#include <GL/gl.h>
#include <stdlib.h>
#include "messages.c"
#include "tortoise.c"
#include "rabit.c"

float m=0.0;    //movement of clouds
int x=2,tleg;
float tmove=0;
int story=11;
int wait=000,rwait=1000;
int y=0;
int kcr=0,xm=0;
float as=0;
float aa=1300;
int dialogcount;

void update();
void updates(int);
void displaybg2();
void displayfst();

//startandfinish
void start(int count)
{
  dialogcount=count;
  kcr=0;
  xm=0;
  as=0;
  aa=1300;
  if(count==0)
    glutTimerFunc(5000,updates,0);
  else
    glutTimerFunc(10,updates,0);  
}

void finish()
{
  glColor3f(0.0,0.0,0.0);
  glBegin(GL_POLYGON);
  glVertex2f(1060,100);
  glVertex2f(1050,100);
  glVertex2f(1050,300);
  glVertex2f(1060,300);
  glEnd(); 

  glColor3f(1.0,1.0,1.0);
  glBegin(GL_POLYGON);
  glVertex2f(1060,100);
  glVertex2f(1090,100);
  glVertex2f(1090,300);
  glVertex2f(1060,300);
  glEnd(); 

  glColor3f(0.0,0.0,0.0);
  glBegin(GL_POLYGON);
  glVertex2f(1090,100);
  glVertex2f(1100,100);
  glVertex2f(1100,300);
  glVertex2f(1090,300);
  glEnd(); 
  glFlush();
}

void start1()
{
  glColor3f(0.0,0.0,0.0);
  glBegin(GL_POLYGON);
  glVertex2f(10,100);
  glVertex2f(0,100);
  glVertex2f(0,300);
  glVertex2f(10,300);
  glEnd(); 

  glColor3f(1.0,1.0,1.0);
  glBegin(GL_POLYGON);
  glVertex2f(20,100);
  glVertex2f(10,100);
  glVertex2f(10,300);
  glVertex2f(20,300);
  glEnd(); 

  glColor3f(1.0,1.0,1.0);
  glBegin(GL_POLYGON);
  glVertex2f(30,100);
  glVertex2f(20,100);
  glVertex2f(20,300);
  glVertex2f(30,300);
  glEnd(); 

  glColor3f(1.0,1.0,1.0);
  glBegin(GL_POLYGON);
  glVertex2f(40,100);
  glVertex2f(30,100);
  glVertex2f(30,300);
  glVertex2f(40,300);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glBegin(GL_POLYGON);
  glVertex2f(50,100);
  glVertex2f(40,100);
  glVertex2f(40,300);
  glVertex2f(50,300);
  glEnd();
  glFlush();
}
void track()
{
  glColor3f(0.9176,0.8078,0.4156);
  glBegin(GL_POLYGON);
  glVertex2f(1100,100);
  glVertex2f(0,100);
  glVertex2f(0,300);
  glVertex2f(1100,300);
  glEnd(); 
  glFlush();   
}
 
void flags()
{
  glColor3f(1,1,0);
  glBegin(GL_POLYGON);
  glVertex2f(200,200);
  glVertex2f(200,150);
  glVertex2f(250,175);
  glEnd(); 
  
  glColor3f(0,0,0);
  glBegin(GL_LINES);
  glVertex2f(200,210);
  glVertex2f(200,125);
  glEnd(); 
  glFlush();   
}

void flagf()
{
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex2f(200,200);
  glVertex2f(200,150);
  glVertex2f(250,175);
  glEnd(); 
  
  glColor3f(0,0,0);
  glBegin(GL_LINES);
  glVertex2f(200,210);
  glVertex2f(200,125);
  glEnd(); 
  glFlush();     
}

void draw_object()
{
  //sky
  glColor3f(0.0,0.9,0.9);
  glBegin(GL_POLYGON);
  glVertex2f(0,450);
  glVertex2f(0,700);
  glVertex2f(1100,700);
  glVertex2f(1100,450);
  glEnd();

  //sun
  glColor3f(1.0,0.9,0.0);
  DrawSegment(100,625,50,0,360,1);

  //grass
  glColor3f(0.0,0.9,0.0);
  glBegin(GL_POLYGON);
  glVertex2f(0,0);
  glVertex2f(0,450);
  glVertex2f(1100,450);
  glVertex2f(1100,0);
  glEnd();
}
void river()
{
  glColor3f(0.0,0.85,0.9);
  glBegin(GL_POLYGON);
  glVertex2f(25,0);
  glVertex2f(25,375);
  glVertex2f(30,400);
  glVertex2f(35,410);
  glVertex2f(40,420);
  glVertex2f(45,450);
  glVertex2f(230,450);
  glVertex2f(235,420);
  glVertex2f(245,410);
  glVertex2f(250,405);
  glVertex2f(255,390);
  glVertex2f(257,375);
  glVertex2f(260,350);
  glVertex2f(263,320);
  glVertex2f(265,300);
  glVertex2f(267,295);
  glVertex2f(270,290);
  glVertex2f(274,285);
  glVertex2f(278,280);
  glVertex2f(280,270);
  glVertex2f(285,260);
  glVertex2f(289,250);
  glVertex2f(290,240);
  glVertex2f(295,210);
  glVertex2f(300,190);
  glVertex2f(330,0);
  glEnd();
}
//cloud
void cloud(int x,int y)
{
  glColor3f(1.0,1.0,1.0);
  DrawSegment(160+x,625+y,20,0,360,1);
  DrawSegment(200+x,625+y,35,0,360,1);
  DrawSegment(225+x,625+y,35,0,360,1);
  DrawSegment(265+x,625+y,20,0,360,1);
}

void tree()
{
  glColor3f(0.5019,0.0,0.0);
  glBegin(GL_POLYGON);
  glVertex2f(350,325);
  glVertex2f(350,395);
  glVertex2f(365,395);
  glVertex2f(365,325);
  glEnd();

  glColor3f(0.0,0.5,0.0);
  DrawSegment(340,400,30,0,360,1);
  DrawSegment(380,400,30,0,360,1);
  DrawSegment(350,440,25,0,360,1);
  DrawSegment(370,440,25,0,360,1);
  DrawSegment(360,465,20,0,360,1);
}

void tree(int p,int q,int r)
{
  glPushMatrix();
  glTranslated(p,q,r);
  tree();
  glPopMatrix();
}

void displaybg2()
{
  glClear(GL_COLOR_BUFFER_BIT);
  draw_object();
  cloud(0,0);
  cloud(200,0);
  
  tree(50,50,0);
  tree(150,70,0);
  tree(250,50,0);
  tree(350,90,0);
  tree(450,50,0);
  tree(550,60,0);
  tree(650,30,0);
  
  glPushMatrix();
  glTranslated(xm,250,0);
  glScaled(-0.5,-0.5,1.0);

  rabbitdraw(y);
  glPopMatrix();
  glPushMatrix();
  glColor3f(0.6470,0.1647,0.1647);
  glTranslated(aa,62,0);
  glScaled(-1.8,1.2,1.0);
  DrawSegment(75,75,35,0,180,1);//body
  glColor3f(0.6470,0.1647,0.1647);
	
  DrawSegment(75-20+as,74,5,0,360,1);//leg
  DrawSegment(75+20+as,74,5,0,360,1);//leg
  DrawSegment(75+35+3,79,5,0,360,1);//head
  innerdesign();
  tail();
  glFlush();
  glPopMatrix();
  if(dialogcount==1)
  {
    if(kcr>=500&&kcr<=530)
    {
      title2r1();
    }
    else
      if(kcr>=532&&kcr<=560)
        title2t1();
      else
        if(kcr>=562&&kcr<=590)
          title2r2();
        else
          if(kcr>=592&&kcr<=620)
            title2t2();
          else
            if(kcr>=622&&kcr<=650)
              title2r3();
            else
              if(kcr>=652&&kcr<=680)
                title2t3();
  }
  else if(dialogcount ==2)
  {
    if(kcr>=500&&kcr<=515)
    {
      title3r1();
    }
    else
      if(kcr>=515&&kcr<=530)
        title3t1();
      else
        if(kcr>=530&&kcr<=545)
          title3r2();
        else
          if(kcr>=545&&kcr<=560)
            title3t2();  
  }
  else if(dialogcount==3)
  {
    if(kcr>=500&&kcr<=515)
    {
      title4r1();
    }
    else
      if(kcr>=515&&kcr<=530)
        title4t1();
      else
        if(kcr>=530&&kcr<=545)
          title4r2();
  }
  if(dialogcount==4)
  {
    if(kcr>=500&&kcr<=515)
    {
      title5r1();
    }
    else
      if(kcr>=515&&kcr<=530)
        title5t1();
      else
        if(kcr>=530&&kcr<=545)
          title5r2();
        else
          if(kcr>=545&&kcr<=560)
            title5t2();
          else
            if(kcr>=560&&kcr<=575)
              title5r3();
  }
  glutSwapBuffers();
}

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  draw_object();
  cloud(0,0);
  cloud(200,0);
  track();
  glPushMatrix();
  glTranslated(50,0,0);
  start1();
  startd();
  glPopMatrix();
  glPushMatrix();
  glTranslated(-50,0,0);
  finish();
  finishd();
  glPopMatrix();
  
  tree(50,50,0);
  tree(150,70,0);
  tree(250,50,0);
  tree(350,90,0);
  tree(450,50,0);
  tree(550,60,0);
  tree(650,30,0);

  glPushMatrix();
  glTranslated(200,-280,0);
  glScaled(1.5,1.5,0);
  tree();
  glPopMatrix();
  
  glPushMatrix();
  glTranslated(-270,-100,0);
  glScaled(1.2,1.2,0);
  tree();
  glPopMatrix();
  
  //rabbit
  glPushMatrix();
  glTranslated(200+x,280,0);
  glScaled(-0.5,-0.5,1.0);
  rabbitdraw(y);
  glPopMatrix();
  //rabbit
  //tortoise
  glPushMatrix();
  glTranslated(0,-80,0);
  glScaled(0.8,0.8,1.0);
  tortoisedraw(tleg/2,tmove);
  glPopMatrix();
  glPushMatrix();
  glTranslated(-95,175,0);
  flags();
  glPopMatrix();

  glPushMatrix();
  glTranslated(855,175,0);

  flagf();
  glPopMatrix();

  if(rwait>=0&&rwait<=30)
  {
    titlerest();
  }
  if(story==1)
  {
    if(wait>=2&&wait<=30) 
    {
      title3r1();
    }
    else
      if(wait>=32&&wait<=60)
        title3t1();
      else
        if(wait>=62&&wait<=90)
          title3r2();
        else
          if(wait>=92&&wait<=122)
            title3t2();  
  }
  else if(story==2)
  {
   if(wait>=02&&wait<=30)
   {
     title4r1();
   }
   else
     if(wait>=32&&wait<=60)
       title4t1();
     else
       if(wait>=62&&wait<=90)
         title4r2();
  }
  glutSwapBuffers();
  update();
  glFlush();
}
void riverup()
{
  glColor3f(0.0,0.85,0.9);
  glBegin(GL_POLYGON);
  glVertex2i(425,220);
  glVertex2i(425,0);
  glVertex2i(400+290,0);
  glVertex2i(400+290,220);
  glEnd();
}
void riverup1()
{     
  glColor3f(0.0,0.85,0.9);   
  glBegin(GL_POLYGON);
  glVertex2i(425,180);
  glVertex2i(425,0);
  glVertex2i(400+290,0);
  glVertex2i(400+290,180);
  glEnd();
}

void display2()
{
  glClear(GL_COLOR_BUFFER_BIT);
  draw_object();
  cloud(0,0);
  cloud(200,0);
  track();
  glPushMatrix();
  glTranslated(400,0,0);
  river();
  glPopMatrix();

  glPushMatrix();
  glTranslated(50,0,0);
  start1();
  startd();
  glPopMatrix();
  glPushMatrix();
  glTranslated(-50,0,0);
  finish();
  finishd();
  glPopMatrix();
  //mytrees
  glPushMatrix();
  glTranslated(0,90,0);
  tree();
  glPopMatrix();

  tree(350,90,0);
  tree(-550,0,0);
  tree(450,50,0);
  tree(550,60,0);
  tree(-650,0,0);
  tree(650,30,0);
  tree(350,-50,0);
  tree(50,-50,0);

  //tortoise
  glPushMatrix();
  if(tleg==500)
  {
    glTranslated(1550,0,0);
    glScaled(-1.0,1.0,1.0);
  }
  glScaled(0.8,0.8,1.0);

  tortoisedraw(tleg/4,tmove);
  glPopMatrix();
  //tortoise
  riverup();
  //rabbit
  glPushMatrix();
  glTranslated(200+x,250,0);
  glScaled(-0.5,-0.5,1.0);
  rabbitdraw(y);
  glPopMatrix();

  glPushMatrix();
  glTranslated(-95,175,0);
  flags();
  glPopMatrix();

  glPushMatrix();
  glTranslated(855,175,0);

  flagf();
  glPopMatrix();

  if(wait>=2&&wait<=30) 
  {
    title5r1();
  }
  else
    if(wait>=32&&wait<=60)
      title5t1();
    else
      if(wait>=62&&wait<=90)
        title5r2();
      else
        if(wait>=92&&wait<=120)
          title5t2();
        else
          if(wait>=122&&wait<=150)
            title5r3();
  glutSwapBuffers();
  update();
  glFlush();
}

void display3()
{
  glClear(GL_COLOR_BUFFER_BIT);
  draw_object();
  cloud(0,0);
  cloud(200,0);
  track();
  glPushMatrix();
  glTranslated(400,0,0);
  river();
  glPopMatrix();
  glPushMatrix();
  glTranslated(50,0,0);
  start1();
  startd();
  glPopMatrix();
  glPushMatrix();
  glTranslated(-50,0,0);
  finish();
  finishd();
  glPopMatrix();
 
  tree(0,90,0);
  tree(350,90,0);
  tree(-550,0,0);
  tree(450,50,0);
  tree(550,60,0);
  tree(-650,0,0);
  tree(650,30,0);
  tree(350,-50,0);
  tree(50,-50,0);

  //rabbit
  glPushMatrix();
  glTranslated(200+x,250,0);
  glScaled(-0.5,-0.5,1.0);
  rabbitdraw(y);
  glPopMatrix();
  //rabbit
  //tortoise
  glPushMatrix();

  glScaled(0.8,0.8,1.0);  
  glTranslated(x-80,-10,0);
  tortoisedraw(tleg/4,tmove);
  glPopMatrix();
  //tortoise
  //flags
  glPushMatrix();
  glTranslated(-95,175,0);
  flags();
  glPopMatrix();

  glPushMatrix();
  glTranslated(855,175,0);
  //glColor3f(1.0,0.0,0.0);
  flagf();
  glPopMatrix();
  //flags
  glutSwapBuffers();
  update();
  glFlush();
}

void display4()
{
  glClear(GL_COLOR_BUFFER_BIT);
  draw_object();
  cloud(0,0);
  cloud(200,0);
  track();
  glPushMatrix();
  glTranslated(400,0,0);
  river();
  glPopMatrix();
  glPushMatrix();
  glTranslated(50,0,0);
  start1();
  startd();
  glPopMatrix();
  glPushMatrix();
  glTranslated(-50,0,0);  
  finish();
  finishd();
  glPopMatrix();

  tree(0,90,0);
  tree(350,90,0);
  tree(-550,0,0);
  tree(450,50,0);
  tree(550,60,0);
  tree(-650,0,0);
  tree(650,30,0);
  tree(350,-50,0);
  tree(50,-50,0);

  //tortoise
  glPushMatrix();
  glScaled(0.8,0.8,1.0);
  glTranslated(300,-50,0);
  tortoisedraw(tleg/4,tmove);
  glPopMatrix();
  //tortoise
  //rabbit
  glPushMatrix();
  glTranslated(480+x,320,0);
  glScaled(-0.5,-0.5,1.0);
  rabbitdraw(y);
  glPopMatrix();

  glPushMatrix();
  glTranslated(-95,175,0);
  flags();
  glPopMatrix();

  glPushMatrix();
  glTranslated(855,175,0);

  flagf();
  glPopMatrix();
  //flags
  riverup1();
  glutSwapBuffers();
  update();
  glFlush();
}

void update()
{
  switch(story)
  {
    case 1:
          glutDisplayFunc(display);
          if(x<600||(tleg>339&&x<800))
          {
            x+=6;
            y++;    
          }
          if(x>=600&&rwait>=1000)
            rwait=0;
          if(tleg<340)
          {
            rwait++;          
            tmove+=1;
            tleg++;
          }
          else if(wait<125&&x>=800)
          {
            wait++;           
          }
          else if(x>=800&&wait==125)
          {
            wait=0;
            tmove=0;
            x=0;
            tleg=0;
            y=0;
            story=2;
          }             
    break;
    
    case 2:
          glutDisplayFunc(display);
          if(x<850)
          {
            x+=6;
            y++;
            tmove+=1;
            tleg++;
          } 
          else if(tleg<340)
          {
            tmove+=1;
            tleg++;
          }
          else if(wait<95)
          {
            wait++;
          }
          else
          {
            tmove=0;
            x=0;
            tleg=0;
            y=0;
            wait=0;
            story=3;
          }          
    break;
    
    case 3:
          glutDisplayFunc(display2);
          if(x<200)
          {
            x+=5;
            y++;
          }
          if(tleg<500)
          {
            tmove+=.5;
            tleg++;
          }
          else if(wait<155)
          {
            wait++;
          }
          else
          {
            tmove=0;
            x=0;
            tleg=0;
            y=0;
            story=4;
          }          
     break;
     
     case 4:
           glutDisplayFunc(display3);
           if(x<200)
           {
             x+=3;
             y++;
             tmove+=0.3;
         
           }
           else
           {
             tmove=0;
             x=0;
             tleg=0;
             y=0;
             story=5;
             update();
             return;
           }  
     break;
     
     case 5:
           glutDisplayFunc(display4);
           if(x<280)
           {
             x+=1;
             //y++;
             tmove+=0.4;
             tleg++;  
           }
           else
           { 
			 tmove=60;
             x=630;
             tleg=0;
             y=0;
             story=10;
             glutDisplayFunc(display3);
           }
     break;
        
     case 6:
           if(kcr<600)
           {
             glutDisplayFunc(displaybg2);
             start(1);
           }
           else
           {
             story=1;
             kcr=0;
             update();
           }
     break;
     
     case 7:
           if(kcr<600)
           {
             glutDisplayFunc(displaybg2);
             start(2);
           }
           else
           {
             story=2;
             kcr=0;
             update();
           }
     break;
     
     case 8:
           if(kcr<600)
           {
             glutDisplayFunc(displaybg2);
             start(3);
           }
           else
           {
             story=3;
             kcr=0;
             update();
           }
     break;
                           
     case 9:
           if(kcr<600)
           {
             glutDisplayFunc(displaybg2);
             start(4);
           }
           else
           {
             story=4;
             kcr=0;
             update();
           }
     break;
                                                   
     case 10:
            glutDisplayFunc(display3);
            if(x<850)
            {
              x+=3;
              y++;
              tmove+=0.2;         
            }
            else
            {
              tmove=0;
              x=0;
              tleg=0;
              y=0;
              story=12;
            }  
     break;
     
     case 11:
            if(kcr<600)
            {
              glutDisplayFunc(displayfst);
              start(0);
            }
            else
            {
              story=6;
              kcr=0;
              update();
            }
     break;
                            
     case 12:
            if(kcr<600)
            {
              glutDisplayFunc(displayfst);
              start(6);
            }
     break;                       
  }
  glutPostRedisplay();
}

void updates(int values)
{
  if(xm<500)
  {
    xm+=6;
    kcr+=6;
    y++;
  }
  else kcr+=1;
     if(aa>800)
     {
       aa-=6;
       if(as==0)
         as+=2;
       else as=0;
     }
  glutPostRedisplay();
  if(kcr<685&&dialogcount==1)
    glutTimerFunc(10,updates,0);
  else if(kcr<580&&dialogcount==2)
    glutTimerFunc(10,updates,0);
  else if(kcr<550&&dialogcount==3)
    glutTimerFunc(10,updates,0);
  else if(kcr<580&&dialogcount==4)
    glutTimerFunc(10,updates,0);
  else
  {
    kcr=600;
    update();
  }
}

void myinit()
{
  glClearColor(1.0,1.0,1.0,1.0);
  glColor3f(0.0,0.0,1.0);
  glPointSize(2.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0.0,1100.0,0.0,700.0);
}

void displayfst()
{
  glClear(GL_COLOR_BUFFER_BIT);
  draw_object();
  cloud(0,0);
  cloud(200,0);
  
  tree(50,50,0);
  tree(150,70,0);
  tree(250,50,0);
  tree(350,90,0);
  tree(450,50,0);
  tree(550,60,0);
  tree(650,30,0);

  glPushMatrix();
  glTranslated(200,250,0);			
  glScaled(-0.5,-0.5,1.0);

  rabbitdraw(y);
  glPopMatrix();

  glPushMatrix();
  glColor3f(0.6470,0.1647,0.1647);
  glTranslated(1100,62,0);				
  glScaled(-1.8,1.2,1.0);
  DrawSegment(75,75,35,0,180,1);//body

  glColor3f(0.6470,0.1647,0.1647);
  DrawSegment(75-20+as,74,5,0,360,1);//leg
  DrawSegment(75+20+as,74,5,0,360,1);//leg
  DrawSegment(75+35+3,79,5,0,360,1);//head
  innerdesign();
  tail();
  glPopMatrix();

  if(dialogcount==0)
  {
    titlef1();
    titlef2();
    titlef3();
  }
  else
  {
	titlel1();
    titlel2();
    titlel3();
  }

  glFlush();
  glutPostRedisplay();
  glutSwapBuffers();
}

int main(int argc,char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
  glutInitWindowSize(1100.0,700.0);
  glutInitWindowPosition(0,0);
  glutCreateWindow("Hare and Tortois");
  glutDisplayFunc(displayfst);
  myinit();
  update();
  usleep(2000);
  glutMainLoop();
  return 0;
}
