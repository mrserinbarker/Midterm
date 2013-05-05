// H_win.cpp
#include "stdafx.h"
#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <stdio.h>
#include <stdlib.h>

inline void frame1() {
	// H is the winner
	glBegin(GL_QUADS);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(20, 460);
        glVertex2i(45, 460);
	glColor3f(1.0,1.0,1.0);
        glVertex2i(45, 360);
        glVertex2i(20, 360);

	glColor3f(0.0,0.75,0.75);
        glVertex2i(100, 460);
        glVertex2i(75, 460);
	glColor3f(1.0,1.0,1.0);
        glVertex2i(75, 360);
        glVertex2i(100, 360);

	glColor3f(0.0,0.75,0.75);
		glVertex2i(45, 425);
        glVertex2i(75, 425);
	glColor3f(1.0,1.0,1.0);
        glVertex2i(75, 395);
        glVertex2i(45, 395);
	glEnd();

	// Letter W (WIN)
	glColor3f(0.0, 0.75, 0.75);
    glBegin(GL_QUADS);
        glVertex2i(120, 410);
        glVertex2i(150, 410);
        glVertex2i(160, 380);
        glVertex2i(140, 360);

		glVertex2i(220, 410);
        glVertex2i(190, 410);
        glVertex2i(180, 380);
        glVertex2i(200, 360);
    glEnd();

	glBegin(GL_TRIANGLES);
        glVertex2i(170, 410);
        glVertex2i(140, 360);
        glVertex2i(200, 360);
	glEnd();

	// Letter I (WIN)
	glBegin(GL_QUADS);
        glVertex2i(230, 410);
        glVertex2i(250, 410);
        glVertex2i(250, 360);
        glVertex2i(230, 360);
	glEnd();

	// Letter N (WIN)
	glBegin(GL_QUADS);
        glVertex2i(260, 410);
        glVertex2i(280, 410);
        glVertex2i(280, 360);
        glVertex2i(260, 360);

		glVertex2i(260, 410);
        glVertex2i(280, 410);
        glVertex2i(320, 360);
        glVertex2i(300, 360);

		glVertex2i(320, 410);
        glVertex2i(300, 410);
        glVertex2i(300, 360);
        glVertex2i(320, 360);
	glEnd();

	// sun
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_QUADS);
        glVertex2i(400, 430);
        glVertex2i(430, 400);
        glVertex2i(400, 370);
        glVertex2i(370, 400);
    glEnd();

    // sun light
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINES);
        glVertex2i(330, 400);
        glVertex2i(360, 400);
        glVertex2i(400, 470);
        glVertex2i(400, 440);
        glVertex2i(440, 400);
        glVertex2i(470, 400);
        glVertex2i(400, 360);
        glVertex2i(400, 330);
    glEnd();

    // hair top
    glColor3f(0.0,0.75,0.5);
    glBegin(GL_QUADS);
        glVertex2i(170, 320);
        glVertex2i(250, 350);
        glVertex2i(250, 300);
        glVertex2i(170, 300);

        glVertex2i(250, 350);
        glVertex2i(330, 320);
        glVertex2i(330, 300);
        glVertex2i(250, 300);
    glEnd();

    //hair main
    glColor3f(0.0,0.75,0.5);
    glBegin(GL_TRIANGLES);
        glVertex2i(170, 300);
        glVertex2i(190, 300);
        glVertex2i(180, 240);

        glVertex2i(190, 300);
        glVertex2i(230, 300);
        glVertex2i(210, 230);

        glVertex2i(230, 300);
        glVertex2i(270, 300);
        glVertex2i(250, 250);

        glVertex2i(270, 300);
        glVertex2i(310, 300);
        glVertex2i(290, 230);

        glVertex2i(310, 300);
        glVertex2i(330, 300);
        glVertex2i(320, 240);
    glEnd();

    // hair sides
    glColor3f(0.0,0.5,0.5);
    glBegin(GL_QUADS);
        glVertex2i(182, 250);
        glVertex2i(190, 300);
        glVertex2i(204, 250);
        glVertex2i(210, 180);

        glVertex2i(296, 250);
        glVertex2i(310, 300);
        glVertex2i(318, 250);
        glVertex2i(290, 180);
    glEnd();

    // face
    glColor3f(0.8,0.7,0.5);
    glBegin(GL_QUADS);
        glVertex2i(205, 230);
        glVertex2i(250, 230);
        glVertex2i(250, 180);
        glVertex2i(208, 200);

        glVertex2i(205, 230);
        glVertex2i(295, 230);
        glVertex2i(292, 200);
        glVertex2i(250, 180);

        glVertex2i(210, 230);
        glVertex2i(230, 300);
        glVertex2i(250, 250);
        glVertex2i(250, 230);

        glVertex2i(250, 250);
        glVertex2i(270, 300);
        glVertex2i(290, 230);
        glVertex2i(250, 230);
    glEnd();

    // tie
    glColor3f(0.0,0.75,0.5);
    glBegin(GL_QUADS);
        glVertex2i(240, 180);
        glVertex2i(260, 180);
        glVertex2i(260, 160);
        glVertex2i(240, 160);

        glVertex2i(240, 160);
        glVertex2i(250, 160);
        glVertex2i(250, 90);
        glVertex2i(235, 120);

        glVertex2i(250, 160);
        glVertex2i(260, 160);
        glVertex2i(265, 120);
        glVertex2i(250, 90);
    glEnd();

    // shirt
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_QUADS);
        glVertex2i(210, 170);
        glVertex2i(240, 180);
        glVertex2i(240, 160);
        glVertex2i(210, 160);

        glVertex2i(260, 180);
        glVertex2i(290, 170);
        glVertex2i(290, 160);
        glVertex2i(260, 160);

        glVertex2i(210, 160);
        glVertex2i(240, 160);
        glVertex2i(235, 120);
        glVertex2i(210, 120);

        glVertex2i(260, 160);
        glVertex2i(290, 160);
        glVertex2i(290, 120);
        glVertex2i(265, 120);

        glVertex2i(210, 120);
        glVertex2i(235, 120);
        glVertex2i(240, 110);
        glVertex2i(210, 80);

        glVertex2i(265, 120);
        glVertex2i(290, 120);
        glVertex2i(290, 80);
        glVertex2i(260, 110);
    glEnd();

    // hands
    glColor3f(0.8,0.7,0.5);
    glBegin(GL_QUADS);
        glVertex2i(210, 170);
        glVertex2i(210, 150);
        glVertex2i(190, 130);
        glVertex2i(190, 150);

        glVertex2i(290, 170);
        glVertex2i(310, 150);
        glVertex2i(310, 130);
        glVertex2i(290, 150);
    glEnd();

    // glords
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_QUADS);
        glVertex2i(190, 160);
        glVertex2i(190, 120);
        glVertex2i(150, 70);
        glVertex2i(140, 110);

        glVertex2i(310, 160);
        glVertex2i(350, 110);
        glVertex2i(350, 70);
        glVertex2i(310, 120);   
    glEnd();
   
    // dress top
    glColor3f(0.8,0.7,0.5);
    glBegin(GL_TRIANGLES);
        glVertex2i(220, 90);
        glVertex2i(240, 110);
        glVertex2i(250, 90);

        glVertex2i(250, 90);
        glVertex2i(260, 110);
        glVertex2i(280, 90);
    glEnd();

    // dress below
    glColor3f(0.5,0.0,0.5);
    glBegin(GL_QUADS);
        glVertex2i(220, 90);
        glVertex2i(250, 90);
        glVertex2i(250, 20);
        glVertex2i(210, 20);

        glVertex2i(250, 90);
        glVertex2i(280, 90);
        glVertex2i(290, 20);
        glVertex2i(250, 20);   
    glEnd();

    // legs
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
        glVertex2i(230, 20);
        glVertex2i(250, 20);
        glVertex2i(250, 0);
        glVertex2i(230, 0);

        glBegin(GL_QUADS);
        glVertex2i(260, 20);
        glVertex2i(280, 20);
        glVertex2i(280, 0);
        glVertex2i(260, 0);
    glEnd();

    // hair pretty sides
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_QUADS);
        glVertex2i(150, 330);
        glVertex2i(170, 330);
        glVertex2i(170, 280);
        glVertex2i(150, 280);

        glVertex2i(330, 330);
        glVertex2i(350, 330);
        glVertex2i(350, 280);
        glVertex2i(330, 280);
    glEnd();

    // hair long
    glColor3f(0.0,0.75,0.5);
    glBegin(GL_QUADS);
        glVertex2i(150, 320);
        glVertex2i(150, 290);
        glVertex2i(50, 120);
        glVertex2i(0, 150);

        glVertex2i(350, 320);
        glVertex2i(500, 150);
        glVertex2i(450, 120);
        glVertex2i(350, 290);
    glEnd();

    // eyes
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_QUADS);
        glVertex2i(220, 240);
        glVertex2i(240, 240);
        glVertex2i(240, 220);
        glVertex2i(220, 220);

        glBegin(GL_QUADS);
        glVertex2i(260, 240);
        glVertex2i(280, 240);
        glVertex2i(280, 220);
        glVertex2i(260, 220);
    glEnd();

    // mouth
    glBegin(GL_QUADS);
	glColor3f(1.0,0.0,1.0);
        glVertex2i(240, 210);
        glVertex2i(260, 210);
	glColor3f(0.2f, 0.0f, 0.8f);
        glVertex2i(260, 190);
        glVertex2i(240, 190);
    glEnd();

	// Menu
	glBegin(GL_QUADS);
	glColor3f(0.0,0.75,0.5);
        glVertex2i(380, 80);
        glVertex2i(480, 80);
        glVertex2i(480, 50);
        glVertex2i(380, 50);
	glEnd();

	// Letter M (M - MENU)
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,1.0,1.0);
        glVertex2i(385, 55);
        glVertex2i(385, 75);
        glVertex2i(390, 65);
        glVertex2i(395, 75);
        glVertex2i(395, 55);
	glEnd();

	// -
	glBegin(GL_LINES);
        glVertex2i(400, 65);
        glVertex2i(410, 65);
	glEnd();

	// Letter M (MENU)
	glBegin(GL_LINE_STRIP);
        glVertex2i(415, 55);
        glVertex2i(415, 75);
        glVertex2i(420, 65);
        glVertex2i(425, 75);
		glVertex2i(425, 55);
	glEnd();

	// Letter E (MENU)
	glBegin(GL_LINE_STRIP);
        glVertex2i(440, 75);
        glVertex2i(430, 75);
        glVertex2i(430, 55);
        glVertex2i(440, 55);
	glEnd();
	glBegin(GL_LINES);
        glVertex2i(430, 65);
		glVertex2i(440, 65);
	glEnd();

	// Letter N (MENU)
	glBegin(GL_LINE_STRIP);
        glVertex2i(445, 55);
        glVertex2i(445, 75);
        glVertex2i(455, 55);
        glVertex2i(455, 75);
	glEnd();

	// Letter U (MENU)
	glBegin(GL_LINE_STRIP);
        glVertex2i(460, 75);
        glVertex2i(460, 55);
        glVertex2i(470, 55);
        glVertex2i(470, 75);
	glEnd();

	// Quit
	glBegin(GL_QUADS);
	glColor3f(0.0,0.75,0.5);
        glVertex2i(380, 40);
        glVertex2i(480, 40);
        glVertex2i(480, 10);
        glVertex2i(380, 10);
	glEnd();

	// Letter Q (Q - QUIT)
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,1.0,1.0);
        glVertex2i(385, 35);
        glVertex2i(385, 15);
        glVertex2i(395, 15);
        glVertex2i(395, 35);
        glVertex2i(385, 35);
	glEnd();
	glBegin(GL_LINES);
        glVertex2i(390, 20);
        glVertex2i(400, 10);
	glEnd();

	// - 
	glBegin(GL_LINES);
        glVertex2i(400, 25);
        glVertex2i(410, 25);
	glEnd();

	// Letter Q (QUIT)
	glBegin(GL_LINE_STRIP);
        glVertex2i(415, 35);
        glVertex2i(415, 15);
        glVertex2i(425, 15);
        glVertex2i(425, 35);
		glVertex2i(415, 35);
	glEnd();
	glBegin(GL_LINES);
		glVertex2i(420, 20);
		glVertex2i(430, 10);
	glEnd();

	// Letter U (QUIT)
	glBegin(GL_LINE_STRIP);
        glVertex2i(430, 35);
        glVertex2i(430, 15);
        glVertex2i(440, 15);
        glVertex2i(440, 35);
	glEnd();

	// Letter I (QUIT)
	glBegin(GL_LINES);
        glVertex2i(445, 35);
        glVertex2i(455, 35);
        glVertex2i(450, 35);
        glVertex2i(450, 15);
        glVertex2i(445, 15);
		glVertex2i(455, 15);
	glEnd();

	// Letter T (QUIT)
	glBegin(GL_LINES);
        glVertex2i(460, 35);
        glVertex2i(470, 35);
        glVertex2i(465, 35);
        glVertex2i(465, 15);
	glEnd();

	glFlush();
}


