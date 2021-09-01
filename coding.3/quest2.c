/*** help from: https://www.cs.utah.edu/~germain/PPS/Topics/C_Language/file_IO.html to read files ***/ 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()  {

FILE* a = fopen("testfile.txt", "r");


int rc = fork();
if(rc < 0) {
fprintf(stderr,"fork failed\n");
exit(1); 

} else if (rc == 0) {

print(a);
print("This is child reading!");

} else {

printf(a);
print("This is parent reading!"); 
}

return 0;

}




/***
Sam Schweinsberg 
 
Question: Write a program that opens a file (with the open() system call)
and then calls fork() to create a new process. Can both the child
and parent access the file descriptor returned by open()? What
happens when they are writing to the file concurrently, i.e., at the
same time?


***/ 

