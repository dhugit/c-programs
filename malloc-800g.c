#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BLOCK_SIZE 1024*1024*1024
int main(int argc, char **argv)
{

	if(argc != 3) {
		fprintf(stderr, "Usage: %s\n start end", argv[0]);
		return 1;
	}

        int i=0;
        char *buf[900];
        while(i<2)
        {
                printf("i=%d\n",i);
                buf[i] = (char*)malloc(BLOCK_SIZE);
                memset(buf[i],'\0',BLOCK_SIZE);
                i++;
        }
	puts("success!\n");
//      for (;;);
}

