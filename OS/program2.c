#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>

void main(){
	DIR *dir;
	struct dirent *ptr2;
	char dirname[50];
	printf("enter directory: ");
	scanf("%s",dirname);
	dir=opendir(dirname);
	while((ptr2=readdir(dir))!=NULL)
		printf("%ld\t%s\n",ptr2->d_ino,ptr2->d_name);
	closedir(dir);
}
