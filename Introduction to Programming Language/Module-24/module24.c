#include<stdio.h>
#include<math.h>

int  global=7;
void add_two_sum  ()
{
    int a,b;
    int global=13;
    scanf("%d%d",&a,&b);
    int sum=a+b;
    printf("%d\n",sum);
    printf("%d\n",global);
    return 0;
}

int main()
{
    add_two_sum();
    printf("%d\n",global);

    return 0;
}














//#include<stdio.h>
//
//int  take_radius()
//{
//    printf("Please Enter the radius of a circle: ");
//    scanf("%d",&r);
//    return r;
//}
//int main ()
//{
//    int r;
//    r=take_radius();
//
//    float area=3.14159*r*r ;
//    printf("Area of the circle is %d\n",area);
//
//    return 0;
//}
