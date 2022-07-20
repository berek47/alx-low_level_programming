#include "main.h"

/**
<<<<<<< HEAD
 *  *  * _puts_recursion - prints a string, followed by a new line.
 *   *   * @s: string
 *    *    * Return: no return.
 *     **/
void _puts_recursion(char *s)
{
		if (*s != '\0')
				{
							_putchar(*s);
									_puts_recursion(s + 1);
										}
			else
						_putchar('\n');
=======
 *  * _puts_recursion - prints a string, followed by a new line.
 *   * @s: string
 *    * Return: no return.
 **/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
>>>>>>> a13c70b20d6458ccb36b40cca61021214ac733f0
}
