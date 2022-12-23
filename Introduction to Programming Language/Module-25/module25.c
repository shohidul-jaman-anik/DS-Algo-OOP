





//// video 3
//#include<stdio.h>
//
//int sum_of_digits(int a)
//{
//    int summ=0;
//    while(a>0)
//    {
//        summ+=(a%10);
//        a/=10;
//    }
//    return summ;
//}
//
//int is_prime(int n)
//{
//    for(int i=2; i<n; i++)
//    {
//        if(n%i==0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int sod=sum_of_digits(n);
//
//    if(is_prime(sod)==1)
//    {
//        printf("Anik's number");
//    }
//    else
//    {
//        printf("No");
//    }
//
//    return  0;
//}



// video 2

//#include<stdio.h>
//void find_max_min(int n, int nums[],int* p, int* q)
//{
//    *p=nums[0];
//    *q =nums[0];
//    int i;
//    for(int i=0; i<n; i++)
//    {
//        if(nums[i]> *p)
//        {
//            *p=nums[i];
//        }
//        if(nums[i]< *q)
//        {
//            *q=nums[i];
//        }
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int ara[]= {55,66,56,44,22,88,63,33};
//    int  n =sizeof(ara)/sizeof(int);
//    int  maxx, minn;
//
//    find_max_min(n, ara, &maxx, &minn);
//
//    printf("%d %d ", minn,maxx);
//    return  0;
//}



// video 1

//#include<stdio.h>
//void print_hash(int n)
//{
//    for(int i=0; i<n; i++)
//    {
//       printf("*");
//    }
//    printf("\n");
//}
//
//int main()
//{
//
//    for(int i=0; i<7; i++)
//    {
//        print_hash(i);
//    }
//    return  0;
//}











//#include<stdio.h>
//
//int main()
//{
//    int number[9] = {1,2,3,4,5,6,7,8,9};
//
//    for(int i=0; i<9; i++)
//    {
//        printf("%p\n",&number[i]);
//    }
//    return  0;
//}


#include<stdio.h>

void swap(int* x, int* y)
{
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=5,b=7;
    int* x;
    printf("%d %d \n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);

    return  0;
}



