#include <stdio.h>
#include <string.h>

int main()
{
    char input[1024];

    printf("========================================\n");
printf(" Welcome to Intelligent Linux Terminal\n");
printf("             Version 1.0\n");
printf("========================================\n");

    while (1)
    {
        printf("myshell> ");

        if (fgets(input, sizeof(input), stdin) == NULL)
            break;

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0)
        {
            printf("Exiting Intelligent Linux Terminal...\n");
            break;
        }

        printf("You entered : %s\n", input);
    }

    return 0;
}
