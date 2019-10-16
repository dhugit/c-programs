#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BLOCK_SIZE 1024*1024*1024
int main(int argc, char **argv)
{

        int i=0;
	int totalgb;
        char *buf[900];

	if(argc != 2) {
		printf("Usage: %s\t number of GB to allocate\n", argv[0]);
		puts("example: ./a.out 5    	#to allocate 5gb\n\n");
		return 1;
	}
	
	totalgb=atoi(argv[1]);

        while(i<totalgb)
        {
                printf("i=%d\n",i);
                buf[i] = (char*)malloc(BLOCK_SIZE);
                memset(buf[i],'\0',BLOCK_SIZE);
                i++;
        }
	printf("success! allocated %dGB of space in memory\n",totalgb);
}
