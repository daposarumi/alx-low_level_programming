#include "main.h"
#include "stdio.h"
#include "unistd.h"

/**
 * main - Entry point
 * Description: prints _putchar followed by new line
 * Return: 0
*/


int main(void)
{
int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
int i;

for (i = 0; i < 8; i++)
{
putchar(str[i]);
}
putchar('\n');
return (0); }