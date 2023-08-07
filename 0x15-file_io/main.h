#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>

#define BUFFER_SIZE 1024

int _putchar(char c);
void displayUsageError(const char *pname);
void displayReadError(const char *fname);
void displayWriteError(const char *fname);
void copyFile(const char *from, const char *to);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
