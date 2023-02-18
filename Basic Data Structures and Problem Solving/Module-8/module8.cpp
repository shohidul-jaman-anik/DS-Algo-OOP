//#include<bits/stdc++.h>
//
//using namespace std;
//
//vector <int> merge_sort(vector<int>a)
//{
//    //base case
//    if(a.size()<=1)
//    {
//        return a;
//    }
//    int mid=a.size()/2;
//    vector<int>b;
//    vector<int>c;
//
//    for(int i=0; i<mid; i++)
//    {
//        b.push_back(a[i]);
//    }
//    for(int i=mid; i<a.size(); i++)
//    {
//        c.push_back(a[i]);
//    }
//
//    vector<int>sorted_b=merge_sort(b);
//    vector<int>sorted_c=merge_sort(c);
//
//    vector<int>sorted_a;
//    int idx1=0;
//    int idx2=0;
//    for(int i=0; i<a.size(); i++)
//    {
//        if(idx1==sorted_b.size())
//        {
//            sorted_a.push_back(sorted_c[idx2]);
//            idx2++;
//        }
//        else if(idx2==sorted_c.size())
//        {
//            sorted_a.push_back(sorted_b[idx1]);
//            idx1++;
//        }
//        else if(sorted_b[idx1]<sorted_c[idx2])
//        {
//            sorted_a.push_back(sorted_b[idx1]);
//            idx1++;
//        }
//        else
//        {
//            sorted_a.push_back(sorted_c[idx2]);
//            idx2++;
//        }
//    }
//    return sorted_a;
//}
//
//
//int  main()
//{
//    vector <int>a= {5,2,8,1,6,4,7,9};
//    vector <int>ans=merge_sort(a);
//    for(int i=0; i<ans.size(); i++)
//    {
//        cout<<ans[i]<<" ";
//    }
//
//    return  0;
//}



//#include<bits/stdc++.h>
//
//using namespace std;
//
//vector<int>quick_sort(vector <int>&a)
//{
//    if(a.size()<=1)
//    {
//        return a;
//    }
//    int pivot =a.size()-1;
//    vector<int>b,c;
//
//    for(int i=0; i<a.size(); i++)
//    {
//        if(i==pivot)
//        {
//            continue;
//        }
//        if(a[i]<=a[pivot])
//        {
//            b.push_back(a[i]);
//        }
//        else
//        {
//            c.push_back(a[i]);
//        }
//    }
//    vector <int>sorted_b=quick_sort(b);
//    vector <int>sorted_c=quick_sort(c);
//    vector <int >sorted_a;
//    for(int i=0; i<sorted_b.size(); i++)
//    {
//        sorted_a.push_back(sorted_b[i]);
//    }
//    sorted_a.push_back(a[pivot]);
//    for(int i=0; i<sorted_c.size(); i++)
//    {
//        sorted_a.push_back(sorted_c[i]);
//    }
//    return sorted_a;
//}
//int main()
//{
//    vector<int>a= {3,4,2,7,5,9,6};
//    vector<int>sorted_a=quick_sort(a);
//    for(int i=0; i<sorted_a.size(); i++)
//    {
//        cout<<sorted_a[i]<<" ";
//    }
//
//}



//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//
//    vector<int> v(5);
//    v[(v.size() - 1) * v.back()] *= 1;
//    cout << v.back() << '\n';
//    return 0;
//}



//#include <iostream>
//
//using namespace std;
//template <typename T>
//T Sum(T p, T q)
//{
//    return p+q;
//}
//int main ()
//{
//    int x = 55, y = 60, result;
//
//    result = Sum<int>(x, y);
//
//    cout << result << endl;
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//template <typename INT,typename FLOAT>
//FLOAT Sum(INT p, FLOAT q)
//{
//    return p+q;
//}
//int main ()
//{
//    int x = 55;
//    float result,y = 60.55;
//    result = Sum<int,float>(x, y);
//    cout << result << endl;
//    return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    vector<int> v;
//    for (int i = 1;i <= 5;i++)
//        v.push_back(i * i);
//    cout << v[1];
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    vector<int> v;
//    for (int i = 1;i <= 5;i++)
//        v.push_back(i * i);
//    cout << v[1];
//    return 0;
//}
