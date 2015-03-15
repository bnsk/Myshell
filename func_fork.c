#include "shell.h"



void func_fork(char *userinputargs[])
{  
 	int pid,status;
        int i=1;
        char *tok;
        tok=userinputargs[0];
       while(tok!=NULL)
       {
        tok=userinputargs[i++];
       }
       
 	        if(strncmp(userinputargs[0],"exit",4)==0)  //exit command
 		     exit(0);
                if(strncmp(userinputargs[0],"cd",2)==0)  //cd command
        	{
        		func_cd(userinputargs);
        	}
                if(strncmp(userinputargs[0],"ps",2)==0) //ps command
                {
                
                 func_ps(userinputargs);
                }
        	////else if
               else if(strcmp(userinputargs[i-2],"&")==0)  //backgroundprocess support
        	{
        		if((pid=fork())==0)//child
          		{
            			if(execvp(userinputargs[0],userinputargs)==-1)
                			printf("command not found");
                	}	
			else if(pid>0) //parent
			{
          		  
                           printf("\nThe background process with pid- %d is running...\n",pid);
                        }
         	}
                else  //normal foreground commands
                {
                  
                                        
                  if((pid=fork())==0)//child
          	  {
            			if(execvp(userinputargs[0],userinputargs)==-1)
                			printf("command not found\n");
                  }	
		  else if(pid>0) //parent
		  {
          	    wait(&status);
         	  }  
                   
                }
                   

}


