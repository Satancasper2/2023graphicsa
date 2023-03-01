#include <GL/glut.h>
float X=0,Y=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清除背景
    glPushMatrix();///備分矩陣
        glTranslatef(X, Y, 0);///移動到座標(X,Y)
        glutSolidTeapot(0.3);
    glPopMatrix();///還原矩陣

    glutSwapBuffers();
}
void mouse(int button, int state, int x, int y)
{
    X=(x-150)/150.0;///X的實際位置
    Y=-(y-150)/150.0;///Y的實際位置
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("GLUT Shapes");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);///請mouse函式執行
	glutMainLoop();
}
