# ShellForge – Intelligent Linux Terminal

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

## Week 6 – Signal Handling

- `SIGINT` handling
- `SIGTSTP` handling
- `SIGCHLD` handling
- Safe handling of `Ctrl+C`
- Child process cleanup
- Prevents zombie processes

## Week 7 – Pipes and IPC

- Anonymous pipe support
- Command piping using `|`
- Inter-process communication
- `pipe()`
- `dup2()`
- Multiple process execution
- Examples such as `ls | wc` and `ps -ef | grep bash`

## Week 8 – Memory Debugging

- Memory leak detection using Valgrind
- Debugging using GDB
- AddressSanitizer support
- Defensive programming practices
- Improved error handling

## Week 9 – I/O Redirection

- File descriptor management
- Output redirection (`>`)
- Input redirection (`<`)
- Append redirection (`>>`)
- Error redirection (`2>`)
- File handling using `open()`, `close()`, and `dup2()`

## Week 10 – Threads and Concurrency

- POSIX thread support
- Background monitoring thread
- `pthread_create()`
- `pthread_join()`
- Mutex synchronization
- Race condition demonstration

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
                         USER
                          |
                          v
                  +---------------+
                  |   ShellForge   |
                  |      Shell    |
                  +-------+-------+
                          |
                          v
                   Command Parser
                          |
              +-----------+-----------+
              |                       |
              v                       v
        Built-in Command       External Command
              |                       |
              v                     fork()
          Execute                    /   \
                                    /     \
                               Parent       Child
                                 |            |
                             waitpid()      execvp()
                                 |            |
                                 |         Program
                                 |            |
                                 +-----+------+
                                       |
                                       v
                                     Output


                 +-------------------------+
                 |    Process Manager      |
                 |                         |
                 | fork / exec / waitpid   |
                 | pipes / redirection     |
                 | signals / job control  |
                 +-------------------------+

                 +-------------------------+
                 |    Resource Monitor     |
                 |                         |
                 | /proc                   |
                 | CPU                     |
                 | Memory                  |
                 | Processes               |
                 | Threads + Mutex         |
                 +-------------------------+
