#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex2f(-0.356, -0.268);
        glVertex2f(-0.420, -0.084);
        glVertex2f(-0.420, 0.092);
        glVertex2f(-0.284, 0.456);
        glVertex2f(0.364, 0.508);
        glVertex2f(0.532, 0.408);
        glVertex2f(0.544, 0.120);
        glVertex2f(0.524, -0.292);
        glVertex2f(0.232, -0.368);
        glVertex2f(-0.168, -0.296);
        glVertex2f(-0.396, -0.276);

    glEnd();
    glutSwapBuffers();
}
void mouse(int button, int state, int x, int y)
{
    float X=(x-250)/250.0;
    float Y=(y-250)/250.0;
    if(state==GLUT_DOWN)
    {
        printf("    glVertex2f(%.3f, %.3f);\n",X,Y);
    }
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(500,500);
	glutCreateWindow("GLUT Shapes");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);///½Ðmouse¨ç¦¡°õ¦æ
	glutMainLoop();
}
