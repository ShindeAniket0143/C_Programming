#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40};

    int *p = (Arr[1]);      // 104
    int *q = (Arr[2]);      // 108

    printf("%d\n",p);           
    printf("%d\n",q);           

    printf("%d\n",p+2);            
    printf("%d\n",q-2);            
    printf("%d\n",q-p);

    return 0;
}