#include"shell.h"

void func_ps(char *userinputargs[])
{
 

 DIR *dirptr1;
 DIR *dirptr2=NULL;
 
 struct dirent *dptr=NULL;
 struct dirent *fdptr=NULL;
 
 FILE *statfile=NULL;
   
 char path1[100];
 char path2[100];
 char buff[20];
 char pid_proc[10];
 char executable[20];
 char state[5];
 char ppid_proc[20];

   
 if((dirptr1=opendir("/proc"))==NULL)
 {
   printf("\nSorry unable to open the /proc directory\n");
   exit(1);
 }
 
 while((dptr=readdir(dirptr1)))
 {
  
   strcpy(buff,dptr->d_name);
   if(dptr->d_type==DT_DIR)
   {
      if(isdigit(buff[0]))
      {
        
        strcpy(path1,"/proc/");            //opening the stat file in the /proc dir
        strcat(path1,dptr->d_name);
        strcpy(path2,path1);
        strcat(path1,"/stat");
        statfile=fopen(path1,"r");
        if(statfile)
        {
          fscanf(statfile,"%s %s %s %s",pid_proc,executable,state,ppid_proc);      //printing the required info
          printf("\npid-%s  executable-%s  state-%s  ppid-%s  ",pid_proc,executable,state,ppid_proc);
           fclose(statfile);
        }
        else
        { 
         printf("\nError opening the stat file...\n"); 
         exit(1);
        }

             //now,for opening the fdinfo dir in the /proc dir
         strcat(path2,"/fdinfo");
         if((dirptr2=opendir(path2))==NULL)
           printf("files-NA\n");
         else
         { 
          int count=0;
           while((fdptr=readdir(dirptr2)))
           {
             count++;
           }
             printf("files-%d\n",count);
           closedir(dirptr2);
         }   
           
     }
   }
  printf("\n");
 }
closedir(dirptr1);
} 
    /*
      n=sprintf(buff,"%s",dptr->d_name);  
      if(n<0)
      {
       printf("\nError...\n");
       exit(1);
      }

  if(isdigit(buff[0]))
  {
   printf("\npid:%s\n",buff);

   if((dirptr2=opendir("/proc/buff"))==NULL)
   {  
    printf("SSSSSSSorry...Error opening the dir...\n");
    exit(1);  
   }
   
    if((file=fopen("/buff/stat","r"))==NULL)
    {
     printf("Sorry...Error opening the stat file...\n");
     exit(1);  
    }



  }
}
}*/
  //strcpy(buff,dptr->dname);
 /*  sscanf(dname->dptr,"%s",buff);
  if((dirptr2=opendir("/proc/buff/stat"))==NULL)
  {
     printf("Sorry...Error opening the dir...\n");
     exit(1);
  }*/

