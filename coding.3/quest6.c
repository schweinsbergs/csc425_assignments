/*** This is really just the example from the book... ***/ 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
printf("hello world (pid:%d)\n", (int) getpid());
int rc = fork();
if (rc < 0) { // fork failed; exit
fprintf(stderr, "fork failed\n");
exit(1);
} else if (rc == 0) { // child (new process)
printf("hello, I am child (pid:%d)\n", (int) getpid());
} else { // parent goes down this path (main)
int rc_wait = waitpid(NULL);
printf("hello, I am parent of %d (rc_wait:%d) (pid:%d)\n",
rc, rc_wait, (int) getpid());
}
 return 0;




/***
Question: Write a slight modification of the previous program, this time using waitpid() instead of wait(). When would waitpid() be
useful?


Answer: I'm getting a weird error that says waitpid doesn't exist, buuuuut waitpid() is used to have more control over children 
processes. It makes the parent wait until the child is actually done or terminates, or changes state.  
***/
