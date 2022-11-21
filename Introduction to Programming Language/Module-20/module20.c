#include<stdio.h>

int is_prime(int x)
{
    if(x==1){
        return 0;
    }
    int i;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;

}

int main()
{
    int a,ans;
    scanf("%d",&a);

    ans=is_prime(a);

    if(ans==1)
    {
        printf("%d is a prime number \n",a);
    }
    else
    {
        printf("%d is a composite number \n",a);

    }

    return 0;
}



// GCD

//#include<stdio.h>
//
//int my_gcd(int x,int y)
//{
//    int i;
//    for(int i=x; i>=1; i--)
//    {
//        if(x%i==0 && y%i==0)
//        {
//            return i;
//        }
//    }
//
//}
//
//int main()
//{
//    int a,b,ans;
//    scanf("%d %d",&a,&b);
//    ans=my_gcd(a,b);
//
//    printf("The GCD is: %d",ans);
//
//    return 0;
//}


//#include<stdio.h>
//
//int  myfunction(int x)
//{
//    printf("Pera nai chill !");
//    return x*2;
//}
//
//int main()
//{
//    int a= myfunction(5);
//    printf("%d \n",a);
//
//    int b= myfunction(10);
//    printf("%d \n",b);
//    return 0;
//}



//#include<stdio.h>
//int addition();
//
//int main()
//{
//    int result;
//    result = addition();
//    printf("%d",result*2);
//    return 0;
//}
//
//
//int addition()
//{
//    int num1 = 10, num2 = 5;
//    return num1+num2;
//}


//#include<stdio.h>
//
//void getSum()
//{
//    int a=10,b=5;
//    printf("%d",a+b);
//}
//int main()
//{
//    printf("ok");
//    return 0;
//}

//#include<stdio.h>
//
//
//int getMultiplication()
//{
//    int a=10,b=5;
//    return (a*3);
//}
//int main()
//{
//    int ans=getMultiplication();
//    printf("%d",ans);
//    return 0;
//}

//#include<stdio.h>
//
//
//int getMultiplication(int value1,int value2)
//{
//    int a=value1,b=value2;
//    return (value1*value2);
//}
//int main()
//{
//    printf("2");
//    int ans=getMultiplication(11,2);
//    printf("%d\n",ans);
//    return 0;
//}

























