#include "main.h"
/**
 * valid_formatter_character - Function name
 * @c: The character to verify
 * Description: This function determines if a character is a print formatter
 * Return: Returns 0 - Failed, 1 - Valid, 2 - Need second level check
 */
int valid_formatter_character(char c)
{
switch (c)
{
/* c - As characters are concerned */
case 'c':
return (0);
break;
/* c - As integers are concerned */
case 'd':
return (0);
break;
/* c - As integers are concerned */
case 'i':
return (0);
break;
/* c - As string are concerned */
case 's':
return (0);
break;
/* c - The asterix Jumper */
case '%':
return (0);
break;
/* All invalid specifiers */
default:
return (1);
}
}



/**
 * print_text_formatted - Function name
 * @c: The character to verify
 * @args: Vector of parameters
 * Description: This function determines if a character is a print formatter
 * Return: Returns 0 - Failed, 1 - Valid, 2 - Need second level check
 */
int print_text_formatted(char c, va_list args)
{
char *str;
switch (c)
{
/* c - As characters are concerned */
case 'c':
putchar(va_arg(args, int));
return (1);
break;
/* c - As integers are concerned */
case 'd':
printf("%d", va_arg(args, int));
return (1);
break;
/* c - As integers are concerned */
case 'i':
printf("%d", va_arg(args, int));
break;
/* c - As string are concerned */
case 's':
str = va_arg(args, char*);
if (str == NULL)
{
printf("(null)");
return (6);
}
else
{
printf("%s", str);
return (strlen(str));
}
break;
}
return (0);
}
