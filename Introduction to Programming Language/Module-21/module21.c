// Video-5

#include<stdio.h>

int  seven_present(int n);
int  dsum(int n);
int  last_prime(int n);

int main()
{
    int n;
    scanf("%d",&n);

    if(seven_present(n)==1 && dsum(n)>10 && last_prime(n)==1)
    {
        printf("Farhan's Number");
    }
    else
    {
        printf("No");
    }

    return 0;
}


int  seven_present(int n)
{
    while(n>0)
    {
        if(n%10==7)
        {
            return 1;
        }
        else
        {
            n/=10;
        }
    }
    return 0;
}
int  dsum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum +=(n%10);
        n/=10;
    }
    return sum;
}
int  last_prime(int n)
{
    int ld =n%10;
    if(ld==2 || ld==3|| ld==5||ld==7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}








// 21-4 Factorial Function
//#include<stdio.h>
//
//int fact(int x);
//
//int main()
//{
//    int n,r;
//    scanf("%d %d",&n,&r);
//    int per=fact(n)/fact(n-r);
//    int comb=fact(n)/ (fact(n-r) * fact(r));
//    printf("nPr = %d\n",per);
//    printf("nCr = %d",comb);
//
//    return 0;
//}
//
//int fact(int x)
//{
//    int res=1;
//    for(int i=1; i<=x; i++)
//    {
//        res =res*i;
//    }
//    return res;
//}



// 21-3 Nested Function Calls

//#include<stdio.h>
//#include<math.h>
//
//float f(int x, int y);
//int absolute(int x);
//
//int main()
//{
//    int x,y;
//    x=12;
//    y=24;
//    float ans;
//    ans = f(x,y);
//    printf("%f", ans);
//
//    return 0;
//}
//
//float f(int x, int y)
//{
//
//    int tempans = absolute(x-3) + (y+4)+(y+4);
//    return sqrt(tempans);
//
//}
//
//int absolute(int x){
//   if(x>=0){
//    return x;
//   }else{
//   return (-1)*x;
//   }
//
//}




//#include<stdio.h>
//
//int max_of_three(int x, int y, int z)
//{
//    if(x>y && x>z)
//        return x;
//    else if(y>x && y>z)
//        return y;
//    else
//        return z;
//
//}
//
//int main()
//{
//    int a,b,c,max;
//    for(int i =0; i<10; i++)
//    {
//        scanf("%d %d %d",&a,&b,&c);
//        max=max_of_three(a,b,c);
//        printf("The maximum value is %d \n",max);
//    }
//    return 0;
//}
