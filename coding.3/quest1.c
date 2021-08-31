/*** help from: https://computer.howstuffworks.com/c6.htm to figure out how to print... :| 
***/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()  {

int counter = 100; 

printf("%d",counter);


int rc = fork();
if(rc < 0) {
fprintf(stderr,"fork failed\n");
exit(1); 

} else if (rc == 0) { 
printf("I am child");
printf("%d",counter);


printf("child changing variable:");
counter = 101;
printf("%d",counter);

}

return 0;

}

/*** 
Sam Schweinsberg
Question 1: After forking a program that declares a variable, what is 
the variable in the child process? What happens when both parent and child
change the value of the variable? 

Answer:  At first, both the child and the parent's variable is the same, 
which is what I expected. The child is copying the parent, after all. 
If the parent changes the variable before the child is forked, they will
inherit that variable. The child changing the varible will be independent 
of the parent. If the parent changes the variable after forking the child, 
it will be independent because the child will not see it.  

***/ 
