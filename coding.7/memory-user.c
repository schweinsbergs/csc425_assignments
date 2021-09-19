/* http://www.cplusplus.com/reference/cstdlib/malloc/
https://www.programmerall.com/article/29631775493/  */

#include  <stdio.h> 
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){

/* Ask how many mb we want to use and print it */
int number;
int memory;
int protect;
printf("How many mb are we using?"); 
scanf("%d", &number); 
printf("You entered: %d", number);

memory = number * 1024 * 1024/sizeof(int); /* I think this gives mb */ 

/* Allocate that number to an array? */ 
int *arr = malloc(memory);

/* I'm getting a segmentation fault error, i think it might be because its writing over 
the allowed memory. This might protect that from happening. edit: nope, doesnt work */ 
protect = memory - 1 
for (int i = 0; i < protect; i++)  {
	arr[i] = i;
	printf("%d", arr[i]);
	}

return 0;
 }

