#include<stdio.h>
#include<string.h>

typedef unsigned char *byte_pointer;

typedef unsigned int *int_pointer;

void show_bytes(byte_pointer start , size_t len)
{
    size_t i;
    for(i = 0;i < len;i++)
    {
        printf("%.2x\n",start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer)&x,sizeof(x));
    //show_bytes((byte_pointer)&x,2);
    //show_bytes((byte_pointer)&x,3);
}

void show_char(char t)
{
    show_bytes(&t,sizeof(char));
}

int main()
{
    const char *s = "abcdef";
    //show_bytes((byte_pointer)s,strlen(s));
    int a = 10;
    printf("%p\n",&a);
    int_pointer test = &a;
    printf("%.2x\n",test[0]);

    int *p = &a;
    printf("%.2x\n",p[0]);
    return 0;
}