#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints a line to the standard error
 * Return: return 1 (Success)
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str, sizeof(str));
return (1);
}
