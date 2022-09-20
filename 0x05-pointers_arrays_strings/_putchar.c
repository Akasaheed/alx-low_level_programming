#include <unistd.h>

/**
 * _putchar - writes charater cto stdout
 * @c:the charater to print
 *
 * Return: on success 1
 * om error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
