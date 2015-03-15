#include"shell.h"

int main()
{
	char buff[MAX];
	char *userinputargs[MAXARGS];
	
	int i;
   	while(1)
  	{
       		printf("[BNSK's SHELL]#>");
        	fgets(buff,MAX,stdin);
        	if(buff[0]!='\n') 
		{
	   		 for(i=0;i<MAXARGS;i++)
                         {
	                    userinputargs[i]=(char *)malloc(20*sizeof(char));
                         }  
        		 for(i=0;buff[i]!='\n';i++);
	   		 buff[i]='\0';
        		 func_parseargs(buff,userinputargs);
        		 func_fork(userinputargs);
  		}        
  	}
	return 0;
}
