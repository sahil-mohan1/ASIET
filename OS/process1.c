#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
int main(){
	int pid, status, child_pid;
	pid = fork();
	if (pid==-1){
		printf("failed to create child process");
		exit(0);
		}
	else if (pid==0){
		printf("inside child process with process id: %d\n", getpid());
		execlp("/bin/date", "date", NULL);
		exit (0);
		}
	else {
		child_pid = wait(&status);
		printf("inside parent process with process id: %d\n", getpid());
	}
}
	
		
		  
