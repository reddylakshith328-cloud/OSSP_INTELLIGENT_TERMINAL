#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "input.h"
#include "parser.h"

int main(void)
{
    printf("========================================\n");
    printf(" Intelligent Linux Terminal\n");
    printf("             Version 3.0\n");
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

        char **tokens = parse_line(input);

        printf("\nParsed Tokens\n");

        for (int i = 0; tokens[i] != NULL; i++)
        {
            printf("argv[%d] = %s\n", i, tokens[i]);
        }

        free_tokens(tokens);
        free(input);
    }

    return 0;
}
