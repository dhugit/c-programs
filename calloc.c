#include<stdio.h>
#include<stdlib.h>
#define BLOCK_SIZE 1024*1024*256 
//#define BLOCK_SIZE 1024*1024*1024
int main()
{
        int i=0;
        char *buf[150];
        while(i<150)
        {
		printf("i=%d\n\n",i);
                buf[i] = (char*)calloc(1,BLOCK_SIZE);
                i++;
        }
}
