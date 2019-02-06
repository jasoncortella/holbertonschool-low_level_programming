#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 *main - print a specified string to the standard error
 *
 *Description: This function uses write to print "and that piece
  of art is useful" - Dora Korpar, 2015-10-19" to the standard error
 *Return: return (1);
 */

int main(void)
{
	int n = strlen(
		"and that piece of art is useful - Dora Korpar, 2015-10-19\n");

	/* Note that n = 58 in this particular case.  If changing the string
	 * below, the string above must exactly match
	 */

	write(2,
	      "and that piece of art is useful - Dora Korpar, 2015-10-19\n", n);

	return (1);
}
