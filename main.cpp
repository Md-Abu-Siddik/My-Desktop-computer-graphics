#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

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

    glBegin(GL_QUADS);

    glColor3f(0.56, 0.29, 0.09);
    glVertex3f(0.02f, 0.5f, 0.0f);
    glVertex3f(0.98f, 0.5f, 0.0f);
    glVertex3f(0.98f, 0.48f, 0.0f);
    glVertex3f(0.02f, 0.48f, 0.0f);

    glEnd();

    //Table left leg

    glBegin(GL_QUADS);

    glColor3f(0.56, 0.29, 0.09);
    glVertex3f(0.05f, 0.5f, 0.0f);
    glVertex3f(0.06f, 0.5f, 0.0f);
    glVertex3f(0.06f, 0.05f, 0.0f);
    glVertex3f(0.05f, 0.05f, 0.0f);

    glEnd();

    //Table middle leg

    glBegin(GL_QUADS);

    glColor3f(0.56, 0.29, 0.09);
    glVertex3f(0.75f, 0.5f, 0.0f);
    glVertex3f(0.76f, 0.5f, 0.0f);
    glVertex3f(0.76f, 0.05f, 0.0f);
    glVertex3f(0.75f, 0.05f, 0.0f);

    glEnd();

    //Table right leg

    glBegin(GL_QUADS);

    glColor3f(0.56, 0.29, 0.09);
    glVertex3f(0.94f, 0.5f, 0.0f);
    glVertex3f(0.95f, 0.5f, 0.0f);
    glVertex3f(0.95f, 0.05f, 0.0f);
    glVertex3f(0.94f, 0.05f, 0.0f);

    glEnd();

    //CPU flat

    glBegin(GL_QUADS);

    glVertex3f(0.75f, 0.077f, 0.0f);
    glVertex3f(0.95f, 0.077, 0.0f);
    glVertex3f(0.95f, 0.06f, 0.0f);
    glVertex3f(0.76f, 0.06f, 0.0f);

    glEnd();

    //CPU body

    glBegin(GL_QUADS);

    glColor3f(0.49, 0.49, 0.49);
    glVertex3f(0.79f, 0.44f, 0.0f);
    glVertex3f(0.91f, 0.44, 0.0f);
    glVertex3f(0.91f, 0.09f, 0.0f);
    glVertex3f(0.79f, 0.09f, 0.0f);

    glEnd();

    //CPU left leg

    glBegin(GL_QUADS);

    glColor3f(0.49, 0.49, 0.49);
    glVertex3f(0.79f, 0.077f, 0.0f);
    glVertex3f(0.80f, 0.077f, 0.0f);
    glVertex3f(0.80f, 0.09f, 0.0f);
    glVertex3f(0.79f, 0.09f, 0.0f);

    glEnd();

    //CPU right leg

    glBegin(GL_QUADS);

    glColor3f(0.49, 0.49, 0.49);
    glVertex3f(0.9f, 0.077f, 0.0f);
    glVertex3f(0.91f, 0.077f, 0.0f);
    glVertex3f(0.91f, 0.09f, 0.0f);
    glVertex3f(0.9f, 0.09f, 0.0f);

    glEnd();

    //CPU up side

    glBegin(GL_QUADS);

    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(0.8f, 0.42f, 0.0f);
    glVertex3f(0.9f, 0.42, 0.0f);
    glVertex3f(0.9f, 0.27f, 0.0f);
    glVertex3f(0.8f, 0.27f, 0.0f);

    glEnd();

    //CPU DVD

    glBegin(GL_QUADS);

    glColor3f(0.49, 0.49, 0.49);
    glVertex3f(0.81f, 0.38f, 0.0f);
    glVertex3f(0.89f, 0.38, 0.0f);
    glVertex3f(0.89f, 0.35f, 0.0f);
    glVertex3f(0.81f, 0.35f, 0.0f);

    glEnd();

    //CPU left case

    glBegin(GL_QUADS);

    glColor3f(0.66, 0.66, 0.66);
    glVertex3f(0.80f, 0.25f, 0.0f);
    glVertex3f(0.82f, 0.25, 0.0f);
    glVertex3f(0.84f, 0.11f, 0.0f);
    glVertex3f(0.80f, 0.11f, 0.0f);

    glEnd();

    //CPU right case

    glBegin(GL_QUADS);

    glColor3f(0.66, 0.66, 0.66);
    glVertex3f(0.88f, 0.25f, 0.0f);
    glVertex3f(0.9f, 0.25, 0.0f);
    glVertex3f(0.9f, 0.11f, 0.0f);
    glVertex3f(0.86f, 0.11f, 0.0f);

    glEnd();

    glFlush();
}

void init(void){
    //glClearColor(5.0f / 255.0f, 89.0f / 255.0f, 69.0f / 255.0f, 1.0f);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
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
