#include<stdio.h>

int main()
{

    int x,y,z;
    printf("Please enter three value:  ");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z){
        printf("X is biggest than y ‍and z");
    }else if(y>x&&y>z){
    printf("Y is biggest  than X and z");
    }else{
    printf("Z is biggest");
    }


    return 0;
}
