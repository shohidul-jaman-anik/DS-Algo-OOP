// Video 4

#include<stdio.h>


int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int number[55];

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&number[i]);
    }
    int  ans=0;
    for(int i=1; i<=n; i++)
    {
        if(number[i]>=number[k] && number[i]>0)
        {
            ans ++;
        }
    }
    printf("%d\n",ans);
    return 0;
}


//  VIDEO 3

//#include<stdio.h>
//
//int main()
//{
//    int number[105];
//    int n;
//    scanf("%d",&n);
//
//    int event=0;
//    int odd=0;
//    int  ans;
//    for(int  i=1; i<=n; i++)
//    {
//        scanf("%d",&number[i]);
//
//    }
//
//    for(int  i=1; i<=n; i++)
//    {
//        if(number[i]%2==0)
//        {
//            event ++;
//        }
//        else
//        {
//            odd ++;
//        }
//    }
//    if(event==1)
//    {
//        // event er positon
//        for(int i=0; i<=n; i++)
//        {
//            if(number[i]%2==0)
//            {
//                ans=i;
//            }
//        }
//    }
//    else
//    {
//        // odd er positon
//        for(int i=0; i<=n; i++)
//        {
//            if(number[i]%2!=0)
//            {
//                ans=i;
//            }
//        }
//    }
//    printf("%d",ans);
//
//    return 0;
//}




// video 1

//#include<stdio.h>
//
//int main()
//{
//    int n,a,b,c;
//    scanf("%d",&n);
//
//    int count =0;
//    for(int i=0; i<n; i++)
//    {
//        scanf("%d %d %d",&a,&b,&c);
//        if(a+b+c>=2)
//        {
//            count ++;
//        }
//    }
//    printf("%d",count);
//
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int n,a;
//    scanf("%d",&n);
//
//    int count =0;
//    for(int i=0; i<n; i++)
//    {
//        int solved =0;
//        for(int  j=0; j<3; j++)
//        {
//            scanf("%d",&a);
//            if(a==1)
//            {
//                solved ++;
//            }
//        }
//        if(solved>=2)
//        {
//            count ++;
//        }
//    }
//    printf("%d",count);
//
//    return 0;
//}


// video 2


//#include<stdio.h>
//
//int main()
//{
//    int n,k;
//    scanf("%d %d",&n,&k);
//
//    for(int  i=0; i<k; i++)
//    {
//
//        if(n%10==0)
//        {
//            n=n/10;
//        }
//        else
//        {
//            n=n-1;
//        }
//    }
//    printf("%d",n);
//
//    return 0;
//}







