#include <stdio.h>
/**
 *main - print all unique combinatons of three digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k, l;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = i; k < 10; k++)
{
for (l = 0; l < 10; l++)
{
if (i != k || j < l)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
if (((i + j + k + l) < 35) || (((i + j + k + l) == 35) &&  i < j))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');

return (0);
}
