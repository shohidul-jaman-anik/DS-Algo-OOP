#include<stdio.h>


int main()
{
    int n,time;
    scanf("%d",&n);
    int charge[n];

    for(int i =0; i<n; i++)
    {
        scanf("%d",&charge[i]);
    }

    for(int i=0; i<n; i++)
    {
        int crg =charge[i];
        if(crg>80&&crg<100)
        {
            time=( 100-crg )*3;
        }

        else if(crg>60&&crg<80)
        {
            int first =(80-crg)*2;
            int second=(100-first)*3;
            time =first + second;
        }
        else if(crg<60&&crg<100)
        {
            int first =60-crg;
            int second = (80- first)*2;
            int third = (100-second)*3;
            time=first +second + third;
        }
        printf("%d m\n",time);
    }

    return 0;
}

