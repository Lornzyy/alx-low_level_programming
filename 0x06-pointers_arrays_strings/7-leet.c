#include "main.h"

/**
 * leet - function to return 1337
 * @f: - param
 * Return: f
 */
char *leet(char *f)

{
char s[] = "aAeEoOtTlL";
char p[] = "4433007711";

int i = 0;
int j = 0;

while (f[i] != '\0')
{
for (j = 0; s[j] != '\0' && f[i] != s[j]; j++)
;
if (j < 10)
{
f[i] = p[j];
}
i++;
}
return (f);
}
