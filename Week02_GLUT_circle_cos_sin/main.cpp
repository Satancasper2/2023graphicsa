#include <GL/glut.h>
#include<math.h>
void myCircle(float r,float x,float y)
{
    glBegin(GL_POLYGON);///畫點
        for(float a=0;a<2*3.14151926535897933832795088419;a+=0.01)
        {
            glVertex2f(r*cos(a)+x,r*sin(a)+y);

        }
    glEnd();///結束畫點

}
void display()
{
    glColor3f(1,0,1); myCircle(0.6,0,0);

    glColor3f(1,0,0); myCircle(0.3,0.5,0.5);
    glColor3f(0,1,0); myCircle(0.3,-0.5,0.5);
    glColor3f(1,1,0); myCircle(0.3,-0.5,-0.5);
    glColor3f(0,0,1); myCircle(0.3,0.5,-0.5);

    glutSwapBuffers();///GLUT把畫面swap送到顯示的地方
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);///GLUT開啟
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///設定顯示
	glutCreateWindow("GLUT Shapes");///顯示視窗
	glutDisplayFunc(display);///要顯示的函數
	glutMainLoop();///用main迴圈告知結束
}
