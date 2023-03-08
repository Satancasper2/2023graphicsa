#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle,0,1,0);///以Y軸為中心，旋轉angle角度
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
    angle++;///角度++
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("GLUT Shapes");
	glutDisplayFunc(display);
	glutIdleFunc(display);///有空idle時，重畫畫面
	glutMainLoop();
}
