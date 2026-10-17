#include<stdio.h>

int Addition(int No1, int No2)

{
    int result = 0;
    result = No1 + No2;
    return result;
    
}

int main ()

{

    int value1 = 0, value2 = 0, Ans = 0;

    printf("Enter First Number : \n");
    scanf("%d",&value1);
    
    printf("Enter Second Number : \n");
    scanf("%d",&value2);

    Ans = Addition(value1,value2);

    printf("Addition is %d\n", Ans);

    return 0;

}