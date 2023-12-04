#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include "headers.h"
/**
 * main - creates child processes and prints the PID for each
 *
 * Return: Always 0
 */

void printpids()
{
	int i;
	
	for(i = 0; i < 5 ; i++)
	{
		if(fork() == 0)
		{
			printf("[Child] pid %d from [PaPa] pid %d\n", getpid(), getppid());
			exit(0);
		}
	}
	for(i = 0; i < 5 ; i++)
		wait(NULL);
}