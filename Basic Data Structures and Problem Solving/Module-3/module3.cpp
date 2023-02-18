//#include<bits/stdc++.h>
//
//using namespace std;
//
//class Rectangle
//{
//public:
//
//    int height,width;
//
//    int calculate_are()
//    {
//        return height*width;
//    }
//
//    int calculate_perimeter()
//    {
//        return 2*(height+width);
//    }
//
//};
//int main()
//{
//    Rectangle r1;
//
//    r1.height=4;
//    r1.width=6;
//
//    cout<<r1.calculate_are()<<"\n";
//    cout<<r1.calculate_perimeter()<<"\n";
//
//    return 0;
//}




//#include<bits/stdc++.h>
//
//using namespace std;
//
//class Student
//{
//public:
//    string name;
//    string father_name;
//    int id;
//    int age;
//
//    void print_info()
//    {
//        cout<<name<<" "<<father_name<<" "<<id<<" "<<age<<"\n";
//    }
//
//};
//int main()
//{
//    Student a;
//    a.name="Anik";
//    a.father_name="Bacchu";
//    a.id=18925;
//    a.age=22;
//
//    Student b;
//    b.name="Hello world";
//    b.age=900000;
//
//    a.print_info();
//    b.print_info();
//    return 0;
//}



//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool hasMultipleOccurrences(vector<int>& arr, int k) {
//    int left = 0, right = arr.size() - 1;
//    while (left < right) {
//        int mid = (left + right) / 2;
//        if (arr[mid] < k) {
//            left = mid + 1;
//        } else {
//            right = mid;
//        }
//    }
//    return (arr[right] == k && right < arr.size() - 1 && arr[right + 1] == k);
//}
//
//int main() {
//    // taking input array
//    int n, k;
//    cin >> n;
//    vector<int> arr(n);
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    // taking input k
//    cin >> k;
//
//    // checking if k has multiple occurrences
//    bool hasMultiple = hasMultipleOccurrences(arr, k);
//
//    // printing the result
//    if (hasMultiple) {
//        cout << "YES" << endl;
//    } else {
//        cout << "NO" << endl;
//    }
//
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    string s = "291";
//    cout << (s[0] - '0') * 2;
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(1);
    dq.push_back(2);
    dq.push_front(9);
    dq.push_back(4);
    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}
