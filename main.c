#include <gl/glut.h>

float x1 = 0.29;
float y1 = 0.55;

float x2 = 0.38;
float y2 = 0.55;

int flag = 0;

void Inicializa(void)
{
     glClearColor(0.0f,0.0f,0.0f,0.0f);
}
void Desenha(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    //Background
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f); 
    glVertex2f(1.0, 1.0); 
    glVertex2f(-1.0, 1.0); 
    glColor3f(0.6f,0.6f,0.6f); 
    glVertex2f(-1.0, -0.6); 
    glVertex2f(1.0, -0.6); 
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.6f,0.6f,0.6f); 
    glVertex2f(1.0, -0.6); 
    glVertex2f(-1.0, -0.6); 
    glColor3f(1.0f,1.0f,1.0f); 
    glVertex2f(-1.0, -1.0); 
    glVertex2f(1.0, -1.0); 
    glEnd();
    
    //Cabeça lado esquerdo
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,1.0f,1.0f); 
    glVertex2f(-0.2, 0.5); 
    glColor3f(0.0f,0.0f,0.0f); 
    glVertex2f(-0.1, 0.65); 
    glColor3f(1.0f,1.0f,1.0f); 
    glVertex2f(0.0, 0.3); 
    glColor3f(0.5f,0.5f,0.5f); 
    glVertex2f(0.0, 0.7); 
    glEnd();
    //Cabeça lado direito
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,1.0f,1.0f); 
    glVertex2f(0.2, 0.5); 
    glColor3f(0.0f,0.0f,0.0f); 
    glVertex2f(0.1, 0.65); 
    glColor3f(1.0f,1.0f,1.0f); 
    glVertex2f(0.0, 0.3); 
    glColor3f(0.5f,0.5f,0.5f); 
    glVertex2f(0.0, 0.7); 
    glEnd();
    //Sorriso
    glLineWidth(3.0);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f,0.0f,0.0f); 
    glVertex2f(-0.035, 0.4);
    glVertex2f(0.03, 0.4); 
    glVertex2f(0.05, 0.42);
    glEnd();
    //Olho Direito
    glLineWidth(7.0);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f,0.0f,0.0f); 
    glVertex2f(0.1, 0.55);
    glVertex2f(0.03, 0.55); 
    glEnd();
    //Olho Esquerdo
    glLineWidth(7.0);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f,0.0f,0.0f); 
    glVertex2f(-0.1, 0.55);
    glVertex2f(-0.03, 0.55); 
    glEnd();
    //Torso lado direito
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f); 
    glVertex2f(0.0, 0.3); 
    glVertex2f(0.08, 0.3); 
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.14, 0.25); 
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.14, -0.1);
    glColor3f(0.5f,0.5f,0.5f); 
    glVertex2f(-0.0, -0.2);
    glEnd();
    //Torso lado esquerdo
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.0, 0.3);
    glColor3f(0.9f,0.9f,0.9f);  
    glVertex2f(-0.08, 0.3); 
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.14, 0.25); 
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.14, -0.1);
    glColor3f(0.5f,0.5f,0.5f); 
    glVertex2f(0.0, -0.2);
    glEnd();
    //Braço lado direito
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f); 
    glVertex2f(0.29, 0.4); 
    glColor3f(0.8f,0.8f,0.8f);
    
    //Mão esquerda que irá acenar
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    
    glVertex2f(0.38, 0.4);
    glColor3f(0.5f,0.5f,0.5f); 
    glVertex2f(0.3, 0.3); 
    glVertex2f(0.14, 0.2); 
    glVertex2f(0.14, 0.25); 
    glEnd();
    //Braço lado esquerdo
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f); 
    glVertex2f(-0.24, 0.05); 
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.24, -0.1);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.33, -0.1); 
    glVertex2f(-0.33, 0.05);
    glColor3f(0.5f,0.5f,0.5f); 
    glVertex2f(-0.27, 0.15); 
    glVertex2f(-0.14, 0.25); 
    glVertex2f(-0.14, 0.2); 
    glEnd();  
    //Perna lado esquerdo 
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.1, -0.4); 
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.08, -0.64);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.27, -0.71); 
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(-0.23, -0.53);
    glColor3f(0.5f,0.5f,0.5f);
    glVertex2f(-0.10, -0.13); 
    
    glVertex2f(-0.05, -0.16); 
    glEnd();
    //Perna lado direito
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.1, -0.4); 
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(0.08, -0.64);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.27, -0.71); 
    glColor3f(0.8f,0.8f,0.8f);
    glVertex2f(0.23, -0.53);
    glColor3f(0.5f,0.5f,0.5f);
    glVertex2f(0.10, -0.13); 
    glVertex2f(0.05, -0.16); 
    glEnd();

    glFlush();
}


void teclado (unsigned char key, int x, int y)
{
    switch(key) 
    {
        case 27: 
            exit(0);
        case 't':
            if (flag==1)
            { 
                x1 = 0.39;
                x2 = 0.48;
                flag = 0;
            }
            else
            {
                x1 = 0.23;
                x2 = 0.32;
                flag = 1;
            }
            glutPostRedisplay();
            break;
    }
}

int main (void)
{
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize(700,700);
   glutInitWindowPosition(300,100);
   glutCreateWindow("Robo 2D");
   glutDisplayFunc(Desenha);
   Inicializa();
   glutKeyboardFunc(teclado);
   glutMainLoop();
}