inline void frame2() {
	// H is the winner
	glBegin(GL_QUADS);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(20, 460);
        glVertex2i(45, 460);
	glColor3f(1.0,1.0,1.0);
        glVertex2i(45, 360);
        glVertex2i(20, 360);

	glColor3f(0.0,0.75,0.75);
        glVertex2i(100, 460);
        glVertex2i(75, 460);
	glColor3f(1.0,1.0,1.0);
        glVertex2i(75, 360);
        glVertex2i(100, 360);

	glColor3f(0.0,0.75,0.75);
		glVertex2i(45, 425);
        glVertex2i(75, 425);
	glColor3f(1.0,1.0,1.0);
        glVertex2i(75, 395);
        glVertex2i(45, 395);
	glEnd();

	// Letter W (WIN)
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 1.0);
        glVertex2i(170, 410);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(140, 360);
        glVertex2i(200, 360);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
        glVertex2i(120, 410);
        glVertex2i(150, 410);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(170, 360);
        glVertex2i(140, 360);

	glColor3f(1.0, 1.0, 1.0);
		glVertex2i(220, 410);
        glVertex2i(190, 410);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(170, 360);
        glVertex2i(200, 360);
    glEnd();

	// Letter I (WIN)
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
        glVertex2i(230, 410);
        glVertex2i(250, 410);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(250, 360);
        glVertex2i(230, 360);
	glEnd();

	// Letter N (WIN)
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
        glVertex2i(260, 410);
        glVertex2i(280, 410);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(280, 360);
        glVertex2i(260, 360);

	glColor3f(1.0, 1.0, 1.0);
		glVertex2i(260, 410);
        glVertex2i(280, 410);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(320, 360);
        glVertex2i(300, 360);

	glColor3f(1.0, 1.0, 1.0);
		glVertex2i(320, 410);
        glVertex2i(300, 410);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(300, 360);
        glVertex2i(320, 360);
	glEnd();

	// sun
    glBegin(GL_QUADS);
	glColor3f(1.0,0.0,0.0);
        glVertex2i(370, 430);
        glVertex2i(430, 430);
	glColor3f(1.0,0.0,1.0);
        glVertex2i(430, 370);
        glVertex2i(370, 370);
    glEnd();

    // sun light
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINES);
        glVertex2i(330, 400);
        glVertex2i(360, 400);
        glVertex2i(400, 470);
        glVertex2i(400, 440);
        glVertex2i(440, 400);
        glVertex2i(470, 400);
        glVertex2i(400, 360);
        glVertex2i(400, 330);
    glEnd();

    // hair top
    glBegin(GL_QUADS);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(170, 320);
        glVertex2i(250, 350);
	glColor3f(0.0,0.75,0.5);
        glVertex2i(250, 300);
        glVertex2i(170, 300);

	glColor3f(0.0,0.75,0.75);
        glVertex2i(250, 350);
        glVertex2i(330, 320);
	glColor3f(0.0,0.75,0.5);
        glVertex2i(330, 300);
        glVertex2i(250, 300);
    glEnd();

    //hair main
    glBegin(GL_TRIANGLES);
	glColor3f(0.0,0.75,0.5);
        glVertex2i(170, 300);
        glVertex2i(190, 300);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(180, 240);

	glColor3f(0.0,0.75,0.5);
        glVertex2i(190, 300);
        glVertex2i(230, 300);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(210, 230);

	glColor3f(0.0,0.75,0.5);
        glVertex2i(230, 300);
        glVertex2i(270, 300);
	glColor3f(0.75,0.75,0.75);
        glVertex2i(250, 250);

	glColor3f(0.0,0.75,0.5);
        glVertex2i(270, 300);
        glVertex2i(310, 300);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(290, 230);

	glColor3f(0.0,0.75,0.5);
        glVertex2i(310, 300);
        glVertex2i(330, 300);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(320, 240);
    glEnd();

    // hair sides
    glBegin(GL_QUADS);
	glColor3f(0.0,0.5,0.5);
        glVertex2i(182, 250);
        glVertex2i(190, 300);
	glColor3f(0.0,0.75,0.5);
        glVertex2i(204, 250);
        glVertex2i(210, 180);

	glColor3f(0.0,0.75,0.5);
        glVertex2i(296, 250);
        glVertex2i(310, 300);
	glColor3f(0.0,0.5,0.5);
		glVertex2i(318, 250);
        glVertex2i(290, 180);
    glEnd();

    // face
    glColor3f(0.8,0.7,0.5);
    glBegin(GL_QUADS);
        glVertex2i(205, 230);
        glVertex2i(250, 230);
        glVertex2i(250, 180);
        glVertex2i(208, 200);

        glVertex2i(205, 230);
        glVertex2i(295, 230);
        glVertex2i(292, 200);
        glVertex2i(250, 180);

        glVertex2i(210, 230);
        glVertex2i(230, 300);
        glVertex2i(250, 250);
        glVertex2i(250, 230);

        glVertex2i(250, 250);
        glVertex2i(270, 300);
        glVertex2i(290, 230);
        glVertex2i(250, 230);
    glEnd();

    // tie
    glBegin(GL_QUADS);
	glColor3f(0.0,0.75,0.5);
        glVertex2i(240, 180);
        glVertex2i(260, 180);
	glColor3f(0.75,0.75,0.75);
        glVertex2i(260, 160);
        glVertex2i(240, 160);

	glColor3f(0.0,0.75,0.5);
        glVertex2i(240, 160);
        glVertex2i(250, 160);
	glColor3f(0.75,0.75,0.75);
        glVertex2i(250, 90);
        glVertex2i(235, 120);

	glColor3f(0.0,0.75,0.5);
        glVertex2i(250, 160);
        glVertex2i(260, 160);
	glColor3f(0.75,0.75,0.75);
        glVertex2i(265, 120);
        glVertex2i(250, 90);
    glEnd();

    // shirt
    glBegin(GL_QUADS);
	glColor3f(0.5,0.6,0.6);
        glVertex2i(210, 170);
        glVertex2i(240, 180);
	glColor3f(0.5,0.5,0.5);
        glVertex2i(240, 160);
        glVertex2i(210, 160);

	glColor3f(0.5,0.6,0.6);
        glVertex2i(260, 180);
        glVertex2i(290, 170);
	glColor3f(0.5,0.5,0.5);
        glVertex2i(290, 160);
        glVertex2i(260, 160);

	glColor3f(0.5,0.5,0.5);
        glVertex2i(210, 160);
        glVertex2i(240, 160);
        glVertex2i(235, 120);
        glVertex2i(210, 120);

	glColor3f(0.5,0.5,0.5);
        glVertex2i(260, 160);
        glVertex2i(290, 160);
        glVertex2i(290, 120);
        glVertex2i(265, 120);

	glColor3f(0.5,0.5,0.5);
        glVertex2i(210, 120);
        glVertex2i(235, 120);
	glColor3f(0.5,0.6,0.6);
        glVertex2i(240, 110);
        glVertex2i(210, 80);

	glColor3f(0.5,0.5,0.5);
        glVertex2i(265, 120);
        glVertex2i(290, 120);
	glColor3f(0.5,0.6,0.6);
        glVertex2i(290, 80);
        glVertex2i(260, 110);
    glEnd();

    // hands
    glColor3f(0.8,0.7,0.5);
    glBegin(GL_QUADS);
        glVertex2i(210, 170);
        glVertex2i(210, 150);
        glVertex2i(190, 130);
        glVertex2i(190, 150);

        glVertex2i(290, 170);
        glVertex2i(310, 150);
        glVertex2i(310, 130);
        glVertex2i(290, 150);
    glEnd();

    // glords
    glBegin(GL_QUADS);
	glColor3f(0.0,0.0,1.0);
        glVertex2i(190, 160);
        glVertex2i(190, 120);
	glColor3f(0.0,0.5,1.0);
        glVertex2i(150, 70);
        glVertex2i(140, 110);

	glColor3f(0.0,0.0,1.0);
        glVertex2i(310, 160);
        glVertex2i(350, 110);
	glColor3f(0.0,0.5,1.0);
        glVertex2i(350, 70);
        glVertex2i(310, 120);   
    glEnd();
   
    // dress top
    glColor3f(0.8,0.7,0.5);
    glBegin(GL_TRIANGLES);
        glVertex2i(220, 90);
        glVertex2i(240, 110);
        glVertex2i(250, 90);

        glVertex2i(250, 90);
        glVertex2i(260, 110);
        glVertex2i(280, 90);
    glEnd();

    // dress below
    glBegin(GL_QUADS);
    glColor3f(0.5,0.0,0.5);
        glVertex2i(220, 90);
        glVertex2i(250, 90);
	glColor3f(0.3,0.3,0.3);
        glVertex2i(250, 20);
        glVertex2i(210, 20);

	glColor3f(0.5,0.0,0.5);
        glVertex2i(250, 90);
        glVertex2i(280, 90);
	glColor3f(0.3,0.3,0.3);
        glVertex2i(290, 20);
        glVertex2i(250, 20);   
    glEnd();

    // legs
    glBegin(GL_QUADS);
	glColor3f(0.0,0.0,0.0);
        glVertex2i(230, 20);
        glVertex2i(250, 20);
	glColor3f(0.5,0.5,0.5);
        glVertex2i(250, 0);
        glVertex2i(230, 0);

	glColor3f(0.0,0.0,0.0);
        glVertex2i(260, 20);
        glVertex2i(280, 20);
	glColor3f(0.5,0.5,0.5);
        glVertex2i(280, 0);
        glVertex2i(260, 0);
    glEnd();

    // hair pretty sides
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
        glVertex2i(150, 330);
        glVertex2i(170, 330);
	glColor3f(1.0,0.0,1.0);
        glVertex2i(170, 280);
        glVertex2i(150, 280);

	glColor3f(1.0,0.0,0.0);
        glVertex2i(330, 330);
        glVertex2i(350, 330);
	glColor3f(1.0,0.0,1.0);
        glVertex2i(350, 280);
        glVertex2i(330, 280);
    glEnd();

    // hair long
    glBegin(GL_QUADS);
	glColor3f(0.0,0.75,0.5);
        glVertex2i(150, 320);
        glVertex2i(150, 290);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(110, 90);
        glVertex2i(50, 120);

	glColor3f(0.0,0.75,0.5);
        glVertex2i(350, 320);
        glVertex2i(450, 120);
	glColor3f(0.0,0.75,0.75);
        glVertex2i(400, 90);
        glVertex2i(350, 290);
    glEnd();

    // eyes
    glBegin(GL_QUADS);
	glColor3f(0.0,0.0,0.0);
        glVertex2i(220, 240);
        glVertex2i(240, 240);
	glColor3f(0.5,0.5,0.5);
        glVertex2i(240, 230);
        glVertex2i(220, 230);

    glColor3f(0.0,0.0,0.0);
        glVertex2i(260, 240);
        glVertex2i(280, 240);
	glColor3f(0.5,0.5,0.5);
        glVertex2i(280, 230);
        glVertex2i(260, 230);
    glEnd();

	//mouth
    glBegin(GL_QUADS);
	glColor3f(1.0,0.0,1.0);
        glVertex2i(240, 210);
        glVertex2i(260, 210);
	glColor3f(1.0,0.2,0.0);
        glVertex2i(260, 190);
        glVertex2i(240, 190);
    glEnd();

	// Menu
	glBegin(GL_QUADS);
	glColor3f(0.0,0.75,0.5);
        glVertex2i(380, 80);
        glVertex2i(480, 80);
        glVertex2i(480, 50);
        glVertex2i(380, 50);
	glEnd();

	// Letter M (M - MENU)
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,1.0,1.0);
        glVertex2i(385, 55);
        glVertex2i(385, 75);
        glVertex2i(390, 65);
        glVertex2i(395, 75);
        glVertex2i(395, 55);
	glEnd();

	// -
	glBegin(GL_LINES);
        glVertex2i(400, 65);
        glVertex2i(410, 65);
	glEnd();

	// Letter M (MENU)
	glBegin(GL_LINE_STRIP);
        glVertex2i(415, 55);
        glVertex2i(415, 75);
        glVertex2i(420, 65);
        glVertex2i(425, 75);
		glVertex2i(425, 55);
	glEnd();

	// Letter E (MENU)
	glBegin(GL_LINE_STRIP);
        glVertex2i(440, 75);
        glVertex2i(430, 75);
        glVertex2i(430, 55);
        glVertex2i(440, 55);
	glEnd();
	glBegin(GL_LINES);
        glVertex2i(430, 65);
		glVertex2i(440, 65);
	glEnd();

	// Letter N (MENU)
	glBegin(GL_LINE_STRIP);
        glVertex2i(445, 55);
        glVertex2i(445, 75);
        glVertex2i(455, 55);
        glVertex2i(455, 75);
	glEnd();

	// Letter U (MENU)
	glBegin(GL_LINE_STRIP);
        glVertex2i(460, 75);
        glVertex2i(460, 55);
        glVertex2i(470, 55);
        glVertex2i(470, 75);
	glEnd();

	// Quit
	glBegin(GL_QUADS);
	glColor3f(0.0,0.75,0.5);
        glVertex2i(380, 40);
        glVertex2i(480, 40);
        glVertex2i(480, 10);
        glVertex2i(380, 10);
	glEnd();

	// Letter Q (Q - QUIT)
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,1.0,1.0);
        glVertex2i(385, 35);
        glVertex2i(385, 15);
        glVertex2i(395, 15);
        glVertex2i(395, 35);
        glVertex2i(385, 35);
	glEnd();
	glBegin(GL_LINES);
        glVertex2i(390, 20);
        glVertex2i(400, 10);
	glEnd();

	// - 
	glBegin(GL_LINES);
        glVertex2i(400, 25);
        glVertex2i(410, 25);
	glEnd();

	// Letter Q (QUIT)
	glBegin(GL_LINE_STRIP);
        glVertex2i(415, 35);
        glVertex2i(415, 15);
        glVertex2i(425, 15);
        glVertex2i(425, 35);
		glVertex2i(415, 35);
	glEnd();
	glBegin(GL_LINES);
		glVertex2i(420, 20);
		glVertex2i(430, 10);
	glEnd();

	// Letter U (QUIT)
	glBegin(GL_LINE_STRIP);
        glVertex2i(430, 35);
        glVertex2i(430, 15);
        glVertex2i(440, 15);
        glVertex2i(440, 35);
	glEnd();

	// Letter I (QUIT)
	glBegin(GL_LINES);
        glVertex2i(445, 35);
        glVertex2i(455, 35);
        glVertex2i(450, 35);
        glVertex2i(450, 15);
        glVertex2i(445, 15);
		glVertex2i(455, 15);
	glEnd();

	// Letter T (QUIT)
	glBegin(GL_LINES);
        glVertex2i(460, 35);
        glVertex2i(470, 35);
        glVertex2i(465, 35);
        glVertex2i(465, 15);
	glEnd();

	glFlush();

}

