#include <GL/glut.h>
void display()
{
    glBegin(GL_POLYGON);///�e�I
        glColor3f(1,0,0);glVertex2f(0,1);///���I1����
        glColor3f(0,1,0);glVertex2f(-1,-1);///���I2���
        glColor3f(0,0,1);glVertex2f(1,-1);///���I3�Ŧ�
    glEnd();///�����e�I

    glColor3f(1,1,0);///����
    glutSolidTeapot(0.3);///�e��߯����A�j�p0.3
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
