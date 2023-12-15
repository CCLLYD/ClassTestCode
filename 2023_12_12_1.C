#include<stdio.h>

void inplace_swap(int *x , int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[] , int cut)
{
    int first , last;
    for(first = 0 , last = cut - 1;first <= last;first++ , last--)
    {
        if(first == last)
            break;
        inplace_swap(&a[first] , &a[last]);
    }
}

int main()
{
    int array[7] = {1,2,3,4,5,6,7};
    int number = sizeof(array) / sizeof(array[0]);
    reverse_array(array , number);
    for(int i = 0;i < number;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}