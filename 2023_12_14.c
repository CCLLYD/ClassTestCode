//Page 40 test 2.15
#include<stdio.h>

int main()
{
    int x , y;
    scanf("%d %d",&x,&y);
    if((x & y) == x && (x & y) == y)
    {
        printf("%d\n",1);
    }
    else
        printf("%d\n",0);
    return 0;
}