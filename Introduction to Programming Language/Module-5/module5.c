#include<stdio.h>


int main()
{
    int n;
    int prime=1;

    scanf("%d",&n);

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            prime=500;
        }
    }
    if(prime==1)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is a composite number", n);
    }

    return 0;
}
