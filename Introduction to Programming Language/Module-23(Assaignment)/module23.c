//#include<stdio.h>
//
//int  main()
//{
//    char story[100];
//    fgets(story,sizeof(story),stdin);
//
//    for(int i=0; story[i]!='\0'; i++)
//    {
//        if(story[i]>='a'&& story[i]<='z')
//        {
//            story[i]=story[i]-32;
//        }
//        else
//        {
//            story[i]=story[i]+32;
//        }
//    }
//    puts(story);
//
//    return 0;
//}



//#include<stdio.h>
//
//int  main()
//{
//    int n;
//    scanf("%d",&n);
//    int number[n];
//
//    for(int i=1; i<=n; i++)
//    {
//       if(i%2==0){
//        number[i]=i;
//       }
//       else{
//        number[i]=i;
//       }
//    }
//    for(int i=1; i<=n; i++)
//    {
//        printf("%d ",number[i]);
//    }
//
//    return 0;
//}

//#include<stdio.h>
//void fun(int n)
//{
//    if(n>0)
//    {
//        fun(n-1);
//        printf("%d ",n);
//    }
//}
//int main()
//{
//    int x=4;
//    fun(x);
//    return 0;
//}


//#include<stdio.h>
//int value=2;
//void foo(int n)
//{
//    value*=2;
//}
//int main()
//{
//    printf("%d \n",value);
//    return 0;
//}

#include<stdio.h>
int value=3;
void foo(int n)
{
    value*=2;
}
int main()
{
    printf("%d \n",value);
    foo(2);
    return 0;
}
