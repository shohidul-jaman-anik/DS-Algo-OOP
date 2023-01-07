#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c ;
    int maxi = max({ a,b,c});
    int mini =min({a,b,c});
    int sum=a+b+c;
    int mul=a*b*c;
    cout << maxi << '\n';
    cout << mini << '\n';
    cout << sum << '\n';
    cout << mul << '\n';

    return 0;
}



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
