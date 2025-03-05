#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

void main(){
	int fd, fd2;
	char rbuf[128];
	char wbuf[128];
	printf("enter the contents to write: ");
	scanf("%s", wbuf);
	fd=open("file.txt",O_RDWR);
	write(fd, wbuf, strlen(wbuf));
	close(fd);
	printf("the contents are: ");
	fd2=open("file.txt", O_RDWR);
	read(fd2, rbuf, 100);
	printf("%s",rbuf);
	close (fd2);
}
