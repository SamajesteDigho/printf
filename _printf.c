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

int main(void)
{
	int len, len2;

	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("L1 = %d, L2 = %d.\n", len, len2);
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}