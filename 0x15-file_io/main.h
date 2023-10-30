#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void write_error_to(int fd_from, int fd_to, char *filename);
void read_error_to(int fd_from, int fd_to, char *filename);
void close_error_to(int fd);

#endif /* MAIN_H */
