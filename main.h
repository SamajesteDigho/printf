#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int valid_formatter_character(char c);

void print_text_formatted(char c, va_list args);

#endif /* MAIN_H */
