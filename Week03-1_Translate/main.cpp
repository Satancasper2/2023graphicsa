#include <GL/glut.h>
float X=0,Y=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M���I��
    glPushMatrix();///�Ƥ��x�}
        glTranslatef(X, Y, 0);///���ʨ�y��(X,Y)
        glutSolidTeapot(0.3);
    glPopMatrix();///�٭�x�}

    glutSwapBuffers();
}
void mouse(int button, int state, int x, int y)
{
    X=(x-150)/150.0;///X����ڦ�m
    Y=-(y-150)/150.0;///Y����ڦ�m
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("GLUT Shapes");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);///��mouse�禡����
	glutMainLoop();
}
