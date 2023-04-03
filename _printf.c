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
int i;

if (format == NULL)
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
putchar('%');
i++;
}
else
{
i++;
print_text_formatted(format[i], args);
}
}
else
{
putchar(format[i]);
}
i++;
}
putchar('\0');
return (i);
}
