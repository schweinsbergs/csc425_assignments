#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()  {


int rc = fork();

if (rc == 0) {

printf("Hello! I'm the child!"); 

} else {
printf("Goodbye. I'm the parent.");

}

return 0;

}



/***

Sam Schweinsberg

Write another program using fork(). The child process should
print “hello”; the parent process should print “goodbye”. You should
try to ensure that the child process always prints first; can you do
this without calling wait() in the parent?

I'm not quite sure that I can do this without using wait-- 
The thing I tried was having the parent say goodbye last, but it doesn't
seem like that wants to work...  To my understanding the parent just 
skips over the child's code and executes first? 

***/
