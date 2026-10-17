#include<stdio.h>

union Demo
{
   int i;
   char ch;
};

int main()
{
    union Demo dobj;

    dobj.i = 65;

    printf("%c\n",dobj.ch);
    printf("%d\n",dobj.i);

    return 0;
}