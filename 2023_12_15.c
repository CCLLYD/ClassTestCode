#include<stdio.h>

int main()
{
    int tx = -10;
    unsigned ux = (unsigned)tx;
    //printf("%u\n",ux);


    //Page 56 test 2.23
    unsigned test = 0x00000076;
    unsigned test_1 = test << 24;
    printf("%u\n",test_1);
    return 0;
}