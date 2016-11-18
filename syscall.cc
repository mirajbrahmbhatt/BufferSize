#include "syscall.hh"
#include <unistd.h>
/* taken from linux kernel source in arch/x86/entry/syscalls/syscall_64.tbl */
/* system call constants */
#define READ_SYSTEM_CALL 0
#define WRITE_SYSTEM_CALL 1
#define OPEN_SYSTEM_CALL 2
#define CLOSE_SYSTEM_CALL 3
/* system call constants */


/*
 *	low level c++/assembly code for Intel 64-bit CPU to make a call to the write system call
 */
int my_write(int fd, const void *buffer, unsigned int size) {
	//ssize_t returnValue;

        int return_value = syscall(WRITE_SYSTEM_CALL, fd, buffer, size);

	return return_value;
	
}

int my_open(const char *pathfile, int flags, mode_t mode)
{
	
	int  return_value = syscall(OPEN_SYSTEM_CALL, pathfile, flags, mode);


	return return_value;

}





















