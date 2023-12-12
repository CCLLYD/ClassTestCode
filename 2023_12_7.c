#include<stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int c = a ^ b;
    printf("%d\n",c);

    int *p = &a;
    printf("%d\n",p&&a);
    return 0;
}