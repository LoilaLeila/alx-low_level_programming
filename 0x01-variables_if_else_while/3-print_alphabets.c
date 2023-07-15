#include <stdio.h>

/**
* main - Entry Point
* Return: Always 0 (Success)
*/
int main(void)
{
char c = 'a';
char g = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (g <= 'Z')
{
putchar(g);
g++;
}
putchar('\n');
return (0);
}
