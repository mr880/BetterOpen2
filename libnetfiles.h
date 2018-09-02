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
#define write(x, y, z) netwrite(x, y, z)
#define read(x, y , z) netread(x, y, z)

ssize_t netwrite(int fildes, const void *buf, size_t nbyte);
ssize_t netread(int fildes, void *buf, size_t nbyte);