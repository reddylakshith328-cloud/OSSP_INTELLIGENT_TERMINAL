# Intelligent Linux Terminal

Intelligent Linux Terminal is a Linux-based command-line terminal developed as part of the Operating Systems and Systems Programming (OSSP) Project-Based Learning course.

The project is developed in C for Linux and progressively implements core Operating System concepts such as interactive command processing, dynamic memory management, process creation, command execution, command history, auto-suggestions, typo detection, and intelligent error guidance.

> **Intelligent Linux Terminal is an educational implementation designed to understand and demonstrate how Linux shells, processes, system calls, memory management, and command-line interaction work.**

---

## Week 1 Features

- Interactive REPL loop
- `myshell>` command prompt
- User input handling
- `exit` command
- Makefile-based build
- GCC-based compilation
- Linux development environment
- Git and GitHub version control

---

## Week 2 Features

- Dynamic command input
- Memory allocation using `malloc()`
- Automatic buffer expansion using `realloc()`
- Proper memory cleanup using `free()`
- Modular input handling using `input.c` and `input.h`
- Support for commands longer than the Week 1 fixed-size buffer

---

## Intelligent Linux Terminal Architecture

Intelligent Linux Terminal is a Linux-based command-line environment developed in **C for Linux** using **POSIX system calls and APIs**.

The project progressively develops a terminal capable of accepting user commands, processing them, executing Linux programs, maintaining command history, providing suggestions, detecting command errors, and guiding the user toward valid commands.

```text
                         USER
                          |
                          v
              +-------------------------+
              | Intelligent Linux       |
              |       Terminal          |
              +------------+------------+
                           |
                           v
                    Input Handler
                           |
                           v
                    Command Parser
                           |
                +----------+----------+
                |                     |
                v                     v
          Built-in Command     External Command
                |                     |
                v                     v
             Execute               fork()
                                      |
                              +-------+-------+
                              |               |
                              v               v
                           Parent          Child
                              |               |
                           wait()          execvp()
                              |               |
                              |            Program
                              |               |
                              +-------+-------+
                                      |
                                      v
                                    Output


        +---------------------------+
        |     Command History       |
        |                           |
        | Store previous commands   |
        | Retrieve previous input   |
        +---------------------------+


        +---------------------------+
        |    Auto-Suggestion        |
        |                           |
        | Command completion        |
        | Similar command matching  |
        +---------------------------+


        +---------------------------+
        |    Error Intelligence     |
        |                           |
        | Typo detection            |
        | Command correction        |
        | Error guidance            |
        +---------------------------+
