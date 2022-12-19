#include<stdio.h>
int foo(int n)
{
    if(n==0)
        return 0;
    return foo(n-1)+n;
}
int main()
{
    printf("%d\n",foo(6));
    return 0;
}

//#include<stdio.h>
//int foo(int n)
//{
//    if(n==0)
//        return 0;
//    return foo(n-1)+n;
//}
//int main()
//{
//    printf("%d\n",foo(6));
//    return 0;
//}

//#include<stdio.h>
//void display(int n)
//{
//    if(n>0)
//    {
//        display(n-1);
//        printf("%d ",n);
//    }
//}
//int main()
//{
//    int x=5;
//    display(x);
//    return 0;
//}


//#include<stdio.h>
//void display(int n)
//{
//    if(n>0)
//    {
//        printf("%d ",n);
//        display(n-1);
//    }
//}
//
//int main()
//{
//    int x=5;
//    display(x);
//    return 0;
//}


