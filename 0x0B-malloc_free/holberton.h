#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

void simple_print_buffer(char *buffer, unsigned int size);

char *create_array(unsigned int size, char c);

void print_grid(int **grid, int width, int height);

char *_strdup(char *str);

void print_grid(int **grid, int width, int height);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

#endif /* HOLBERTON_H */
