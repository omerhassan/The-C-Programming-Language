#include <stdio.h>

/* Exercise 2-5. Write the function any(s1, s2), which returns the first location
   in the string s1 where any character from the string s2 occurs, or -1 if s1
   contains no characters from s2. (The standerd libarary function strpbrk does
   the same job but returns a pointer to the location.) */

int any(char s1[], char s2[])
{
    int i, j;

    for (i = 0; s2[i] != '\0'; i++)
        for (j = 0; s1[j] != '\0'; j++)
            if (s1[j] == s2[i])
                return j;
    return -1;
}