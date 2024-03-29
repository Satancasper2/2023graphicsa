#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSolidTeapot(0.3);
    glPushMatrix();
        glTranslatef(0.49,0.13,0);
        glRotatef(angle,0,0,1);
        glTranslatef(0.46,-0.05,0);
        glutSolidTeapot(0.3);

            glPushMatrix();
                glTranslatef(0.49,0.13,0);
                glRotatef(angle,0,0,1);
                glTranslatef(0.46,-0.05,0);
                glutSolidTeapot(0.3);
            glPopMatrix();

    glPopMatrix();

    glutSwapBuffers();
    angle++;
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("GLUT Shapes");
	glutDisplayFunc(display);
	glutIdleFunc(display);
	glutMainLoop();
}
