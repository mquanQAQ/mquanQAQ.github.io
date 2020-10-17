#include <stdio.h>

int main(int argc,char **argv)
{
	int i;
	for(i = 1; i < argc; i++)
	{
		printf("argv[%d] = %s\r\n",i,argv[i]);
	}
	
	i = 1;
	i = ++i, i + 10, i * 10;
	printf("i = %d\r\n",i);

	return 0;
}
