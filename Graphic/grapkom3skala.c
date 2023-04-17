#include<GL\glut.h>
#include<GL\glu.h>
#include<GL\gl.h>

void display();
void reshape(int,int);
void timer(int);

void myinit()
{
	glClearColor(1.0,0.1,1.1,1.0);
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(600,600);
	glutCreateWindow("asade");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
//	glutTimerFunc(1000,timer,0);
	myinit();
	glutMainLoop();
}

float y_position = -0.0;
int state = 1;


void display()
{
	glClear (GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glColor3f(1,2.5,0 );
	glBegin (GL_POLYGON);
	glVertex2f (-0.0, y_position+1.0); 
	glVertex2f (-2.0, y_position-3.0); 
	glVertex2f (2.0, y_position-3.0);
	
	/**/
    
	/**/
	glEnd();
//	scale triangles at a constant rate
    glScalef(0.2,0.2,0.0f);
	glBegin (GL_POLYGON);
	glVertex2f (-0.0, y_position+16.0); 
	glVertex2f (-2.0, y_position+12.0); 
	glVertex2f (2.0, y_position+12.0);
	
	/**/
    
	/**/
	glEnd();
	glPopMatrix (); 
	glutSwapBuffers ();
		
}

void reshape (int w, int h){
	glViewport(0,0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,10,-10,10);
	glMatrixMode(GL_MODELVIEW);
}
//void timer(int y){
  //  glutPostRedisplay();
 //   glutTimerFunc(1000/60, timer, 0);
  //  switch(state){
   //     case 1:
    //        if (y_position<8)
     //           y_position += 0.15;
//            else
  //              state = -1;
    //        break;
      //  case -1:
     //       if (y_position>-6)
    //            y_position -= 0.15;
    //        else
    //            state =1;
   //         break;
   // }
//}
