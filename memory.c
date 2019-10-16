#include <stdio.h>
#include <stdlib.h>

#define MINREQ      0xFFF   // arbitrary minimum

int main(void)
{
    unsigned int required = (unsigned int)-1; // adapt to native uint
    char *mem = NULL; 
    while (mem == NULL) {
        printf ("Required %X\n", required);
        mem = malloc (required);
        if ((required >>= 1) < MINREQ) {
            if (mem) free (mem);
            printf ("Cannot allocate enough memory\n");
            return (1);
        }
    }

    free (mem);
    mem = malloc (required);
    if (mem == NULL) {
        printf ("Cannot enough allocate memory\n");
        return (1);
    }
    printf ("Memory size allocated = %X\n", required);
    free (mem);
    return 0;
}
