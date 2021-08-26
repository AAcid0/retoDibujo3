#include "Latigo.h"
#define elbow 30
#define shoulder 0
#define segColas 10
float timer010;

Latigo::Latigo(){}

void Latigo::dibujarLatigo(int n, float x, float y, float z) {
    glPushMatrix();
    glTranslatef(x, y, z); //movimiento del pivote 0,-6,0
    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
    glTranslatef(0.20, 0.0, 0.0);//movimiento del pivote
    glPushMatrix();
    glScalef(0.5, 0.4, 1.0);
    glutSolidCube(1.5);
    glPopMatrix();
    for (int i = 0; i < n; i++) {
        //glRotatef(timer010 * 360, 0.0, 0.0, 1.0);
        glTranslatef(1.0, 0.0, 0.0);//movimiento del pivote
        if (i % 2 == 0) {
            glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
            glTranslatef(0.25, 0.0, 0.5);//movimiento del pivote
            glPushMatrix();
            glScalef(0.5, 0.4, 1.0);
            glutSolidCube(1.5);
            glPopMatrix();
        }
        else {
            glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
            glTranslatef(0.25, 0.0, 0.5);//movimiento del pivote
            glPushMatrix();
            glScalef(0.5, 0.4, 1.0);
            glutSolidCube(1.5);
            glPopMatrix();
        }
    }
    glPopMatrix();
}