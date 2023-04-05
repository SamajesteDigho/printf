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
/* d - As integers are concerned */
case 'd':
return (0);
break;
/* i - As integers are concerned */
case 'i':
return (0);
break;
/* s - As string are concerned */
case 's':
return (0);
break;
/* S - As string with restrictions are concerned */
case 'S':
return (0);
break;
/* % - The asterix Jumper */
case '%':
return (0);
break;
/* b - The binary comparer */
case 'b':
return (0);
break;
/* o - The unsigned int comparer */
case 'o':
return (0);
break;
/* u - The unsigned decimal comparer */
case 'u':
return (0);
break;
/* x - The unsigned int in hexadecimal comparer */
case 'x':
return (0);
break;
/* X - The unsigned int in hexadecimal uppercase are comparer */
case 'X':
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
int nb;
unsigned int usi;
switch (c)
{
/* c - As characters are concerned */
case 'c':
putchar(va_arg(args, int));
return (1);
break;
/* o - As unsigned int are concerned */
case 'o':
nb = va_arg(args, int);
return (printf("%o", nb));
break;
/* u - As unsigned int decimal are concerned */
case 'u':
usi = va_arg(args, unsigned int);
printf("%u", usi);
return (count_nb_digits(usi));
break;
/* x - As unsigned int hexadecimal are concerned */
case 'x':
usi = va_arg(args, unsigned int);
return (printf("%x", usi));
break;
/* X - As unsigned int hexadecimal uppercase are concerned */
case 'X':
usi = va_arg(args, unsigned int);
return (printf("%X", usi));
break;
/* c - As integers are concerned */
case 'd':
nb = va_arg(args, int);
return (printf("%d", nb));
break;
/* c - As integers are concerned */
case 'i':
nb = va_arg(args, int);
return (printf("%d", nb));
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
/* S - As string are concerned */
case 'S':
str = va_arg(args, char*);
if (str == NULL)
{
return (print_str("(null)"));
}
else
{
return (print_str(str));
}
break;
/* b - As binary is concerned */
case 'b':
nb = va_arg(args, int);
printf("%d\n", nb);
return (count_nb_digits(nb));
}
return (0);
}

unsigned int count_nb_digits(long int value)
{
unsigned int size;
size = 0;
if (value == 0)
{
return (1);
}
while( value != 0)
{
value = value / 10;
size++;
}
return (size);
}


unsigned int print_str(char *str)
{
int i, size;
unsigned int count;
size = strlen(str);
count = 0;
for (i = 0;  i < size; i++)
{
if (str[i] > 0  && str[i] < 32)
{
printf("\\x%X", str[i]);
count += 4;
}
else
{
putchar(str[i]);
count++;
}
}
return (count);
}