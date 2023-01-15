//#include<bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int sum=0;
//    for(int i=0; i<=n; i++)
//    {
//        sum=sum+i;
//    }
//    cout<<sum;
//    return 0;
//}




#include<bits/stdc++.h>


using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector <int>number(n);

    for(int i=0; i<n; i++)
    {
        cin>>number[i];
    }
    int low=0;
    int high=n-1;
    bool flag=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        cout<<"low ="<<low <<"high = "<<high <<"mid ="<<mid <<"\n";
        if(number[mid]==k)
        {
            cout<<"Yes "<<mid<<"\n";
            flag=1;
            break;
        }
        if(number[mid]>k)
        {
            high=mid-1;
        }
        else
        {
            //a[mid]<k
            low=mid+1;
        }
    }
    if(flag==0)
    {
        cout<<"No \n";
    }
    cout<<"\n";

    return 0;
}







