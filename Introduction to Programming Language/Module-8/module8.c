#include<stdint.h>

int main()
{
    int biggest1,biggest2,temp,n=6;
    int number[n];
    printf("Please enter 6 input: ");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&number[i]);
    }
    biggest1 =number[0];
    biggest2=number[1];

    if(biggest1<biggest2)
    {
        temp=biggest1;
        biggest1=biggest2;
        biggest2=temp;
    }

    for(int i=2; i<n; i++)
    {
        if(number[i]>=biggest1)
        {
            biggest2=biggest1;
            biggest1=number[i];
        }
        else if(number[i]>=biggest2)
        {
            biggest2=number[i];
        }


    }
    printf("%d is the first biggest number\n",biggest1);
    printf("%d is the second biggest number\n",biggest2);


    return 0;

}
