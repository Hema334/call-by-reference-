/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdio.h>
void swap(int*x,int*y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=7;
    int b=5;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
}