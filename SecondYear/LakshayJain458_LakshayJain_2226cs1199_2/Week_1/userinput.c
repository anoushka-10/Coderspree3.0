#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
      printf("%d",1);
    }
    else if(ch>='a'&& ch<='z')
    {
        printf("%d",0);
    }
    else{
        printf("%d",-1);
    }

}