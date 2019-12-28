#include <GL/glut.h>
#include <stdlib.h>

void init(int *argc, char *argv[]);

void set_callback_functions(void);

void on_display(void);

void on_keyboard(void);

void on_timer(int);

void on_reshape(int, int);

void on_press(unsigned char, int, int);

void on_release(unsigned char, int, int);
