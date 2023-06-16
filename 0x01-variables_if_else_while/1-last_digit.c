#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, len, lasts;
char nu[100], last;
srand(time(0));
n = rand() - RAND_MAX / 2;
sprintf(nu, "%d", n);
len = strlen(nu);
last = nu[len - 1];
lasts = last - '0';

if (lasts > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lasts);
}
else if (lasts == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lasts);
}
else if (n < 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasts);
}
return (0);
}
