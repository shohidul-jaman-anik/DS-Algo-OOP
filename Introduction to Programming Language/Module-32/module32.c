#include<stdio.h>

int solve(int i,int n)
{
    if(i>n)
    {
        return 0;
    }
    int s=solve(i+1,n);
    return s+i;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ans=solve(1,n);
    printf("%d",ans);

    return 0;
}

//#include<stdio.h>
//
//void solve(int n)
//{
//    if(n<1)
//    {
//        return;
//    }
//    printf("%d",n);
//    solve(n-1);
//}
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    solve(n);
//
//    return 0;
//}



//#include<stdio.h>
//
//void solve(int i,int n)
//{
//    if(i>n)
//    {
//        return;
//    }
//    solve(i+1,n);
//    printf("%d",i);
//
//}
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    solve(1,n);
//
//    return 0;
//}



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


