#include "libnetfiles.h"

void error(char *msg)
{
    perror(msg);
    exit(0);
}

int netserverinit(char* hostname, int filemode) {
	// --- checks that hostname "basic.cs.rutgers.edu" exists...
	// --- it does!, returns 0, do not set errno
	//int netfd = netopen("/.autofs/ilab/ilab_users/deymious/test.c", O_RDWR);
	int sockfd, n;
	int h_errno;
    struct sockaddr_in serv_addr;
    struct hostent *server;

    char buffer[256];
    
    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sockfd < 0) 
        error("ERROR opening socket");

    server = gethostbyname(hostname);

    if (server == NULL) {
        fprintf(stderr,"ERROR, no such host\nfailure: returning with value -1\n");
        h_errno = HOST_NOT_FOUND;
        return -1;
    }
    else
    	return 0;

    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *)server->h_addr, (char *)&serv_addr.sin_addr.s_addr, server->h_length);
    serv_addr.sin_port = htons(PORT);


    
    // if (connect(sockfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr)) < 0) 
    //     error("ERROR connecting");

    // printf("Please enter the message: ");
    // bzero(buffer,256);
    // fgets(buffer,255,stdin);

    // n = write(sockfd,buffer,strlen(buffer));

    // if (n < 0) 
    //     error("ERROR writing to socket");

    // bzero(buffer,256);

    // n = read(sockfd,buffer,255);

    // if (n < 0) 
    //      error("ERROR reading from socket");
     
    // printf("%s\n",buffer);
	return -1;
}

int netclose(int fd)
{

	return 1;
}

ssize_t netwrite(int fildes, const void *buf, size_t nbyte)
{	

	return send(fildes, buf, strlen(buf), 0);
	
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

	return recv(fildes, buf, nbyte, 0);
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
// Client side C/C++ program to demonstrate Socket programming



int main(int argc, char *argv[])
{
    if (argc < 3) {
       fprintf(stderr,"usage %s hostname file_connection_mode\n", argv[0]);
       exit(0);
    }

    if(netserverinit(argv[1], argv[2]) == -1)
    	return -1;
    
    


    return 0;
}
