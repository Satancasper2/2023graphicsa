#include <GL/glut.h>
void display()
{
    glBegin(GL_POLYGON);///畫點
        glColor3f(1,0,0);glVertex2f(0,1);///頂點1紅色
        glColor3f(0,1,0);glVertex2f(-1,-1);///頂點2綠色
        glColor3f(0,0,1);glVertex2f(1,-1);///頂點3藍色
    glEnd();///結束畫點

    glColor3f(1,1,0);///黃色
    glutSolidTeapot(0.3);///畫實心茶壺，大小0.3
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
