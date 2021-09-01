#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



/***
Sam Schweinsberg 
 
Question: Write a program that opens a file (with the open() system call)
and then calls fork() to create a new process. Can both the child
and parent access the file descriptor returned by open()? What
happens when they are writing to the file concurrently, i.e., at the
same time?


***/ 

