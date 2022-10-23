#include <stdio.h>
int main()
{
    int n,multliplication;
    printf("Enter one  input: ");
    scanf("%d",&n);
    for(int i=1; i<=10; i++)
    {
       multliplication=n*i;
       printf(" %d * %d = %d\n", n,i,multliplication);
    }
    return 0;
}
