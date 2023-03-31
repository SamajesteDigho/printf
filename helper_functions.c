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

/* All invalid specifiers */
default:
return (1);
}
}