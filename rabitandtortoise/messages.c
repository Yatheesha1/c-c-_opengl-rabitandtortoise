#include<unistd.h>
void displaytext(float r,float g,float b,const char *string,int x,int y)
{
	glColor3f(r,g,b);
	glRasterPos2f(x,y);
    while(*string)
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, *string++);
    usleep(3000);    
}
void dialog(int x,int y)
{
glPushMatrix();
glTranslated(x,y,0);
glTranslated(310,-150,0);
glScaled(-.4,.3,.3);
glColor3f(0.9,0.91,0.98);

glBegin(GL_POLYGON);
glVertex2f(300,700);
 glVertex2f(700,700);
glVertex2f(800,600);
glVertex2f(800,400);
glVertex2f(700,300);
glVertex2f(300,300);
glVertex2f(150,250);
glVertex2f(200,400);
glVertex2f(200,600);
glEnd(); 
glPopMatrix();
glFlush();
}
void dialogf(int x,int y)
{
glPushMatrix();
glTranslated(x,y,0);
glTranslated(-110,-150,0);
glScaled(.4,.3,.3);
glColor3f(0.9,0.91,0.98);

glBegin(GL_POLYGON);
glVertex2f(300,700);
 glVertex2f(700,700);
glVertex2f(800,600);
glVertex2f(800,400);
glVertex2f(700,300);
glVertex2f(300,300);
glVertex2f(150,250);
glVertex2f(200,400);
glVertex2f(200,600);
glEnd(); 
glPopMatrix();
glFlush();
}
void titlef1()
{
     glColor3f(0.0,0.0,0.0);
     glRasterPos2f(400,350); 
}

void titlef2()
{
     displaytext(0,0,0,"CGV MINI PROJECT",460,320);
     displaytext(0,0,0,"________________",460,310);
}

void titlef3()
{
     displaytext(0,0,0,"THE HARE AND THE TORTOISE-VERSION 2.0 BY:",360,280);
     displaytext(0,0,0,"4SF14CS026 & 4SF14CS027",430,240);
}

void titlel1()
{
     displaytext(0,0,0,"SO WATS THE MORAL OF THE STORY",400,350);
}

void titlel2()
{
     displaytext(0,0,0,"SLOW AND STEADY WINS THE RACE IS A GOOD OLD MORAL",325,320);	
}

void titlel3()
{
     displaytext(0,0,0,"IN TODAYS WORLD",460,200);
     displaytext(0,0,0,"TEAMWORK WINS",468,170);
     displaytext(0,0,0,"_____________",468,160);
}

void titlerest()
{
     dialogf(750,350);
     displaytext(0,0, 0,"HE IS TOO SLOW",750,350);
     displaytext(0,0, 0,"LET ME TAKE SOME REST",750,335);     
	
}
void title2r1()
{
     dialog(250,300);
     displaytext(0,0,0,"HEY TORT!HOW ARE YOU??",250,300);	
}

void title2t1()
{
     dialogf(650,300);
     displaytext(0,0,0,"HEY BUNNY! I AM FINE!",650,300);
     displaytext(0,0,0," HOW BOT YU ?",650,285);
}

void title2r2()
{
     dialog(250,300);
     displaytext(0,0,0,"I AM FINE!ITS A PLEASANT",250,300);
     displaytext(0,0,0,"DAY ! ISNT IT ??",300,285);
}

void title2t2()
{
     dialogf(650,300);
     displaytext(0,0,0,"INDEED IT IS !",650,300);
}

void title2r3()
{   
     dialog(250,300);
     displaytext(0,0,0,"SO LETS HAVE A RACE",250,300);	
}

void title2t3()
{
     dialogf(650,300);
     displaytext(0,0,0,"SURE !!",650,300);
}

void title3r1()
{
     dialog(750,350);
     displaytext(0,0,0,"I HAVE LOST THE RACE :(",750,350);
}

void title3t1()
{
     dialog(800,300);
     displaytext(0,0,0,"YES AND I DID WIN ! :)",800,300);
}

void title3r2()
{
     dialog(750,350);
     displaytext(0,0,0,"ITS BCOZ I TOOK REST",750,350);
     displaytext(0,0,0,"LETS HAVE A REMATCH !",750,335);
}

void title3t2()
{
     dialog(800,300);
     displaytext(0,0,0,"OK !",800,300);
}

void title4r1()
{
     dialog(800,350);
     displaytext(0,0,0,"I WIN !!",800,350);	
}

void title4t1()
{
     dialog(800,300);
     displaytext(0,0,0,"CONGRATS ! SHALL ",800,300);
	 displaytext(0,0,0,"WE HAVE A RACE AGAIN ? BUT",800,285);
     displaytext(0,0,0,"ON A TRACK TAT I CHOOSE !",800,270);
}

void title4r2()
{
     dialog(800,350);
     displaytext(0,0,0,"SURE !",800,350);
}

void title5r1()
{
     dialog(150,300);
     displaytext(0,0,0,"U WON..I DONT KNOW TO",150,300);
     displaytext(0,0,0," SWIM ACROSS THE RIVER",150,285);
}

void title5t1()
{
     dialogf(750,350);
     displaytext(0,0,0,"DONT BE SAD ! WE ",750,350);
     displaytext(0,0,0,"BOTH CAN WIN TOGETHER",750,335);
}

void title5r2()
{
     dialog(150,300);
     displaytext(0,0,0,"HWZ TAT ?",150,300);
}

void title5t2()
{
     dialogf(750,350);
     displaytext(0,0,0,"U CARRY ME ON LAND AND",750,350);
     displaytext(0,0,0,"I WILL CARRY U IN WATER",750,335);
}

void title5r3()
{
     dialog(150,300);
     displaytext(0,0,0,"LETS RACE !",150,300);
}

void finishd()
{
  displaytext(0,0,0,"F",1075,240);
  displaytext(0,0,0,"I",1075,220);
  displaytext(0,0,0,"N",1075,200);
  displaytext(0,0,0,"I",1075,180);
  displaytext(0,0,0,"S",1075,160);
  displaytext(0,0,0,"H",1075,140);
}

void startd()
{
  displaytext(0,0,0,"S",24,230);
  displaytext(0,0,0,"T",24,210);
  displaytext(0,0,0,"A",24,190);
  displaytext(0,0,0,"R",24,170);
  displaytext(0,0,0,"T",24,150);
}
