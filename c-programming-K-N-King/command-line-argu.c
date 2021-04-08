#include <stdio.h>

int main(int argc, char *argv[])
{
//print out all command line arguments
//
	char **p;

	for (p=&argv[0]; *p != NULL; p++)
		 puts(*p);
}
