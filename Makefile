APP 	= muslGame
CC 		= gcc
FLAGS 	= -g -std=c99 -Wall
LIBS 	= -lglut -lGLU -lGL -lm
SOURCE 	= main.c init.c
HEADER 	= init.h global.h

$(APP): $(SOURCE) $(HEADER)
	$(CC) $(FLAGS) -o $(APP) $(SOURCE) $(LIBS)
