#include <GL/glut.h>
#include<math.h>
void myCircle(float r,float x,float y)
{
    glBegin(GL_POLYGON);///�e�I
        for(float a=0;a<2*3.14151926535897933832795088419;a+=0.01)
        {
            glVertex2f(r*cos(a)+x,r*sin(a)+y);

        }
    glEnd();///�����e�I

}
void display()
{
    glColor3f(1,0,1); myCircle(0.6,0,0);

    glColor3f(1,0,0); myCircle(0.3,0.5,0.5);
    glColor3f(0,1,0); myCircle(0.3,-0.5,0.5);
    glColor3f(1,1,0); myCircle(0.3,-0.5,-0.5);
    glColor3f(0,0,1); myCircle(0.3,0.5,-0.5);

    glutSwapBuffers();///GLUT��e��swap�e����ܪ��a��
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);///GLUT�}��
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///�]�w���
	glutCreateWindow("GLUT Shapes");///��ܵ���
	glutDisplayFunc(display);///�n��ܪ����
	glutMainLoop();///��main�j��i������
}
