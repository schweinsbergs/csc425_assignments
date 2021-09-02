#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
printf("hello world (pid:%d)\n", (int) getpid());
int rc = fork();
if (rc < 0) {
// fork failed
fprintf(stderr, "fork failed\n");
exit(1);
} else if (rc == 0) {
// child (new process)
printf("hello, I am child (pid:%d)\n", (int) getpid());
execlp(system("/bin/ls"));
} else {
// parent goes down this path (main)
printf("hello, I am parent of %d (pid:%d)\n",
rc, (int) getpid());
}
return 0;
}


/*** 

Sam Schweinsberg

Write a program that calls fork() and then calls some form of
exec() to run the program /bin/ls. See if you can try all of the
variants of exec(), including (on Linux) execl(), execle(),
execlp(), execv(), execvp(), and execvpe(). Why do
you think there are so many variants of the same basic call?

You want to be able to control the environment of whatever you're calling that child into. It might be different from the parent, so it gives
you a very granular control.

v family takes an array as parameters 
p will search for a directory 
l will take a variable 
e will take an extra set, and it looks like you can mix and match them to create sometihng like execvple.  


***/ 
