//#include<stdio.h>
//
//void find_max_min(int n,int number[],int* maxx,int* minn)
//{
//    *maxx=number[0];
//    *minn=number[0];
//    for(int i=0; i<n; i++)
//    {
//        if(number[i]> *maxx)
//        {
//            *maxx=number[i];
//        }
//        if(number[i]< *minn)
//        {
//            *minn=number[i];
//        }
//    }
//}
//
//int main()
//{
//    int number[]= {55,56,33,88,26,24,66,95};
//    int n= sizeof(number)/sizeof(int);
//    int  maxx,minn;
//
//    find_max_min(n,number,&maxx,&minn);
//    printf("%d %d",maxx,minn);
//
//    return 0;
//}


#include<stdio.h>

int sum_of_digit(int a)
{
    int sum=0;
    while(a>0)
    {
        sum+=(a%10);
        a/=10;
    }
    return sum;
}
int  is_prime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int sod=sum_of_digit(n);

    if(is_prime(sod)==1)
    {
        printf("Anik's number");
    }
    else
    {
        printf("No");
    }
    return 0;

}








