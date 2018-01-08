#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

//int main(int argc, char *argv[])
//{
	/*
	char str [50];
	int i;

	printf ("Entrez votre nom : ");
	scanf ("%s", str);
	printf ("Entrez votre âge : ");
	scanf ("%d", &i);

	printf("%s est âgé de %d ans \n", str, i);

	*/
	
	/*

	printf ("le programme possède %d paramètres \n", argc);
	printf ("Nom du programme :%s \n", argv[0]);
	printf ("Entier passé en paramètre : %d \n", atoi(argv[1])); //atoi convertit une chaine de   caractères en un entier
	printf ("Double passé en paramètre :%f \n", atof(argv[2])); //atof convertit une chaine de caractèresen float ou double

	*/

//}

//int main()
//{
	/*

	pid_t pid;
	int i;

	if((pid = fork()) ==-1)
	{
		printf ("Error");
		exit (EXIT_FAILURE);
	}

	if(pid==0)
	{
		for(i=0;i<5;i++)
		{
			printf("[%d] Je suis le fils, mon père est le %d \n", getpid(), getppid());
			wait(NULL);
			printf( "Le processus fils est terminé \n");
		}		
	}
	else
	{
		for(i=0;i<3;i++)
		{
			printf("[%d] Je suis le père \n", getpid());
			wait(NULL);	
		}

	}
	
	return EXIT_SUCCESS;

	*/
//}


/*int main()
{
	pid_t pid, pid1, pid2, pid3,pid4;
	int i;

	if((pid=fork()) == -1)
	{
		printf("Error");
		exit(EXIT_FAILURE);
	}
	
	if(pid==0)
	{
		pid1=fork();
		if(pid1=0)
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
}*/

/*int main(void)
{
	fork();
	fork();
	printf("Je suis le processus %d, mon père est le processus %d\n",getpid(),getppid());	
}*/



int main( int argc , char *argv[])
{
	pid_t childPID;
	int n= atoi( argv[1]);

	for (int i=0;i<n;i++)
	{	
		childPID=fork();		
		sleep(1);
		if(childPID == 0){
			
			printf("Je suis le processus %d, mon père est le processus %d\n",getpid(),getppid());
			break;
		}
	}	
	
}
