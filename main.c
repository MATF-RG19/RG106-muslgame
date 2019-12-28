#include <stdlib.h>
#include <GL/glut.h>
#include "init.h"

void
init_start(int argc, char * argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);

	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
}

int
main(int argc, char * argv[])
{
	init_start(argc, argv);
	return 0;
}
