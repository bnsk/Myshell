#ifndef __shell_h
#define __shell_h

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<wait.h>
#include<stdlib.h>
#include<errno.h>
#include<syslog.h>
#include<sys/resource.h>
#include<fcntl.h>
#include<dirent.h>
#include<ctype.h>
#include<sys/types.h>

#define MAX 100
#define MAXARGS 20

void func_parseargs(char *buff,char **userinputargs);
void func_fork(char **a);
void func_cd(char **arg);
void func_ps(char **userinputargs);


#endif // __shell_h
