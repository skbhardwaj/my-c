#include <stdio.h>

// function prototypes
void print(char str[]);

// main
int main(void)
{
    print("Hello world !\n");
    return 0;
}

// print function
void print(char str[])
{
    printf("%s", str);
}