#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
int _isupper(int c);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _islower(int c);
int _strcmp(char *s1, char *s2);
int _isalpha(int c);
char *_strcpy(char *dest, char *src);
int _isdigit(int c);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
void _puts(char *str);
int _abs(int c);
char *_strchr(char *s, char c);
int _atoi(char *s);

#endif /*MAIN_H*/
