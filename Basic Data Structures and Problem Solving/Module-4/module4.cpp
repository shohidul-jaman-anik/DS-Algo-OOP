#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        string ans="No\n";
        for(int j=0; j<n; j++)
        {
            if(i==j)
                continue;
            if(a[i]==a[j])
            {
                ans="Yes\n";
            }
        }
        cout <<"i= "<<i<<" "<<ans;
    }

    return 0;
}



//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    vector <int>a(n);
//    for(int i=0; i<n; i++)
//    {
//        cin>>a[i];
//    }
//    int maxi = a[0];
//    int mini =a[0];
//    int sum=0;
//
//    for(int i=0; i<n; i++)
//    {
//        maxi = max(maxi,a[i]);
//        mini =min(mini,a[i]);
//        sum=sum+a[i];
//    }
//
//    cout << maxi << '\n';
//    cout << mini << '\n';
//    cout << sum << '\n';
//
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    vector<int> v(5, 2);
//    for (int i = 0;i < 5 - 2;i++)
//        v[i] = i;
//    for (int i = 0;i < 5;i++)
//        cout << v[i] << " ";
//    return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    vector<int> v(5,0);
//    v[1] = 5;
//    cout << v.front() << '\n';
//    return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    vector<int> v(5, 0);
//    v.resize(10, 10);
//    cout << v[7] << '\n';
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int a, b, c;
//    cin >> a >> b >> c ;
//    int maxi = max({ a,b,c});
//    int mini =min({a,b,c});
//    int sum=a+b+c;
//    int mul=a*b*c;
//    cout << maxi << '\n';
//    cout << mini << '\n';
//    cout << sum << '\n';
//    cout << mul << '\n';
//
//    return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int a, b, c, d, e, maxi;
//    cin >> a >> b >> c >> d >> e;
//    maxi = max({ a,b,c,d,e });
//    cout << maxi << '\n';
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> v(n);
//    for (int i = 0;i < n;i++)
//        cin >> v[i];
//    int ans = 1;
//    for (int i = 0;i < n;i++)
//        ans *= v[i];
//
//    cout << ans << '\n';
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int a, b, c, d, e, maxi;
//    cin >> a >> b >> c >> d >> e;
//    maxi = max({ a,b,c,d,e });
//    cout << maxi << '\n';
//    return 0;
//}
