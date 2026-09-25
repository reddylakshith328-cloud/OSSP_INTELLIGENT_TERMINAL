#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "parser.h"
#include "process.h"

int main()
{
    char *line;
    char **tokens;

    while (1)
    {
        printf("myshell> ");

        line = read_line();

        if (strcmp(line, "exit") == 0)
        {
            free(line);
            break;
        }

        tokens = parse_line(line);

        execute(tokens);

        free_tokens(tokens);
        free(line);
    }

    return 0;
}
