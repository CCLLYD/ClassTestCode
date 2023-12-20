#include<stdio.h>

float sum_elements(float* arr,unsigned length)
{
    int i;
    float result = 0;

    for(i = 0;i <= length; i++)
    {
        result = result + arr[i];
    }
    
    return result;
}

int main()
{
    float array[] = {};
    sum_elements(array , 0);

    int emptyArray[0];
    printf("Size of emptyArray: %lu bytes\n", sizeof(emptyArray));

    return 0;
}


//结论就是使用无符号做加减法时要注意是否出现问题。