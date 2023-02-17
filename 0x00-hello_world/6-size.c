#include <stdio.h>
/**
 * main - A program that prints the sizes of computer types
 * Return: Always 0(Success)
 *
 */
int main(void);
{
int a;
char b;
float c;
printf("The size of int is: %lu byte(s)\n", (sizeof(a)));
printf("The size of char is: %lu byte(s)\n", (unsigned long)(sizeof(b)));
printf("The size of float is: %lu byte(s)\n", (unsigned long)(sizeof(c)));
char name[] = "ALX School";
puts("\"My name is Techman");
putchar(name[0]);
putchar('\n');
return (0);
}
