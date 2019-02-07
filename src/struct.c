#include <stdio.h>
#include "struct_student.h"

struct Point
{
    int x;
    int y;
};

int main(void)
{
    struct Point p1 = {0, 0};
    printf("x:\n");
    scanf("%i", &(p1.x));
    printf("y:\n");
    scanf("%i", &(p1.y));
    printf("x is %i & y is %i\n", p1.x, p1.y);

    printf("=========== NEW ONE =========\n");

    Student s1;
    printf("Student name:\n");
    scanf("%s", s1.name);
    printf("Age:\n");
    scanf("%d", &(s1.age));
    printf("Student %s is of age %i.\n", s1.name, s1.age);

    return 0;
}
