#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>

#include <netdb.h>
#include <arpa/inet.h>

#include <errno.h>
#define PORT 8080

int netserverinit(char* hostname, int filemode) {
	// --- checks that hostname "basic.cs.rutgers.edu" exists...
	// --- it does!, returns 0, do not set errno
	//int netfd = netopen("/.autofs/ilab/ilab_users/deymious/test.c", O_RDWR);
	
	return -1;
}

int netclose(int fd)
{

	return 1;
}

ssize_t netwrite(int fildes, const void *buf, size_t nbyte)
{

	return 1;
}

ssize_t netread(int fildes, void *buf, size_t nbyte)
{
	/* read */

	// make a socket
	// connect to file server
												// got a connection request
												// new worker thread
												// give new socket to worker thread
	// got a socket connected to the file server
		//  ---sends "-92, read, 100" to file server--->
												// worker thread gets message
												// worker thread decodes message
												// worker thread checks global state:
														// - client #-92 has read/write access
														// ... request is OK!
												// worker thread reads 100 bytes from file
												// worker thread packs return value and bytes into message
										//<---sends "100, QUASIFLAPDOODLE ..." to library
												// worker thread exits
	// copy bytes into &buf
	// returns 100 and does not set errno

	// fildes = open(pathname, O_RDONLY);

	// if(fd == -1)
	// {
	// 	printf("Failed to open and read the file.\n");
	// 	exit(1);
	// }

	// read(fd, buf, nbyte);

	// close(fd);

	// printf("buf: %s\n", buf);

	return 1;
}

int netopen(const char *pathname, int flags)
{

	// int fd;

	// fd = open(pathname, O_CREAT | O_WRONLY, 0600);

	// if(fd == -1)
	// {
	// 	printf("Failed to create and open the file.\n");
	// 	exit(1);
	// }

	// write(fd, "Hello World!\n", 13);

	// close(fd);

	


	return 0;
}


  
int main(int argc, char const *argv[])
{
    





    return 0;


}