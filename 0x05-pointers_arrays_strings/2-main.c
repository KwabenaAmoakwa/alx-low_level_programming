#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str, *hol;
    int len;

    str = "My first strlen!";
    hol = "Holberton!";
    len = _strlen(str);
    printf("%d\n", len);
    len = _strlen(hol);
    printf("%d\n", len);
    return (0);
}
