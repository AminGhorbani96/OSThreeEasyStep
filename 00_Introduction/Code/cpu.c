#include <stdio.h>
#include "common.h"



int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		printf("%s\n", "give me one input please");
		return -1;
	}

    const char *str = argv[1];
	while(1)
	{
		printf("%s\n", str);
		Spin(1);
	}

	return 0;
}