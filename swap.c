#include <stdio.h>

// function prototypes
void swap(int *a, int *b);

// main
int main(void)
{
    int x = 1;
    int y = 2;

    printf("x: %i, y: %i \n", x, y);
    swap(&x, &y); // addresses of variables AKA pointers
    printf("x: %i, y: %i \n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    // using dereference operator to swap the data
    // dereferencing - *x = goto that address and fetch the value
    int tmp = *a;
    *a = *b;
    *b = tmp;
}