#include"shell.h"

void func_parseargs(char *buff,char **userinputargs)
{
	char *tok;
        int i=0;
        tok=strtok(buff," ");
        userinputargs[i++]=tok; //the actual command
        while(tok!=NULL)
        {
   	     	
             tok=strtok(NULL," ");
        	userinputargs[i]=tok;
        	
              i++;
   	}
}


