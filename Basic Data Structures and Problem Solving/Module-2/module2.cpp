#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int>a= {33,12,5,9,66,54,18,77,18};

    sort(a.begin()+0, a.begin()+5+1);

    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}


//#include<bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    int a=4, b=10;
//    int ans1=min(a,b);
//    int ans2=max(a,b);
//    cout<<ans1<< " "<<ans2;
//    return 0;
//}



//#include<bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    vector <int> a={1,2,3};
//    a.resize(5);
//    for(int i=0; i<a.size(); i++)
//    {
//        cout<<a[i];
//    }
//    return 0;
//}


//#include<bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    vector <int> a;
//    for(int i=0; i<10; i++)
//    {
//        cout<<"Before push"<<a.size()<<"\n";
//        a.push_back(i);
//        cout<<"After push"<<a.size()<<"\n";
//    }
//    a.insert(a.begin()+0,100);
//    for(int i=0; i<a.size(); i++)
//    {
//        cout<<a[i];
//    }
//    return 0;
//}


//#include<bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    vector <int> a;
//
//    a.push_back(1);
//    a.push_back(2);
//    a.push_back(3);
//
//    for(int i=0; i<a.size(); i++)
//    {
//        cout<<a[i];
//    }
//    return 0;
//}


//#include<bits/stdc++.h>
//
//using namespace std;
//
//string erase_first_last(string n)
//{
//    n.erase(n.begin());
//    n.pop_back();
//    return n;
//}
//int main()
//{
//    string s;
//    getline(cin ,s);
//
//    string ans = erase_first_last(s);
//    cout<<ans;
//    return 0;
//}


//#include<bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    string a;
//   // cin>>a;
//    getline(cin,a);
//    a.erase(a.begin());
//    a.pop_back();
//
//    cout<<a;
//    return 0;
//}



//#include<bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    string a= "I am eating rice. ";
//    a.erase(a.begin()+0);
//    cout <<a;
//    return 0;
//}



//#include<bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    int number[5];
//
//    for(int  i=0; i<5; i++)
//    {
//        cin>>number[i];
//
//    }
//    int  sum=0;
//    for(int  i=0; i<5; i++)
//    {
//        sum=sum+number[i];
//
//    }
//    cout <<sum;
//    return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//int x=5,y,z;
//int func(int a, int b)
//{
//    return a+b;
//}
//namespace Info
//{
//int x=10;
//}
//int main()
//{
//    cout <<x<<"\n";
//    cout<<Info::x ;
//
//    return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    double x=4.4444;
//    cout <<setprecision(2)<<fixed<<x;
//    return 0;
//}



//-------------- Objective ----------------

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    vector<int> v= {2,5,1,9,7};
//    reverse(v.begin(),v.end());
//
//    for(int i=0; i<v.size(); i++)
//        cout << v[i] << " ";
//    cout << '\n';
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    string s="2997";
//    s+="11";
//    cout << s.size() << '\n';
//
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    vector<int> v= {2,9,1,3,7};
//
//    sort(v.begin()+1,v.begin()+3);
//
//    for(int i=0; i<v.size(); i++)
//        cout << v[i] << " ";
//    cout << '\n';
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    vector<int> v(10);
//    return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    string s="abcde";
//    s.erase(s.begin()+(2-2));
//
//    cout << s << '\n';
//    return 0;
//}

