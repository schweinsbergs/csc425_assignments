/*** help from: https://www.cs.utah.edu/~germain/PPS/Topics/C_Language/file_IO.html to read files 
https://scanftree.com/programs/c/to-read-a-text-file-print-it-on-the-screen-in-c/
***/ 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()  {

FILE* a;
a  = fopen("./testfile.txt", "r");
char b;
b = getc(a);

int rc = fork();
if(rc < 0) {
printf("fork failed\n");
exit(1); 

} else if (rc == 0) {

printf("%c",b);
printf("This is child reading!");

} else {

printf("%c",b);
printf("This is parent reading!"); 
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

Both the child and the parent are able to access that file, which makes sense, because the child is a copy of the parent. I'm forking after 
the file read is called. If they're writing to the file at the same time, and they're not taking turns or playing nice, they might 
write over each other. 

***/ 

