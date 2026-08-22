#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "input.h"

int main(void)
{
    printf("========================================\n");
    printf(" Welcome to Intelligent Linux Terminal\n");
    printf("             Version 2.0\n");
    printf("========================================\n");

    while (1)
    {
        printf("myshell> ");

        char *input = read_input();

        if (strcmp(input, "exit") == 0)
        {
            printf("Exiting Intelligent Linux Terminal...\n");
            free(input);
            break;
        }

        printf("You entered : %s\n", input);

        free(input);
    }

    return 0;
}
