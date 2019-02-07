#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// function prototypes
int string_length(char str[]);

// main
int main(void)
{
    char str[100];
    char *s = NULL;
    int strlen = 0;

    printf("Enter string (max 100 chars):\n");
    scanf("%s", str);

    strlen = string_length(str);
    s = str;

    if (!s)
    {
        return 1;
    }

    // allocate memory for another string
    char *t = malloc((strlen + 1) * sizeof(char));
    if (!t)
    {
        return 1;
    }

    // copy the string
    strcpy(t, s);
    // for (int i = 0; i < strlen + 1; i++)
    // {
    //     t[i] = s[i];
    // }

    // capitalize
    if (strlen > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("The capitalized string for %s is %s !\n", str, t);

    // free the mem
    free(t);

    return 0;
}

// string length function
int string_length(char str[])
{
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    return len;
}