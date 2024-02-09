#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

float rectangleShape(float x1, float x2, float y1, float y2, float r, float g, float b){
    glBegin(GL_QUADS);

    glColor3f(r, g, b);
    glVertex3f(x1, y1, 0.0f);
    glVertex3f(x2, y1, 0.0f);
    glVertex3f(x2, y2, 0.0f);
    glVertex3f(x1, y2, 0.0f);

    glEnd();
}

float trapezoidShape(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4, float r, float g, float b){
    glBegin(GL_QUADS);

    glColor3f(r, g, b);
    glVertex3f(x1, y1, 0.0f);
    glVertex3f(x2, y2, 0.0f);
    glVertex3f(x3, y3, 0.0f);
    glVertex3f(x4, y4, 0.0f);

    glEnd();
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);

    //Main monitor area

    //Main monitor border

    glBegin(GL_QUADS);

    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.38f, 0.8f, 0.0f);
    glVertex3f(0.62f, 0.8f, 0.0f);
    glVertex3f(0.62f, 0.55f, 0.0f);
    glVertex3f(0.38f, 0.55f, 0.0f);

    glEnd();

    //Main monitor display

    glBegin(GL_QUADS);

    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(0.385f, 0.79f, 0.0f);
    glVertex3f(0.615f, 0.79f, 0.0f);
    glVertex3f(0.615f, 0.56f, 0.0f);
    glVertex3f(0.385f, 0.56f, 0.0f);

    glEnd();

    //Windows logo

    glBegin(GL_QUADS);

    glColor3f(20.0f / 255.0f, 167.0f / 255.0f, 250.0f / 255.0f);
    glVertex3f(0.468f, 0.72f, 0.0f);
    glVertex3f(0.496f, 0.72f, 0.0f);
    glVertex3f(0.496f, 0.67f, 0.0f);
    glVertex3f(0.468f, 0.67f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(20.0f / 255.0f, 167.0f / 255.0f, 250.0f / 255.0f);
    glVertex3f(0.499f, 0.72f, 0.0f);
    glVertex3f(0.527f, 0.72f, 0.0f);
    glVertex3f(0.527f, 0.67f, 0.0f);
    glVertex3f(0.499f, 0.67f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(20.0f / 255.0f, 167.0f / 255.0f, 250.0f / 255.0f);
    glVertex3f(0.499f, 0.665f, 0.0f);
    glVertex3f(0.527f, 0.665f, 0.0f);
    glVertex3f(0.527f, 0.615f, 0.0f);
    glVertex3f(0.499f, 0.615f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(20.0f / 255.0f, 167.0f / 255.0f, 250.0f / 255.0f);
    glVertex3f(0.468f, 0.665f, 0.0f);
    glVertex3f(0.496f, 0.665f, 0.0f);
    glVertex3f(0.496f, 0.615f, 0.0f);
    glVertex3f(0.468f, 0.615f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    //Main monitor stand

    glBegin(GL_QUADS);

    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.495f, 0.55f, 0.0f);
    glVertex3f(0.505f, 0.55f, 0.0f);
    glVertex3f(0.505f, 0.50f, 0.0f);
    glVertex3f(0.495f, 0.50f, 0.0f);

    glEnd();

    //Main monitor stand flat

    glBegin(GL_QUADS);

    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.458f, 0.51f, 0.0f);
    glVertex3f(0.545f, 0.51f, 0.0f);
    glVertex3f(0.545f, 0.50f, 0.0f);
    glVertex3f(0.458f, 0.50f, 0.0f);

    glEnd();

    //Secondary monitor area

    //2nd monitor border

    trapezoidShape(0.884, 1.125, 1.125, 0.884, 0.8, 0.81, 0.54, 0.55, 0.3, 0.3, 0.3);

    glBegin(GL_QUADS);

    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.624f, 0.8f, 0.0f);
    glVertex3f(0.865f, 0.81f, 0.0f);
    glVertex3f(0.865f, 0.54f, 0.0f);
    glVertex3f(0.624f, 0.55f, 0.0f);

    glEnd();

    //2nd monitor display

    glBegin(GL_QUADS);

    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(0.63f, 0.79f, 0.0f);
    glVertex3f(0.859f, 0.8f, 0.0f);
    glVertex3f(0.859f, 0.55f, 0.0f);
    glVertex3f(0.63f, 0.56f, 0.0f);

    glEnd();

    //Youtube logo

    glBegin(GL_QUADS);

    glColor3f(255.0f / 255.0f, 0.0f / 255.0f, 0.0f / 255.0f);
    glVertex3f(0.7f, 0.72f, 0.0f);
    glVertex3f(0.79f, 0.725f, 0.0f);
    glVertex3f(0.79f, 0.61f, 0.0f);
    glVertex3f(0.7f, 0.615f, 0.0f);

    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f);
    glVertex3f(0.76f, 0.67f, 0.0f);
    glVertex3f(0.737f, 0.65f, 0.0f);
    glVertex3f(0.737f, 0.69f, 0.0f);

    glEnd();

    //2nd monitor stand

    glBegin(GL_QUADS);

    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.740f, 0.55f, 0.0f);
    glVertex3f(0.750f, 0.55f, 0.0f);
    glVertex3f(0.750f, 0.50f, 0.0f);
    glVertex3f(0.740f, 0.50f, 0.0f);

    glEnd();

    //2nd monitor stand flat

    glBegin(GL_QUADS);

    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.7f, 0.51f, 0.0f);
    glVertex3f(0.790f, 0.51f, 0.0f);
    glVertex3f(0.790f, 0.50f, 0.0f);
    glVertex3f(0.7f, 0.50f, 0.0f);

    glEnd();

    //Third monitor area

    //3rd monitor border

    glBegin(GL_QUADS);

    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.134f, 0.81f, 0.0f);
    glVertex3f(0.376f, 0.8f, 0.0f);
    glVertex3f(0.376f, 0.55f, 0.0f);
    glVertex3f(0.134f, 0.54f, 0.0f);

    glEnd();

    //3rd monitor display

    glBegin(GL_QUADS);

    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(0.140f, 0.8f, 0.0f);
    glVertex3f(0.370f, 0.79f, 0.0f);
    glVertex3f(0.370f, 0.56f, 0.0f);
    glVertex3f(0.140f, 0.55f, 0.0f);

    glEnd();

    //3rd monitor stand

    glBegin(GL_QUADS);

    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.25f, 0.55f, 0.0f);
    glVertex3f(0.26f, 0.55f, 0.0f);
    glVertex3f(0.26f, 0.50f, 0.0f);
    glVertex3f(0.25f, 0.50f, 0.0f);

    glEnd();

    //3rd monitor stand flat

    glBegin(GL_QUADS);

    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.303f, 0.51f, 0.0f);
    glVertex3f(0.213f, 0.51f, 0.0f);
    glVertex3f(0.213f, 0.50f, 0.0f);
    glVertex3f(0.303f, 0.50f, 0.0f);

    glEnd();

    //Left sound-box

    glBegin(GL_QUADS);

    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.045f, 0.7f, 0.0f);
    glVertex3f(0.12f, 0.7f, 0.0f);
    glVertex3f(0.12f, 0.5f, 0.0f);
    glVertex3f(0.045f, 0.5f, 0.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(0.065f, 0.55f, 0.0f);
    glVertex3f(0.1f, 0.55f, 0.0f);
    glVertex3f(0.1f, 0.53f, 0.0f);
    glVertex3f(0.065f, 0.53f, 0.0f);

    glEnd();

    //Table flat

    rectangleShape(0.11, 1.4, 0.5, 0.47, 0.56, 0.29, 0.09);

    //Table left leg

    rectangleShape(0.15, 0.17, 0.03, 0.5, 0.56, 0.29, 0.09);

    //Table middle leg

    rectangleShape(1.1, 1.12, 0.03, 0.5, 0.56, 0.29, 0.09);

    //Table right leg

    rectangleShape(1.33, 1.35, 0.03, 0.5, 0.56, 0.29, 0.09);

    //CPU flat

    rectangleShape(1.1, 1.33, 0.077, 0.06, 0.56, 0.29, 0.09);

    //CPU body

    rectangleShape(1.165, 1.285, 0.44, 0.09, 0.46, 0.46, 0.46);

    //CPU up side

    rectangleShape(1.175, 1.275, 0.42, 0.27, 0.9, 0.9, 0.9);

    //CPU DVD

    rectangleShape(1.18, 1.27, 0.385, 0.355, 0.49, 0.49, 0.49);

    //USB port 1

    rectangleShape(1.18, 1.195, 0.345, 0.335, 0.45, 0.45, 0.45);

    //USB port 1

    rectangleShape(1.2, 1.216, 0.345, 0.335, 0.45, 0.45, 0.45);

    //CPU left case

    trapezoidShape(1.175, 1.195, 1.215, 1.175, 0.25, 0.25, 0.11, 0.11, 0.9, 0.9, 0.9);

    //CPU right case

    trapezoidShape(1.255, 1.275, 1.275, 1.235, 0.25, 0.25, 0.11, 0.11, 0.9, 0.9, 0.9);

    //CPU left leg

    rectangleShape(1.165, 1.175, 0.077, 0.09, 0.46, 0.46, 0.46);

    //CPU right leg

    rectangleShape(1.275, 1.285, 0.077, 0.09, 0.46, 0.46, 0.46);

    glFlush();
}

void init(void){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.5, 0.0, 1.5, -10.0, 10.0);
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1280, 720);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("My Desktop");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
