
//#include<stdio.h>
//
//
//int main()
//{
//    int n=8;
//    int number[8]= {20,8,17,5,3,6,5,14};
//
//    int min =number[0];
//    int sort_num[8];
//    int min_ind=0;
//    for(int i=0; i<n; i++)
//    {
//        if(min>number[i])
//        {
//            min=number[i];
//            min_ind=i;
//        }
//    }
//    sort_num[0]=min;
//    number[min_ind]=999;
//
//    for(int i=0; i<n; i++)
//    {
//        printf("%d ",min);
//    }
//
//    return 0;
//}



//#include<stdio.h>
//
//
//int main()
//{
//    int n=8;
//    int number[8]= {20,8,17,5,3,6,5,14};
//    int sort_num[8];
//    int min,min_ind;
//    for(int j=0; j<n; j++)
//    {
//        min =number[0];
//        min_ind=0;
//        for(int i=0; i<n; i++)
//        {
//            if(min>number[i])
//            {
//                min=number[i];
//                min_ind=i;
//            }
//        }
//        sort_num[j]=min;
//        number[min_ind]=999;
//
//
//    }
//    for(int i=0; i<n; i++)
//    {
//        printf("%d ",sort_num[i]);
//    }
//    printf("\n");
//
//
//    return 0;
//}



//
//#include<stdio.h>
//
//
//int main()
//{
//    int n=8,temp;
//    int number[8]= {10,8,12,15,13,6,5,14};
//
//    for(int j=0; j<(n-1); j++)
//    {
//        for(int i=0; i<n-1; i++)
//        {
//            if(number[i]>number[i+1])
//            {
//                temp=number[i];
//                number[i]=number[i+1];
//                number[i+1]=temp;
//            }
//        }
//
//    }
//
//    for(int i=0; i<n; i++)
//    {
//        printf("%d ",number[i]);
//    }
//    printf("\n");
//
//
//    return 0;
//}


// video-3

//
//#include<stdio.h>
//
//int main()
//{
//    int x,y;
//    int arr[5][5];
//    for(int i=0; i<5; i++)
//    {
//        for(int j=0; j<5; j++)
//        {
//            scanf("%d",&arr[i][j]);
//
//            if(arr[i][j]==1)
//            {
//                x=i;
//                y=j;
//            }
//        }
//    }
//    int row_change,col_change;
//    if(x>2)
//    {
//        row_change=(x-2);
//    }
//    else
//    {
//        row_change=(2-x);
//    }
//    if(y>2)
//    {
//        col_change=(y-2);
//    }
//    else
//    {
//        col_change=(2-y);
//    }
//    int ans=row_change+col_change;
//    printf("%d",ans);
//
//    return 0;
//}
//

// video 4

#include<stdio.h>

int main()
{
    char s[102];

    fgets(s,sizeof(s),stdin);

    for(int i=0; i<strlen(s)-1; i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
          s[i]+=32;
        }
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'||s[i]=='u'){
            //do nothing
        }
        else{
            printf(".%c",s[i]);
        }
    }

    return 0;
}























