/*** Another example from the book modified. ***/ 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
printf("hello world (pid:%d)\n", (int) getpid());
int rc = fork();
if (rc < 0) { // fork failed; exit
fprintf(stderr, "fork failed\n");
exit(1);
} else if (rc == 0) { // child (new process)
printf("hello, I am child (pid:%d)\n", (int) getpid());
fclose(STDOUT FILENO);
printf("hi");
} else { // parent goes down this path (main)
int rc_wait = wait(NULL);
printf("hello, I am parent of %d (rc_wait:%d) (pid:%d)\n",
rc, rc_wait, (int) getpid());
}
return 0;
}

/*** Question: Write a program that creates a child process, and then in the child
closes standard output (STDOUT FILENO). What happens if the child
calls printf() to print some output after closing the descriptor?

Answer: It looks like when you close that standard library, it's kinda cutting it off, so it can't do that 
print command anymore. 


***/ 
