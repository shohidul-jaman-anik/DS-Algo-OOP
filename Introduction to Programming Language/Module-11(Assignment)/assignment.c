#include<stdio.h>


int main()
{
    int n=5;
    int charge[n];
   // scanf("%d",&n);

    for(int i =0; i<=n; i++)
    {
        scanf("%d",&charge[i]);

    }
    int times[];

    for(int i=0; i<=n; i++)
    {

        if(charge[i]>80 && charge[i]<=100)
        {
            time=( 100-charge[i] )*3;

        }

        else if(charge[i]>=60 && charge[i]<80)
        {
            time=(80-charge[i])*2;
        }
        else if(charge[i]<60)
        {
            time=60-charge[i];
        }

    }
    printf("%d",time);

    return 0;
}
