#include <stdio.h>

// K&R pg. 115
// echo command-line arguments; 1st version

int main(int argc, char **argv)
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%i%s%s", i, argv[i], (i < argc-1) ? " " : "");
    }
    printf("\n");
    return 0;
}
