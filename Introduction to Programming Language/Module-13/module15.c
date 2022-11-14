#include<stdio.h>



int main()
{
    int n=15;
    int number[n];
    for (int i=0; i<=n; i++)
    {
        //Write Code Here
        number[i]=number[i]*2;
    }

    for (int i=0; i<=n; i++)
    {
        //Write Code Here
        printf("%d ",number[i]);
    }
    return 0;
}
