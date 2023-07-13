#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>


int _putchar(char c);
void copy_file(const char *f_from, const char *f_to);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
