#include<stdio.h>

int main()
{
    typedef int* ptr;

    ptr a;
    int x;
    x = 50;
    a = &x;
    printf("The value of x is: %d\n",x);
    printf("The value of x by pointer is: %d\n",*a);
    return 0;

}
