#include "global.h"
#include "init.h"
#include <GL/gl.h>

void
init (int *argc, char * argv[])
{
	glutInit(argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);

	glutInitWindowSize(win_width, win_height);
	glutInitWindowPosition(win_x_pos, win_y_pos);
	glutCreateWindow(argv[0]);

	set_callback_functions();
}

void
set_callback_functions()
{
	glutKeyboardFunc(on_press);
	glutKeyboardUpFunc(on_release);
	glutReshapeFunc(on_reshape);
	glutDisplayFunc(on_display);
	glutTimerFunc(1000 / FPS, on_timer, 0);
}

void
on_display(){}

void
on_press(unsigned char ch, int x, int y){}

void
on_release(unsigned char ch, int x, int y){}

void
on_timer(int timer_id){}

void
on_reshape(int width, int height)
{
	/* Kada se promeni velicina prozora moraju
	  se namestiti parametri projekcije
	  i viewporta */
	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60, (float) width / height, 1, 1500);

	win_width = width;
	win_height = height;
}
