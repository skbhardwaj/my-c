#include <stdio.h>

// function prototypes
int string_length(char str[]);

// main
int main(void)
{
    char str[100];
    printf("Enter string (max 100 chars):\n");
    scanf("%s", str);
    printf("Length of %s is %i !\n", str, string_length(str));
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
