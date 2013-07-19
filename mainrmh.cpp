#include <math.h>
#include <stdlib.h>
#include <GL/glut.h>

//Variable untuk manipulasi sudut pandang
static float angle=0.0,ratio;            //Sudut perputaran kamera (terhadap sumbu y)
static float x=-10.0f,y=75.75f,z=250.0f;      //Posisi Kamera
static float lx=0.0f,ly=0.0f,lz=-1.0f;   //Vektor sudut pandang

//Menggambar Tanah               
void alas(){
	glBegin(GL_QUADS);
		glVertex3f(-100.0, 0.0, -100.0);
		glVertex3f(-100.0, 0.0,  100.0);
		glVertex3f( 100.0, 0.0,  100.0);
		glVertex3f( 100.0, 0.0, -100.0);
	glEnd();
     }
      
void jalan(){
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex3f(-65.0, 0.1, -100.0);
		glVertex3f(-65.0, 0.1,  100.0);
		glVertex3f( -55.0, 0.1,  100.0);
		glVertex3f( -55.0, 0.1, -100.0);
	glEnd();
     }
     
void jalan1(){
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex3f(-65.0, 0.1, -100.0);
		glVertex3f(-65.0, 0.1,  70.0);
		glVertex3f( -55.0, 0.1,  70.0);
		glVertex3f( -55.0, 0.1, -100.0);
	glEnd();
     }
     
void jalan2(){
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex3f(-65.0, 0.1, 10.0);
		glVertex3f(-63.4, 0.1,  56.0);
		glVertex3f( -53.4, 0.1,  56.0);
		glVertex3f( -55.0, 0.1, 10.0);
	glEnd();
     }
 
///////////////////////////////HYSTERIA/////////////////////////////////////////
float ert=0.0, yui=0.0;
void apa()
{
    glTranslatef(0,-5,0);
    int i=0;
    for(i=0;i<10;i++){
    glTranslatef(0,1,0);if(i==3){
        glColor3f(0,0,1);
        }
        glColor3f(1,1,0);
    glutWireCube(1);
}}

void yangbiru(){
     if(ert<=60){if(ert<30)ert+=0.25;else ert+=5;
     if(ert==60)yui=60;}
     else if(yui>=0){if(yui>30)yui-=0.25;else yui-=5;
     if(yui==0)ert=0.0;}
    glPushMatrix();
        glTranslatef( 0, -2.5, 0);
        glColor3f(2.3,1,0.4);
        glutSolidCube(2.5);       
    glPopMatrix();
    }
void ga(){
    GLUquadric *quadric = gluNewQuadric();
    glPushMatrix();
        glColor3f(0.5,0.5,0.5);
        glRotatef(90,1,0,0);
        glTranslatef(0,0,-5.5);
        gluCylinder(quadric, 0.1, 0.1, 10, 20, 20);
        glColor3f(0.5,0.5,0.5);
        glTranslatef(0.25,0,0);
        gluCylinder(quadric, 0.1, 0.1, 10, 20, 20);
        glColor3f(0.5,0.5,0.5);
        glTranslatef(-0.5,0,0);
        gluCylinder(quadric, 0.1, 0.1, 10, 20, 20);
        glTranslatef(0.25,0.25,0);
        gluCylinder(quadric, 0.1, 0.1, 10, 20, 20);
        glTranslatef(0.25,-0.5,0);
        gluCylinder(quadric, 0.1, 0.1, 10, 20, 20);
        glTranslatef(-0.5,0.5,0);
        gluCylinder(quadric, 0.1, 0.1, 10, 20, 20);
        glTranslatef(0,-0.5,0);
        gluCylinder(quadric, 0.1, 0.1, 10, 20, 20);
        glTranslatef(0.25,0,0);
        gluCylinder(quadric, 0.1, 0.1, 10, 20, 20); 
        glTranslatef(0.25,0.5,0);
        gluCylinder(quadric, 0.1, 0.1, 10, 20, 20);
    
    glPopMatrix();
}
    
void top(){
     glPushMatrix();
   ga();
   apa();
   
   glPopMatrix();
   }
//////////////////////HYSTERIA//////////////////////////////////////////////////

