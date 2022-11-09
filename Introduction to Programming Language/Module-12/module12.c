
//#include<stdio.h>
//
//int main()
//{
//    char name[8]="Md Anik";
//
//    name[7]='H';
//    name[8]='\0';
//    printf("%s",name);
//
//    return 0;
//}





//#include<stdio.h>
//
//int main ()
//{
//    int count=0;
//    char paragraph[1000];
//    fgets(paragraph,sizeof(paragraph),stdin);
//
//    for(int i=0; paragraph[i]!='\0'; i++)
//    {
//        if(paragraph[i]== 'a'||paragraph[i]==  'e'||paragraph[i]== 'i'|| paragraph[i]== 'o'||paragraph[i]==  'u' )
//        {
//            count ++;
//        }
//    }
//
//    printf("%d",count);
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char str[]="Ab";
//    printf("%c",(str[0]+32));
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    char str[] = {'P', 'h', 'i', 't', 'r', 'o','n'};
//    printf("%s", str);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    char str[] = {'P', 'h', 'i', 't', 'r', 'o','n','\0'};
//    printf("%s", str);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char str[]="Programming";
//    int i=0;
//    while (str[i]!='\0')
//    {
//        printf("%c ",str[i]);
//        i+=1;
//    }
//    printf(".");
//    return 0;
//}

//
//#include<stdio.h>
//
//int main ()
//{
//
//    char name[100];
//
//    fgets(name,sizeof(name),stdin);
//
//    for(int i=0; name[i]!='\0'; i++)
//    {
//        if(name[i]>='a'&& name[i]<='z')
//        {
//            name[i]-=32;
//        }
//    }
//
//    puts(name);
//    return 0;
//
//}

//----------------- Way Too Long Words---------------


#include<stdio.h>
#include<string.h>

int main ()
{

    char name[100];

    fgets(name,sizeof(name),stdin);

    int length = strlen(name)-1;

    for(int i=0; i<name; i++)
    {

        if(length>10)
        {
            printf("%c%d%c",name[0],length-2,name[length-1]);
        }
        else
        {
            puts(name);
        }
    }



    return 0;

}





















