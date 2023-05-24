#include <stdio.h>
#include <GL/glut.h>
#include "glm.h"
GLMmodel * head = NULL;
GLMmodel * body = NULL;
GLMmodel * uparmL = NULL;
GLMmodel * lowarmL = NULL;
int show[4]={1,1,1,1};
int ID=3;
void keyboard(unsigned char key, int x, int y)
{
    if(key=='0') ID=0;
    if(key=='1') ID=1;
    if(key=='2') ID=2;
    if(key=='3') ID=3;

    ///if(key=='0') show[0] = !show[0];
    ///if(key=='1') show[1] = !show[1];
    ///if(key=='2') show[2] = !show[2];
    ///if(key=='3') show[3] = !show[3];
    glutPostRedisplay();
}
FILE * fout = NULL;
FILE * fin = NULL;
float teapotX=0, teapotY=0;
float angle=0, angle2=0, angle3=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glScalef(0.2,0.2,0.2);
        if(body==NULL)
        {
            head = glmReadOBJ("model/head.obj");
            body = glmReadOBJ("model/body.obj");
            uparmL = glmReadOBJ("model/uparmL.obj");
            lowarmL = glmReadOBJ("model/lowarmL.obj");
        }

        if(ID==0)glColor3f(1,0,0);
        else glColor3f(1,1,1);
        if(show[0]) glmDraw(head, GLM_MATERIAL);

        if(ID==1)glColor3f(1,0,0);
        else glColor3f(1,1,1);
        if(show[1]) glmDraw(body, GLM_MATERIAL);

        glPushMatrix();
            glTranslatef(1.339999, 0.373333, 0);
            glRotatef(angle, 0, 0, 1);
            glTranslatef(-1.339999, -0.373333, 0);
            ///glTranslatef(teapotX,teapotY,0);

            if(ID==2)glColor3f(1,0,0);
            else glColor3f(1,1,1);
            if(show[2]) glmDraw(uparmL, GLM_MATERIAL);

            glPushMatrix();
                glTranslatef(1.879999, 0.080000, 0);
                glRotatef(angle, 0, 0, 1);
                glTranslatef(-1.879999, -0.080000, 0);
                ///glTranslatef(teapotX,teapotY,0);

                if(ID==3)glColor3f(1,0,0);
                else glColor3f(1,1,1);
                if(show[3]) glmDraw(lowarmL, GLM_MATERIAL);

            glPopMatrix();

        glPopMatrix();

    glPopMatrix();

     glPushMatrix();
        glColor3f(0,1,0);
        glutSolidTeapot(0.02);
    glPopMatrix();

    glutSwapBuffers();
}
int oldX = 0,oldY = 0;
void motion(int x,int y)
{
    teapotX += (x - oldX)/150.0;
    teapotY -= (y - oldX)/150.0;
    oldX = x;
    oldY = y;
    angle = x;
    printf("glTranslatef(%f, %f, 0);\n", teapotX, teapotY);
    glutPostRedisplay();
}
void mouse(int button, int state, int x, int y)
{
    if(state==GLUT_DOWN){
        oldX = x;
        oldY = y;
        angle = x;
        ///printf("glTranslatef(%f, %f, 0);\n", teapotX, teapotY);
        ///if(fout==NULL) fout = fopen("file4.txt", "w"); ///step02-2 沒開檔,就開
        ///fprintf(fout, "%f %f\n", teapotX, teapotY); ///step02-2 要再存座標
    }
    display();
}
//void keyboard(unsigned char key, int x, int y) ///step02-2 keyboard函式
//{
//    if(fin==NULL){ ///step02-2 如果檔案還沒 fopen(), 就開它
//        fclose(fout); ///前面mouse會開fout指標, 所以要關掉
//        fin = fopen("file4.txt", "r"); ///step02-2 沒開檔,就開
//    }
//    ///fscanf(fin, "%f %f", &teapotX, &teapotY); ///step02-2 真的讀檔
//    display(); ///step02-2 重畫畫面
//}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week12");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
}
///test-1
