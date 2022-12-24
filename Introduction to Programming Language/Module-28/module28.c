#include<stdio.h>

int func(int a,int b,int* large,int* small)
{

    *large=a>b?a:b;
    *small=a<b?a:b;
//    if(a>b)
//    {
//        *large=a;
//        *small=b;
//    }
//    else
//    {
//        *large=b;
//        *small=a;
//    }
}
int main()
{
    int a=10,b=25;
    int  large,small;

    func(a,b,&large,&small);
    printf("%d %d",large,small);

    return 0;
}
