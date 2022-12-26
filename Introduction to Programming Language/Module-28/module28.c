#include<stdio.h>

int  main()
{
    int  a=4, *pi;
    double b=9.55, *pd;

    pi=&a;
    pd=&b;

    printf("%d %lf \n",a,b);
    printf("%p %p",pi,pd);
    return 0;
}






//#include<stdio.h>
//
//int func(int a,int b,int* large,int* small)
//{
//
//    *large=a>b?a:b;
//    *small=a<b?a:b;
////    if(a>b)
////    {
////        *large=a;
////        *small=b;
////    }
////    else
////    {
////        *large=b;
////        *small=a;
////    }
//}
//int main()
//{
//    int a=10,b=25;
//    int  large,small;
//
//    func(a,b,&large,&small);
//    printf("%d %d",large,small);
//
//    return 0;
//}
