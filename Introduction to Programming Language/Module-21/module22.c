// Video no 4
#include<stdio.h>

int sum_numbers(int x,int number[])
{
    int sum=0;
    for(int i=0; i<x; i++)
    {
        sum=sum+number[i];
    }

    return sum;
}

int main()
{
    int number[]= {44,66,88,5,88,68,66,88,555};

    int ans=sum_numbers(9,number);

    printf("The sum of numbers is %d",ans);

    return 0;
}









// Video no 3
//#include<stdio.h>
//
//int is_vowel(int x)
//{
//
//    if(x=='a'|| x=='e'||x=='i'||x=='o'||x=='u')
//    {
//        return 1;
//    }
//
//    return 0;
//}
//
//int main()
//{
//    int n;
//    scanf("%c",&n);
//
//    if(is_vowel(n)==1)
//    {
//        printf("The character is vowel \n");
//    }
//    else
//    {
//        printf("The character is consonant \n");
//    }
//
//    return 0;
//}




// Video no 2
//#include<stdio.h>
//
//int is_prime(int x)
//{
//    for(int i=2; i<x; i++)
//    {
//        if(x%i==0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//
//    int n;
//    scanf("%d",&n);
//
//    if(is_prime(n)==1)
//    {
//        printf("%d is a prime number \n",n);
//    }
//    else
//    {
//        printf("%d is a composite number \n",n);
//    }
//
//    return 0;
//}

