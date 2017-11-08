#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
         pid_t pid;
         int i;
         if((pid = fork()) == -1)
	 {
                printf( "Error avec le proccess");
                exit(EXIT_FAILURE);
         }
         if(pid==0)
	 {

		for(i=0;i<5;i++)
		{
		printf( "Je suis fils, mon père est le %d \n",getppid());
		}
		wait(NULL);
		printf( "Le processus fils est terminé \n");
         }
		
	 else{
		for(i=0;i<3;i++)
		{
		printf( "[%d] Je suis le père \n",getpid());
	        }

		//wait(NULL);
	
        }
		
	return EXIT_SUCCESS;

}
