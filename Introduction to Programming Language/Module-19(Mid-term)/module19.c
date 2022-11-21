#include<stdio.h>

int main()
{
    int n=5;
    int operators[5]= {};
    fgets('operators',sizeof(operators),stdin);

    int a,b;
    scanf("%d%d",&a,&b);


    for(int i=0; i<=5; i++)
    {
        printf("%c",operators[i]);
    }


    return 0;
}
