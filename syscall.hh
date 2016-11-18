#pragma once
#include <sys/stat.h>


int my_write(int fd, const void *buffer, unsigned int size);

int my_open(const char *pathfile, int flags, mode_t mode);
