#include<bits/stdc++.h>

using namespace std;

class Rectangle
{
public:

    int height,width;

    int calculate_are()
    {
        return height*width;
    }

    int calculate_perimeter()
    {
        return 2*(height+width);
    }

};
int main()
{
    Rectangle r1;

    r1.height=4;
    r1.width=6;

    cout<<r1.calculate_are()<<"\n";
    cout<<r1.calculate_perimeter()<<"\n";

    return 0;
}




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

