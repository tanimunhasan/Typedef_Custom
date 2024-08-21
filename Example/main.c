#include<stdio.h>

typedef struct details
{
    int age;
    int id;
}student;

int main()
{
    student u1;
    printf("Example of Typedef in c\r\n");
    u1.age = 21;
    u1.id = 21701;
    printf("Age of the student is: %d\n",u1.age);
    printf("ID of the student is: %d\n",u1.id);
    return 0;
}