void rumah() {
     glColor3f(0.5,0.5,0.5);
     //tembok
     glPushMatrix();
     glEnable(GL_COLOR_MATERIAL);
     glColor3f(1.5,1,1);
     glTranslatef(0,4,0);
     glRotatef(-90,0,1,0);
     glScalef(2,1.5,2);
     glutSolidCube(14);
     glDisable(GL_COLOR_MATERIAL);
 
     //pintu
     glPushMatrix();
     glEnable(GL_COLOR_MATERIAL);
     glColor3f(0.5,0.8,0);
     glTranslatef(-5,-3.89,6.96);
     glScalef(4,10,1);
     glutSolidCube(0.6);
     glDisable(GL_COLOR_MATERIAL);
     glPopMatrix();

     //jendela
     glPushMatrix();
     glEnable(GL_COLOR_MATERIAL);
     glColor3f(1.5,0.8,0);
     glTranslatef(3.2,2.4,6.96);
     glScalef(3,3,1);
     glutSolidCube(0.6);
     glDisable(GL_COLOR_MATERIAL);
     glPopMatrix();

    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(5.3,2.4,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(3.2,4.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
    
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(5.3,4.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    //jendela 2
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(-3.4,4.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
    
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(-5.5,4.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(-3.4,2.4,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
    
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(-5.5,2.4,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    //jendela bawah
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(0,0,0);
    glTranslatef(0,-1.8,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
    
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(0,0,0);
    glTranslatef(-2,-1.8,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    glPopMatrix();
    
    //atap
     glPushMatrix();
     glEnable(GL_COLOR_MATERIAL);
     glColor3f(0.8,0,0);
     glRotatef(45,0,1,0);
     glTranslatef(0,15.5,0);
     glScalef(23,7.3,23);
     glutSolidOctahedron();
     glPopMatrix();
     glDisable (GL_TEXTURE_2D);
}

//rumah2
void rumah2() {
     glColor3f(0.5,0.5,0.5);
     //tembok bawah
     glPushMatrix();
     glEnable(GL_COLOR_MATERIAL);
     glColor3f(1,1,1.1);
     glTranslatef(0,3.3,3.5);
     glScalef(2,1.5,2.5);
     glutSolidCube(14);
     glDisable(GL_COLOR_MATERIAL);
 
    //pintu
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(0,0,0);
    glTranslatef(0,-3.89,6.96);
    glScalef(5,14,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    //jendela
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(3.3,-2.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
    
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(5.3,-2.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(3.3,-0.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
    
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(5.3,-0.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    //jendela 2
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(-3.3,-2.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
    
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(-5.3,-2.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
    
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(-3.3,-0.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(-5.3,-0.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
    
    glPopMatrix();
     
    //tembok atas
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1,1,1.1);
    glTranslatef(0,24,0);
    glScalef(2,1.5,2);
    glutSolidCube(14);
    glDisable(GL_COLOR_MATERIAL);
 
    //pintu
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(0,0,0);
    glTranslatef(0,-3.89,6.96);
    glScalef(5,14,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    //jendela
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(3.3,-0.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(5.3,-0.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(3.3,1.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
    
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(5.3,1.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    //jendela bawah
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(-3.3,-0.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
    
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1.5,0.8,0);
    glTranslatef(-5.3,-0.5,6.96);
    glScalef(3,3,1);
    glutSolidCube(0.6);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
/*
//==========================pagar atas kiri=====================================
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1,1,1.1);
    glTranslatef(-6.49,-4.55,10);
    glScalef(1.0,10,1.0);
    glutSolidCube(1);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
         
    //kuncup
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(3,4,0);
    glTranslatef(-6.49,0,10);
    glRotatef(-90,1,0,0);
    glScalef(0.3,0.3,0.1);
    glutSolidCone(5,10,20,100);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
         
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(2,1,1.1);
    glTranslatef(0,-4.6,10);
    glScalef(12,4.5,1.0);
    glutSolidCube(1);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(2,1,1.1);
    glTranslatef(-6.49,-4.6,8);
    glScalef(1.0,4.5,3.0);
    glutSolidCube(1);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
*/
//==============================pagar atas kanan================================
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(1,1,1.1);
    glTranslatef(6.49,-4.55,10);
    glScalef(1.0,10,1.0);
    glDisable(GL_COLOR_MATERIAL);
    glutSolidCube(1);
    glPopMatrix();
         
    //kuncup
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(3,4,0);
    glTranslatef(6.49,0,10);
    glRotatef(-90,1,0,0);
    glScalef(0.3,0.3,0.1);
    glutSolidCone(5,10,20,100);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(2,1,1.1);
    glTranslatef(6.49,-4.6,8);
    glScalef(1.0,4.5,3.0);
    glutSolidCube(1);
    glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

//==============================================================================

    glPopMatrix();
    
    //atap
    glPushMatrix();
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(0.8,0,0);
    glRotatef(45,0,1,0);
    glTranslatef(0,35,0);
    glScalef(23,7.3,23);
    glutSolidOctahedron();
    glPopMatrix();
    glDisable (GL_TEXTURE_2D);
}




void kerucut(float ngisor, float nduwur, float dowo)
{
    float i;
    glPushMatrix();
    glTranslatef(1.0,0.0,ngisor/24);
    glutSolidCone(ngisor,0,32,4);
        for(i=0;i<=dowo;i+=ngisor/24)
        {
        glTranslatef(0.0,0.0,ngisor/24);
        glutSolidTorus(ngisor/4,ngisor-((i*(ngisor-nduwur))/dowo),16,16);
        }
    glTranslatef(0.0,0.0,ngisor/4);
    glutSolidCone(nduwur,0,20,1);
    glColor3f(0.,1.,1.);
    glPopMatrix();
}


void cylinder(float alas,float atas,float tinggi)
{
    float i;
    glPushMatrix();
        glTranslatef(1.0,0.0,-alas/8);
        glutSolidCone(alas,0,32,4);
        for(i=0;i<=tinggi;i+=alas/24)
        {
        glTranslatef(0.0,0.0,alas/24);
        glutSolidTorus(alas/4,alas-((i*(alas-atas))/tinggi),16,16);
        }
        glTranslatef(0.0,0.0,alas/4);
        glutSolidCone(atas,0,20,1);
        glColor3f(1.,0.,0.);
    glPopMatrix();
}

void blok(float tebal,int ratiol,int ratiop)
{
    float i,j;
    glPushMatrix();
        for(i=0;i<ratiop;i++)
        {
        glTranslatef(-(ratiol+1)*tebal/2,0.0,0.0);
            for(j=0;j<ratiol;j++)
            {
            glTranslatef(tebal,0.0,0.0);
            glutSolidCube(tebal);
            }
        glTranslatef(-(ratiol-1)*tebal/2,0.0,tebal);
        }
    glPopMatrix();
}

//menggambar mobil polisi
void mobilpolisi() {
     glColor3f(0.0,0.0,9.0);
     glPushMatrix();//body
     //glpushmatrix();
     glColor3f(0.0,0.0,9.0);
     blok(10, 3, 2);

    glTranslatef(0, 9, 0);
    blok(10, 3, 2);
    glTranslatef(10, -10,0);
    blok(10, 5, 2);
    glRotatef(-35, 0, 0, 15);
    glTranslatef(0, 7,0);
    blok(10, 2, 2);
    glTranslatef(2, 4.9,-2.5);
    glColor3f(0.9,0.9,0.9);// warna kaca
    blok(0.5, 20, 31);

    glRotatef(180, 45, -45, 0);
    
    glPopMatrix();

    glPushMatrix();//roda
    glColor3f(0.0,0.0,0.0);
    glTranslatef(20, -8,-7);
    cylinder(5, 5,3);
    
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-20, 8,7);
    glTranslatef(-5, -8,-7);
    cylinder(5, 5,3);
    
    glColor3f(0.0,0.0,0.0);
    glTranslatef(5, 8,7);
    glRotatef(180,0,180,0);
    glTranslatef(3,-8,-17);
    cylinder(5, 5,3);
    
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-3,8,17);
    glTranslatef(-22,-8,-17);
    cylinder(5, 5,3);
    
    glColor3f(1.0,1.0,1.0);
    
    glRotatef(90,1,0,0);
    glTranslatef(8, 2.5,-15);
    blok(2, 4, 5);

    glRotatef(90,0,1,0);
    glTranslatef(0,-0.2,7);
    blok(2, 4, 8);
    
    glRotatef(0,0,0,0);
    glTranslatef(0,19.2,0);
    blok(2, 4, 8);
    
    glRotatef(90,0,1,0);
    glTranslatef(7, 0,-8);
    blok(2, 4, 5);
    
    glColor3f(9.9,9.9,0.0);//lampu
    glRotatef(90,0,1,0);
    glTranslatef(0,-3,20);
    cylinder(2, 2,3);
    
    glColor3f(9.9,9.9,0.0);//lampu
    glRotatef(0,0,0,0);
    glTranslatef(0,-12,0);
    cylinder(2, 2,3);
    
    glColor3f(0.0,0.0,0.0);//knalpot
    glRotatef(0,0,0,0);
    glTranslatef(0,0,-52);
    cylinder(1, 1,3);
    
    glColor3f(1.0,1.0,1.0);
    glRotatef(90,1,0,0);
    glTranslatef(-8,3.5,-12);
    blok(2, 4, 8);

    glColor3f(9.0,0.0,0.0);//lampu atas
    glRotatef(0,0,0,0);
    glTranslatef(-8,28,0);
    cylinder(1, 1,12);


    glPopMatrix();
    glDisable (GL_TEXTURE_2D);
} 

//menggambar mobil biasa
void mobil() {
     
     glPushMatrix();//body
     //glpushmatrix();
     
     blok(10, 3, 2);

    glTranslatef(0, 9, 0);
    blok(10, 3, 2);
    glTranslatef(10, -10,0);
    blok(10, 5, 2);
    glRotatef(-35, 0, 0, 15);
    glTranslatef(0, 7,0);
    blok(10, 2, 2);
    glTranslatef(2, 4.9,-2.5);
    glColor3f(0.9,0.9,0.9);// warna kaca
    blok(0.5, 20, 31);

    glRotatef(180, 45, -45, 0);
    
    glPopMatrix();

    glPushMatrix();//roda
    glColor3f(0.0,0.0,0.0);
    glTranslatef(20, -8,-7);
    cylinder(5, 5,3);
    
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-20, 8,7);
    glTranslatef(-5, -8,-7);
    cylinder(5, 5,3);
    
    glColor3f(0.0,0.0,0.0);
    glTranslatef(5, 8,7);
    glRotatef(180,0,180,0);
    glTranslatef(3,-8,-17);
    cylinder(5, 5,3);
    
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-3,8,17);
    glTranslatef(-22,-8,-17);
    cylinder(5, 5,3);
    
    glColor3f(1.0,1.0,1.0);
    
    glRotatef(90,1,0,0);
    glTranslatef(8, 2.5,-15);
    blok(2, 4, 5);

    glRotatef(90,0,1,0);
    glTranslatef(0,-0.2,7);
    blok(2, 4, 8);
    
    glRotatef(0,0,0,0);
    glTranslatef(0,19.2,0);
    blok(2, 4, 8);
    
    glRotatef(90,0,1,0);
    glTranslatef(7, 0,-8);
    blok(2, 4, 5);
    
    glColor3f(9.9,9.9,0.0);//lampu
    glRotatef(90,0,1,0);
    glTranslatef(0,-3,20);
    cylinder(2, 2,3);
    
    glColor3f(9.9,9.9,0.0);//lampu
    glRotatef(0,0,0,0);
    glTranslatef(0,-12,0);
    cylinder(2, 2,3);
    
    glColor3f(0.0,0.0,0.0);//knalpot
    glRotatef(0,0,0,0);
    glTranslatef(0,0,-52);
    cylinder(1, 1,3);
    
    glColor3f(1.0,1.0,1.0);
    glRotatef(90,1,0,0);
    glTranslatef(-8,3.5,-12);
    blok(2, 4, 8);

    glPopMatrix();
    glDisable (GL_TEXTURE_2D);
} 

//menggambar pagar 
void pagar () {
     glColor3f(0.5,0.7,0.5);
//=================================pagar 1======================================
     glPushMatrix();
                    glTranslatef(-20,-2.5,7);
                    glScalef(1.0,5.3,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(-20,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
     glPushMatrix();
                    glTranslatef(-17,-3.0,7);
                    glScalef(5.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
//=================================pagar 2======================================
     glPushMatrix();
                    glTranslatef(-14,-2.5,7);
                    glScalef(1.0,5.3,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(-14,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
     glPushMatrix();
                    glTranslatef(-11,-3.0,7);
                    glScalef(5.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
//==================================pagar 3=====================================
     glPushMatrix();
                    glTranslatef(-8,-2.5,7);
                    glScalef(1.0,5.4,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(-8,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
     glPushMatrix();
                    glTranslatef(-5,-3.0,7);
                    glScalef(5.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //==================================pagar 4=====================================
     glPushMatrix();
                    glTranslatef(-2,-2.5,7);
                    glScalef(1.0,5.4,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(-2,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
     glPushMatrix();
                    glTranslatef(1,-3.0,7);
                    glScalef(5.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //==================================pagar 5=====================================
     glPushMatrix();
                    glTranslatef(4,-2.5,7);
                    glScalef(1.0,5.4,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(4,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
     glPushMatrix();
                    glTranslatef(7,-3.0,7);
                    glScalef(13.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //==================================pagar 6=====================================
     glPushMatrix();
                    glTranslatef(13.85,-2.5,7);
                    glScalef(1.0,5.4,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(13.85,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
}

//menggambar pagar 2
void pagar2 () {
     glColor3f(0.5,0.7,0.5);
//=================================pagar 1======================================
     glPushMatrix();
                    glTranslatef(-20,-2.5,7);
                    glScalef(1.0,5.3,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(-20,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
     glPushMatrix();
                    glTranslatef(-14,-3.0,7);
                    glScalef(13.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
//=================================pagar 2======================================
     glPushMatrix();
                    glTranslatef(-8,-2.5,7);
                    glScalef(1.0,5.3,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(-8,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
     glPushMatrix();
                    glTranslatef(-5,-3.0,7);
                    glScalef(5.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
//==================================pagar 3=====================================
     glPushMatrix();
                    glTranslatef(-2,-2.5,7);
                    glScalef(1.0,5.4,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(-2,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
     glPushMatrix();
                    glTranslatef(1,-3.0,7);
                    glScalef(5.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //==================================pagar 4=====================================
     glPushMatrix();
                    glTranslatef(4,-2.5,7);
                    glScalef(1.0,5.4,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(4,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
     glPushMatrix();
                    glTranslatef(7,-3.0,7);
                    glScalef(5.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //==================================pagar 5================================
     glPushMatrix();
                    glTranslatef(10,-2.5,7);
                    glScalef(1.0,5.4,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(10,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
     glPushMatrix();
                    glTranslatef(13,-3.0,7);
                    glScalef(5.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //==================================pagar 6================================
     glPushMatrix();
                    glTranslatef(16,-2.5,7);
                    glScalef(1.0,5.4,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(16,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
      glPushMatrix();
                    glTranslatef(19,-3.0,7);
                    glScalef(5.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //==================================pagar 7================================
     glPushMatrix();
                    glTranslatef(22,-2.5,7);
                    glScalef(1.0,5.4,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(22,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
      glPushMatrix();
                    glTranslatef(25,-3.0,7);
                    glScalef(5.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //==================================pagar 8================================
     glPushMatrix();
                    glTranslatef(28,-2.5,7);
                    glScalef(1.0,5.4,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(28,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
      glPushMatrix();
                    glTranslatef(31,-3.0,7);
                    glScalef(5.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //==================================pagar 9================================
     glPushMatrix();
                    glTranslatef(34,-2.5,7);
                    glScalef(1.0,5.4,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(34,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
     
      glPushMatrix();
                    glTranslatef(37,-3.0,7);
                    glScalef(13.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //==================================pagar 10================================
     glPushMatrix();
                    glTranslatef(44,-2.5,7);
                    glScalef(1.0,5.4,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(44,0,7);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
}


//menggambar pagar panjang belakang rumah
void pagar3() {
     glPushMatrix();
                    glRotatef(90,0,1,0);
                    glTranslatef(39.5,-3.0,7);
                    glScalef(160.3,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
}


//menggambar pagar depan tanahkosong
void pagar4() {
     glColor3f(0.5,0.7,0.5);
     
//=================================pagar 1======================================
     glPushMatrix();
                    glTranslatef(-15.5,-3.0,5);
                    glScalef(10.0,4.5,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
//=================================pagar 2======================================
     glPushMatrix();
                    glTranslatef(-10,-2.5,5);
                    glScalef(1.0,5.3,1.0);
                    glutSolidCube(1);
     glPopMatrix();
     
     //kuncup
     glPushMatrix();
                    glTranslatef(-10,0,5);
                    glRotatef(-90,1,0,0);
                    glScalef(0.3,0.3,0.1);
                    glutSolidCone(5,10,20,100);
     glPopMatrix();
}


void renderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//alas
	
    glPushMatrix();
                   glColor3f(1,1,1.1);
                   alas();
    glPopMatrix();
    
    //jalan 1
    glPushMatrix();
                   jalan();
    glPopMatrix();
    
    //jalan 2
    glPushMatrix();
                   glTranslatef(0,0,7);
                   glRotatef(90,0,1,0); 
                   jalan();
    glPopMatrix();
    
    //jalan 3
    glPushMatrix();
                   glTranslatef(75,0,0);
                   jalan1();
    glPopMatrix();
    
    //jalan 4
    glPushMatrix();
                   glTranslatef(120.2,0,0);
                   jalan1();
    glPopMatrix();
    
    //jalan 5
    glPushMatrix();
                   glTranslatef(0,0,-70);
                   glRotatef(90,0,1,0); 
                   jalan2();
    glPopMatrix();
    
    
   
//==============================pagar TEMPAT PARKIR================================
    //pagar PAGAR TEMPAT PARKIR 1
    
    glPushMatrix();
                   glTranslatef(-79.4,5.2,54.5);
                   pagar();
    glPopMatrix();
   
    //pagar TEMPAT PARKIR 2
    glPushMatrix();
                   glTranslatef(-79.4,5.2,-106.5);
                   pagar();
    glPopMatrix();
    
    
    
//=============================pagar rumah tengah===============================
    
    //pagar rumah 1
    glPushMatrix();
                   glTranslatef(-34.5,5.2,54.5);
                   pagar2();
    glPopMatrix();
    
    //pagar rumah 2
    glPushMatrix();
                   glTranslatef(-34.5,5.2,33.4);
                   pagar2();
    glPopMatrix();
    
    //pagar rumah 3
    glPushMatrix();
                   glTranslatef(-34.5,5.2,12.9);
                   pagar2();
    glPopMatrix();
    
    //pagar rumah 4
    glPushMatrix();
                   glTranslatef(-34.5,5.2,-7.4);
                   pagar2();
    glPopMatrix();
    
    //pagar rumah 5
    glPushMatrix();
                   glTranslatef(-34.5,5.2,-27.0);
                   pagar2();
    glPopMatrix();
    
    //pagar rumah 6
    glPushMatrix();
                   glTranslatef(-34.5,5.2,-47.0);
                   pagar2();
    glPopMatrix();
    
    //pagar rumah 7
    glPushMatrix();
                   glTranslatef(-34.5,5.2,-67.0);
                   pagar2();
    glPopMatrix();
    
    //pagar rumah 8
    glPushMatrix();
                   glTranslatef(-34.5,5.2,-87.0);
                   pagar2();
    glPopMatrix();
    
    //pagar rumah 9
    glPushMatrix();
                   glTranslatef(-34.5,5.2,-106.5);
                   pagar2();
    glPopMatrix();
    
    //tembok belakang rumah
    glPushMatrix();
                   glTranslatef(-28,5.2,20.5); 
                   pagar3();
    glPopMatrix();

//===================================mobil======================================
   glPushMatrix();
                  glTranslatef(-75,2.3,50);
                  glRotatef(-180,0,1,0);
                  
                  glScalef(0.15,0.15,0.15);
                  mobilpolisi();       
   glPopMatrix();
   
   glPushMatrix();
                  glColor3f(0.0,3.0,9.0);
                  glTranslatef(-75,2.3,30);
                  glRotatef(-180,0,1,0);
                  glScalef(0.15,0.15,0.15);
                  mobil();
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-73,2.3,6);
                  glRotatef(-180,0,1,0);
                  
                  glScalef(0.15,0.15,0.15);
                  mobilpolisi();
   glPopMatrix();
   
   glPushMatrix();
                  glColor3f(1.0,0.0,0.0);
                  glTranslatef(-73,2.3,16);
                  glRotatef(-180,0,1,0);
                  glScalef(0.15,0.15,0.15);
                  mobil();
   glPopMatrix();
   
   //mobil rumah tingkat
   glPushMatrix();
                  glColor3f(2,1,1.1);
                  glTranslatef(-73,2.3,-53);
                  glRotatef(-180,0,1,0);
                  glScalef(0.15,0.15,0.15);
                  mobil();
   glPopMatrix();
   
   glPushMatrix();
                  glColor3f(1.0,1.0,3.0);
                  glTranslatef(-75,2.3,-90);
                  glRotatef(-180,0,1,0);
                  
                  glScalef(0.15,0.15,0.15);
                  mobil();       
   glPopMatrix();


//========================rumah bagian tengah hadap kiri========================
   //rumah tengah
   glPushMatrix();
                  glTranslatef(-30.5,3.5,30);
                  glRotatef(0,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-30.5,3.5,10);
                  glRotatef(0,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-30.5,3.5,-10);
                  glRotatef(0,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-30.5,3.5,-50);
                  glRotatef(0,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-30.5,3.5,-90);
                  glRotatef(0,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   //rumahtingkat
   glPushMatrix();
                  glTranslatef(-30,3.5,50);
                  glRotatef(-90,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah2();            
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-30,3.5,-30);
                  glRotatef(-90,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah2();            
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-30,3.5,-70);
                  glRotatef(-90,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah2();            
   glPopMatrix();
   
   
//===================rumah bagian tengah hadap kanan============================
    //rumah
    glPushMatrix();
                  glTranslatef(-11.5,3.5,50);
                  glRotatef(180,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                  
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-11.5,3.5,30);
                  glRotatef(180,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-11.5,3.5,10);
                  glRotatef(180,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-11.5,3.5,-10);
                  glRotatef(180,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-11.5,3.5,-30);
                  glRotatef(180,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-11.5,3.5,-50);
                  glRotatef(180,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-11.5,3.5,-70);
                  glRotatef(180,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   //rumahtingkat
   glPushMatrix();
                  glTranslatef(-11.5,3.5,-90);
                  glRotatef(90,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah2();            
   glPopMatrix();
   
//===================================mobil======================================
   glPushMatrix();
                  glColor3f(2.0,1.0,3.0);
                  glTranslatef(8,2.3,-93);
                  glRotatef(-180,0,1,0);
                  
                  glScalef(0.15,0.15,0.15);
                  mobil();       
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(6,2.3,48);
                  glRotatef(-180,0,1,0);
                  
                  glScalef(0.15,0.15,0.15);
                  mobilpolisi();       
   glPopMatrix();
   
   
//========================rumah bagian kanan====================================
   //rumah tengah
   glPushMatrix();
                  glTranslatef(92.5,3.5,30);
                  glRotatef(0,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(92.5,3.5,10);
                  glRotatef(0,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(92.5,3.5,-10);
                  glRotatef(0,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(92.5,3.5,-50);
                  glRotatef(0,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(92.5,3.5,-90);
                  glRotatef(0,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   //rumahtingkat
   glPushMatrix();
                  glTranslatef(92,3.5,50);
                  glRotatef(-90,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah2();            
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(92,3.5,-30);
                  glRotatef(-90,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah2();            
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(92,3.5,-70);
                  glRotatef(-90,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah2();            
   glPopMatrix();
   
//==============================pagar rumah kanan================================
    //pagar rumah 1 kiri
    glPushMatrix();
                   glTranslatef(85.7,5.2,54.5);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 2 kiri
    glPushMatrix();
                   glTranslatef(85.7,5.2,33.4);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 3 kiri
    glPushMatrix();
                   glTranslatef(85.7,5.2,12.9);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 4 kiri
    glPushMatrix();
                   glTranslatef(85.7,5.2,-7.4);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 5 kiri
    glPushMatrix();
                   glTranslatef(85.7,5.2,-27.0);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 6 kiri
    glPushMatrix();
                   glTranslatef(85.7,5.2,-47.0);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 7 kiri
    glPushMatrix();
                   glTranslatef(85.7,5.2,-67.0);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 8 kiri
    glPushMatrix();
                   glTranslatef(85.7,5.2,-87.0);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 8 kiri
    glPushMatrix();
                   glTranslatef(85.7,5.2,-106.5);
                   pagar();
    glPopMatrix();
    
//===========================tembok taman 2=====================================
    //tembok samping
    glPushMatrix();
                   glTranslatef(16.7,5.2,-36.8);
                   glScalef(0.5,1.0,0.528); 
                   pagar3();
    glPopMatrix();
    
    glPushMatrix();
                   glTranslatef(51.5,5.2,-37.7);
                   glScalef(0.5,1.0,0.52); 
                   pagar3();
    glPopMatrix();
    
    //tembok depan
    glPushMatrix();
                   glTranslatef(30.9,5.2,-12.45);
                   glRotatef(92,0,1,0);
                   glScalef(0.5,1.0,0.09); 
                   pagar3();
    glPopMatrix();
    
    glPushMatrix();
                   glTranslatef(51.4,5.2,-13.18);
                   glRotatef(92,0,1,0);
                   glScalef(0.5,1.0,0.09); 
                   pagar3();
    glPopMatrix();
    

    
    
//==========================rumah bagian depan===================================  
    //rumah
   glPushMatrix();
                  glTranslatef(-43.5,3.5,92.5);
                  glRotatef(-90,0,1,0);
                  glScalef(0.5,0.5,0.5);
                  rumah();               
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(-22.5,3.5,92.5);
                  glRotatef(-90,0,1,0);
                  glScalef(0.5,0.5,0.5);
                  rumah();                
   glPopMatrix();
   
   //rumahtingkat
   glPushMatrix();
                  glTranslatef(-1.5,3.5,92.5);
                  glRotatef(180,0,1,0);
                  glScalef(0.5,0.5,0.5);
                  rumah2();                  
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(20.5,3.5,92.5);
                  glRotatef(-90,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(41.5,3.5,92.5);
                  glRotatef(-90,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah();                 
   glPopMatrix();
   
   //rumahtingkat
   glPushMatrix();
                  glTranslatef(62.5,3.5,92.5);
                  glRotatef(180,0,1,0);
                  
                  glScalef(0.5,0.5,0.5);
                  rumah2();                  
   glPopMatrix();
   
   glPushMatrix();
                  glTranslatef(86.5,3.5,92.5);
                  glRotatef(180,0,1,0);
                  
                  glScalef(0.7,0.5,0.5);
                  rumah2();                  
   glPopMatrix();
   
   
//==============================pagar rumah depan================================
    //pagar rumah 1 depan
    glPushMatrix();
                   glTranslatef(-47.5,5.2,88.5);
                   glRotatef(-90,0,1,0);
                   glScalef(0.8,1.0,1.0);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 2 depan
    glPushMatrix();
                   glTranslatef(-26.5,5.2,88.5);
                   glRotatef(-90,0,1,0);
                   glScalef(0.8,1.0,1.0);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 3 depan
    glPushMatrix();
                   glTranslatef(-5.5,5.2,88.5);
                   glRotatef(-90,0,1,0);
                   glScalef(0.8,1.0,1.0);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 4 depan
    glPushMatrix();
                   glTranslatef(16.5,5.2,88.5);
                   glRotatef(-90,0,1,0);
                   glScalef(0.8,1.0,1.0);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 5 depan
    glPushMatrix();
                   glTranslatef(37.5,5.2,88.5);
                   glRotatef(-90,0,1,0);
                   glScalef(0.8,1.0,1.0);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 6 depan
    glPushMatrix();
                   glTranslatef(58.5,5.2,88.5);
                   glRotatef(-90,0,1,0);
                   glScalef(0.8,1.0,1.0);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 7 depan
    glPushMatrix();
                   glTranslatef(79.5,5.2,88.5);
                   glRotatef(-90,0,1,0);
                   glScalef(0.8,1.0,1.0);
                   pagar();
    glPopMatrix();
    
    //pagar rumah 8 depan
    glPushMatrix();
                   glTranslatef(106.5,5.2,88.5);
                   glRotatef(-90,0,1,0);
                   glScalef(0.8,1.0,1.0);
                   pagar();
    glPopMatrix();
    
    

   //hysteria
   glPushMatrix();
                  
                  glTranslatef(40,13.5,-80);
                  glScalef(3,3,3);
                  glPushMatrix();
                  if(ert<60){
                  glTranslatef( 0, ert/10, 0);}
                  else {glTranslatef(0, yui/10, 0);}
                  yangbiru();
                  glPopMatrix();
                  top();
   glPopMatrix();
   
    
   glutSwapBuffers();
}


void changeSize(int w, int h) {
	if(h == 0)
		h = 1;
	float ratio = 1.0* w / h;
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity();           
	
	glViewport(0, 0, w, h);

	gluPerspective(45,ratio,1,1000); 
                                  
	glMatrixMode(GL_MODELVIEW);      
	glLoadIdentity();                
	
    gluLookAt(x     , y    , z, 
              x + lx,y + ly,z + lz,
		      0.0f  ,1.0f  ,0.0f);

}

void orientMe(float ang) {

	lx = sin(ang);
	lz = -cos(ang);
	glLoadIdentity();
	gluLookAt(x, y, z, 
		      x + lx,y + ly,z + lz,
			  0.0f,1.0f,0.0f);
}

void moveMeFlat(int direction) {
	x = x + direction*(lx)*0.1;
	z = z + direction*(lz)*0.1;

	glLoadIdentity();
	gluLookAt(x, y, z, 
		      x + lx,y + ly,z + lz,
			  0.0f,1.0f,0.0f);
}

void inputKey(int key, int x, int y) {

	switch (key) {
		case GLUT_KEY_LEFT : 
			angle -= 0.15f;
			orientMe(angle);break;
		case GLUT_KEY_RIGHT : 
			angle +=0.15f;
			orientMe(angle);break;
		case GLUT_KEY_UP :
			     moveMeFlat(100);break;
		case GLUT_KEY_DOWN :
			     moveMeFlat(-100);break;
	}
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };


void init()
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glOrtho(-12,12,-6,6,-35,35);
    glEnable(GL_DEPTH_TEST);
    glShadeModel (GL_SMOOTH);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    gluPerspective(80.0,2.2, 1.0, 20.0);
    glMatrixMode (GL_MODELVIEW);  
    }


int main(int argc, char **argv) {
     glutInit(&argc, argv);
     glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
     init();
     glutInitWindowPosition(50,50);
	 glutInitWindowSize(840,560);
	 glutCreateWindow("Komplek Perumahan Nalungun BY Kelompok 4"); 
     glClearColor( 0.1, 0.5, 1, 0);
     glutDisplayFunc(renderScene);
     glutIdleFunc(renderScene);
     glutReshapeFunc(changeSize);
     glutSpecialFunc(inputKey);
     //Mengaktifkan depth testing
     glEnable(GL_DEPTH_TEST);	 
    //Mengatur Pencahayaan
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

 	 glutMainLoop();

}
