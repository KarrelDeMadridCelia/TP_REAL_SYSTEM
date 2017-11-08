#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
         pid_t pid, pid1, pid2, pid3, pid4, pid5, pid6;
	 int n=1;
         
         if((pid = fork()) == -1)
	 {
                printf( "Error avec le proccess");
                exit(EXIT_FAILURE);
         }

         if(pid==0)
	 {
                pid1= fork();
		if(pid1==0)
		{
		printf( "[%d]Je suis fils, mon père est le %d \n",getpid(),getppid());
		}
       	    
	 pid2= fork();
		if(pid2==0)
		{
		printf( "[%d]Je suis fils, mon père1 est le %d \n",getpid(),getppid());
		}
	
	}
		
	
	return EXIT_SUCCESS;

}
