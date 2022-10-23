#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int A,B;
    scanf("%d%d",&A,&B);

    if(A>B){
            int different = A - B;
            printf("%d",different );
    }
    else if(B > A){
         int different = B - A;
         printf("%d",different );
    }
    else if(A==B){
         int different = A - B;
         printf("%d",different );
    }
    return 0;
}
