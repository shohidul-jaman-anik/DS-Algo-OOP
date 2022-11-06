
#include<stdio.h>

int main()
{
    int n,fench_height,height;
    scanf("%d %d",&n,&fench_height);
    int weight=0;
    for(int i=0; i<=n; i++)
    {
        scanf("%d",&height);
        if(height>fench_height)
        {
            weight +=2;
        }
        else
        {
            weight++;
        }
    }
    printf("%d\n",weight);
}
