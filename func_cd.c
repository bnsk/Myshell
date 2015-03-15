#include "shell.h"

void func_cd(char *userinputargs[])
{
	int i;
  	char *token;
  	if(strncmp(userinputargs[0],"cd",2)==0)
 	{
    	if(userinputargs[1]==NULL)
    	{
      		token=getenv("HOME");
      		i=chdir(token);
      		if(i==0)
         		printf("Changed the directory to %s\n",token);
      		else
         		printf("Couldnot execute cd...\n");
    	}
    	else
    	{
       		token=userinputargs[1];
            	i=chdir(token); 
                if(i==0)
                	printf("changed directory to %s...\n",token);
                else printf("Failed to change\n");
    	}
  	}
 
}
