#include<stdio.h>

int main()
{
    int N,x;
    int number[200001];
    scanf("%d",&N);

    for(i=1; i<N; i++)
    {
        scanf("%d",&x);
        number[i]=1;
    }
    for(i=1; i<=N; i++)
    {
        if(number[i]==0)
        {
            printf("%d\n",i);
        }
    }
    return  0;
}

