#include <unistd,h>

/**
 * _putcher - writes the character c to stdout
 * @c: The character to print
 * Return: on the success 1.
 * on error, -1 is returned, the error is set apprpriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}	
