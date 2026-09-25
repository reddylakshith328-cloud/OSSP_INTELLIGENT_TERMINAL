k# ShellForge – Intelligent Linux Terminal

A simple Linux terminal shell developed using C.

## Week 1 – REPL Loop and Repository Setup

- Basic shell and REPL loop
- User input handling
- `exit` command
- Makefile
- Git repository setup

## Week 2 – Dynamic Input Handling

- Dynamic input buffer
- `malloc()`
- `realloc()`
- `free()`
- Supports longer user input

## Week 3 – Command Parser

- Command parsing using `strtok()`
- Token generation
- Dynamic token array
- `argv[]` style command arguments
- Memory cleanup

## Week 4 – Process Execution

- Process creation using `fork()`
- Command execution using `execvp()`
- Parent process synchronization using `waitpid()`
- Error handling using `perror()`
- Executes real Linux commands

## Week 5 – Built-in Commands and Environment Variables

- `cd` command
- `pwd` command
- `help` command
- `clear` command
- `exit` command
- `env` command
- Environment variable support

## Project Structure

```text
OSSP_INTELLIGENT_TERMINAL/
├── bin/
├── docs/
├── include/
├── screenshots/
├── src/
├── tests/
├── Makefile
└── README.md
