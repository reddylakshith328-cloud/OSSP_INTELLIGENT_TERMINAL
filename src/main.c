#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "input.h"
#include "parser.h"
#include "process.h"
#include "builtin.h"
#include "signals.h"

int main()
{
    char *line;
    char **tokens;

    initialize_signals();

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

        if (execute_builtin(tokens) == 0)
        {
            execute(tokens);
        }

        free_tokens(tokens);
        free(line);
    }

    return 0;
}
