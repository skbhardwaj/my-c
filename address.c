#include <stdio.h>

// function prototypes
void *get_location(char str[]);

// main
int main(void)
{
    char str[100];
    printf("Enter string (max 100 chars):\n");
    scanf("%s", str);
    printf("Address of %s is %p !\n", str, get_location(str));

    return 0;
}

// get memory location function
void *get_location(char str[])
{
    return (void *)str;
}
