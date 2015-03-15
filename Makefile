CC = gcc
CFLAGS = -Wall -c
INCPATH = ./include
INCLUDE = -I./include

02_17_sh: shell.o func_parseargs.o func_fork.o func_cd.o func_ps.o
	$(CC) shell.o func_parseargs.o func_fork.o func_cd.o func_ps.o -o 02_17_sh

shell.o: shell.c $(INCPATH)/shell.h
	$(CC) $(CFLAGS) $(INCLUDE) shell.c

func_parseargs.o: func_parseargs.c $(INCPATH)/shell.h
	$(CC) $(CFLAGS) $(INCLUDE) func_parseargs.c

func_fork.o: func_fork.c $(INCPATH)/shell.h
	$(CC) $(CFLAGS) $(INCLUDE) func_fork.c

func_cd.o: func_cd.c $(INCPATH)/shell.h
	$(CC) $(CFLAGS) $(INCLUDE) func_cd.c


func_ps.o: func_ps.c $(INCPATH)/shell.h
	$(CC) $(CFLAGS) $(INCLUDE) func_ps.c

clean:
	rm -f *.o *~ 02_17_sh

