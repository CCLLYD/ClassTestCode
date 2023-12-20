#include<stdio.h>

size_t strlen(const char* s);

int strlonger(char* s , char* t)
{
    int length_1 = strlen(s);
    int length_2 = strlen(t);

    if(length_1 - length_2 > 0)
    {
        printf("%d\n",1);
    }
    else{
        printf("%d\n",0);
    }
}

int main()
{
    char myString2[] = "Hell";
    char myString3[] = "Hello";

    strlonger(myString2,myString3);

    return 0;
}