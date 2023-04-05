#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int valid_formatter_character(char c);

int print_text_formatted(char c, va_list args);

unsigned int count_nb_digits(long int value);

char *decimal_to_binary(int val);

char *reverse_recopy(char str[], int size);

char *strrev(char *str);

unsigned int print_str(char *str);

#endif /* MAIN_H */
