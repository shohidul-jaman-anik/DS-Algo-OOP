#include<stdio.h>

int main()
{
    char name[8]="Md Anik";

    name[7]='H';
    name[8]='\0';
    printf("%s",name);

    return 0;
}
