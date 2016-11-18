#include "syscall.hh"
#include "stdio.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
	/* we're calling the write system call */
	/* file descriptor is 0 - standard output to the terminal */
	/* buffer is the string constant "hello" */
	/* the length of the buffer is 6 bytes */
	//my_write(0, "hello", 6);
	

	char* space;
	space = argv[1];
	
	clock_t start_time=clock();

	int new_space = atoi(space);
	
	char *buffer = (char*)malloc(new_space * sizeof(char));
	
	int fd = my_open("writefile.txt", O_RDWR, 0666);
	

	for(int i=0; i<(104857600/new_space); i++)
	{
		my_write(fd, buffer, new_space * sizeof(char));
		
	}
	
	close (fd);

	clock_t end_time=clock();
	float elsp  =(float) end_time-(float)start_time;
	elsp = elsp/CLOCKS_PER_SEC;
	
	printf("time: %f \n",elsp);
}
