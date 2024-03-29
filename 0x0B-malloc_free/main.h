#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
char *form_word(char *string, int start_idx, int end_idx);
char **strtow(char *str);

#endif

