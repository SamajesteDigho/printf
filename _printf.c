#include "main.h"
/**
 * _printf - Function name
 * @format: String to print format
 * Description: Trying to rewrite the printf function in C
 * Return: Return state of the function
 */
int _printf(const char *format, ...)
{
va_list args;
int i, size;
size = 0;
if (format == NULL || (strlen(format) == 1 && format[0] == '%'))
{
return (-1);
}
va_start(args, format);
i = 0;
while (format[i] != '\0')
{
if (format[i] == '%' && valid_formatter_character(format[i + 1]) == 0)
{
if (format[i + 1] == '%')
{
i++;
putchar('%');
size++;
}
else
{
i++;
size += print_text_formatted(format[i], args);
}
}
else
{
putchar(format[i]);
size++;
}
i++;
}
return (size);
}
