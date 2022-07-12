#include <unistd.h>

/**
 * _write - writes the string(s) to stdout
 * @s: The character to print
 * Return: on success 1, on error
 * -1, and errno is set appropriately.
 */
int _write(char s)
{
	return (write(1, &s, 1));
}
