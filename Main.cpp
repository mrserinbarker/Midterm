// Main.cpp
#include "stdafx.h"
#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "H_win.cpp"   // If V is the winner
//#include "H_win.cpp"  // If H is hte winner

bool sound = false;
using namespace std;

void display(void);
void idle(void);
int last_time = 0;
int Current_frame = 1;

void main(int argc, char** argv) {
    glutInit(&argc, argv);   //initialize GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);  //set display mode
    glutInitWindowSize(800,800);  //set display window width & height 
    //glutInitWindowPosition(50,50);  //set top-left display window width & height
    glutCreateWindow("Midterm");  
    glutDisplayFunc(display);  //set graphics to display window
    gluOrtho2D(0, 500, 0, 500);
    last_time = timeGetTime();
    glutMainLoop();  
}

void ComposeFrame() {
    if ((timeGetTime() - last_time) > 1000) {
        last_time = timeGetTime(); 

        if (++Current_frame > 2) 
            Current_frame = 1;
    }    
    glutPostRedisplay();
}

void playSound(string fname) {
    wstring fname1;
    fname1.assign(fname.begin(), fname.end());
    LPCTSTR fileName = fname1.c_str();
    PlaySound(fileName, NULL, SND_ASYNC);
}

void display(void) {
    glClearColor(0.2,0.2,0.2,0.0); 
    glClear(GL_COLOR_BUFFER_BIT); 
    ComposeFrame();
   
    switch(Current_frame) {
    case 1: frame1(); 
		glutFullScreen ( );   //Full Screen
		break;
    case 2: frame2(); 
		glutFullScreen ( );   //Full Screen
		break;	
    }

    if (!sound) {
		PlaySound(L"win.wav", NULL, SND_ASYNC);
        sound = true;
	}
    glutSwapBuffers();	
}

