#include<stdio.h>


int main()
{
    int n,w,sum;
    printf("Enter the number of passenger ");
    scanf("%d",&n);

    for(int i =0; i<n; i++)
    {
        scanf("%d",&w);
        sum +=w;
    }
    printf("total sum  of weight %d",sum);
    return 0;
}
