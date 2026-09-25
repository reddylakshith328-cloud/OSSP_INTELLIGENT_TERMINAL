#include <stdio.h>
#include <stdlib.h>

#define INITIAL_BUFFER_SIZE 64

char *read_line(void)
{
    size_t size = INITIAL_BUFFER_SIZE;
    size_t length = 0;

    char *buffer = malloc(size);

    if (buffer == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    int character;

    while ((character = getchar()) != '\n' && character != EOF)
    {
        if (length + 1 >= size)
        {
            size *= 2;

            char *new_buffer = realloc(buffer, size);

            if (new_buffer == NULL)
            {
                free(buffer);
                perror("realloc");
                exit(EXIT_FAILURE);
            }

            buffer = new_buffer;
        }

        buffer[length++] = (char)character;
    }

    buffer[length] = '\0';

    return buffer;
}
