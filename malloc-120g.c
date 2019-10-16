#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BLOCK_SIZE 1024*1024*1024
int main()
{
        int i=0;
        char *buf[300];
        while(i<120)
        {
                printf("i=%d\n",i);
                buf[i] = (char*)malloc(BLOCK_SIZE);
                memset(buf[i],'\0',BLOCK_SIZE);
                i++;
        }
	puts("success!\n");
//      for (;;);
}

