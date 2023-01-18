//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int n,temp;
//    cin>>n;
//    vector <int>number(n);
//
//    for(int i=0; i<n; i++)
//    {
//        cin>>number[i];
//    }
//
//    for(int i=0; i<n; i++)
//    {
//        int last=n-1-i;
//        for(int j=0; j<last; j++)
//        {
//            if(number[j]>number[j+1])
//            {
////                temp=number[j];
////                number[j]=number[j+1];
////                number[j+1]=temp;
//                swap(number[j],number[j+1]);
//            }
//        }
//    }
//    for(int i=0; i<n; i++)
//    {
//        cout<<number[i];
//    }
//    cout<<" ";
//
//    return 0;
//}


//#include<stdio.h>
//
//
//int main()
//{
//    int n=8;
//    int number[8]= {20,8,17,5,3,36,15,14};
//    int sort_num[8];
//
//    int minn, min_ind;
//    for(int i=0; i<n; i++)
//    {
//        minn =number[0];
//        min_ind=0;
//        for(int j=0; j<n; j++)
//        {
//            if(number[j]<minn)
//            {
//                minn=number[j];
//                min_ind=j;
//            }
//        }
//        sort_num[i]=minn;
//        number[min_ind]=999;
//    }
//
//    for(int i=0; i<n; i++)
//    {
//        printf("%d ",sort_num[i]);
//    }
//
//    return 0;
//}

#include<bits/stdc++.h>

using namespace std;

int  main()
{
    int n;
    cin>>n;
    vector <int>number(n);

    for(int i=0; i<n; i++)
    {
        cin>>number[i];

    }

    for(int i=1; i<n; i++)
    {
        int c_index=i;
        while(c_index>=1)
        {
            if(number[c_index-1]>number[c_index])
            {
                swap(number[c_index-1],number[c_index]);
                c_index--;
            }
            else
            {
                break;
            }
        }
    }


    for(int i=0; i<n; i++)
    {
        cout<<number[i]<<" ";
    }


    return  0;
}







