#include<stdio.h>

int main()
{
    int n=5;
    int number[n];
    for(int i=0; i<=n; i++)
    {
        scanf("%d",&number[n]);
    }
    int max=number[0];
    for(int i=0; i<=n; i++)
    {
        if(number[i]>n)
        {
            max=number[i];
        }
    }
    printf("The maximum value is %d\n",max);
    return 0;
}

