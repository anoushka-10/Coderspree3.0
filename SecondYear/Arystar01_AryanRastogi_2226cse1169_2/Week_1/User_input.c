#include<stdio.h>

int main()
{
    char letter;
    int code;
    printf("Enter character: ");
    scanf("%s",&letter);
    code=letter;
    if(code>=65 && code<=90)
    {
        printf("1");
    }
    else if(code>=97 && code<=122)
    {
        printf("-1");
    }
    else{
        printf("0");
    }
    return 0;
}