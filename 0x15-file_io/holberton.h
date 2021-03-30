#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h> /*for malloc, free, and exit*/

#include <unistd.h> /* for STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO,*/
/*ssize_t, execve, write, read, isatty*/

#include <sys/stat.h> /* for mkdir, chmod, stat*/

#include <sys/types.h> /*for types of files*/

#include <stdlib.h> /*for exit and malloc*/

#include <fcntl.h> /*for O_CREAT, O_APPEND, O_RDONLY, O_RDWR, O_WRONLY,*/
/* O_TRUNC*/

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif /* HOLBERTON_H */
