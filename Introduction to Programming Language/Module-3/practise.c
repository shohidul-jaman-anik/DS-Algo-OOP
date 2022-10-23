#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x,y;
    char per='%';
    scanf("%d%d%c",&x,&y,&per);
    int Habib=x*y;
    printf("%d%c",Habib,per);
    return 0;
}
