#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include <unistd.h>

 int main(int argc, char const *argv[])
{
	int *p = (int*)malloc(sizeof(int)); //malloc returns a pointer of type void which can be cast into a pointer of any form.  sizof(int) = 4 byte 
	assert(p != NULL);

	printf("Pid  = %d and p = %p\n", getpid() ,p);

	*p = 0;

	while(1){
		printf("((%d)) p = %d\n", getpid(),*p);
		*p = *p + 1;
		Spin(1);

	}

	return 0;
}