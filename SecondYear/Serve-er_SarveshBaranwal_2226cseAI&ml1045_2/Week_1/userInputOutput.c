#include<stdio.h>

int main(){

    // Write your code here.
    int b=1,c=0,k;
	char  ch;
    k=-1;
	scanf("%c",&ch);
	if (ch>='A' && ch<='Z'){
		printf("%d",b);
	}
	else if(ch>='a' && ch<='z'){
		printf("%d",c);
	}
	else{
		printf("%d",k);
	}

    return 0;
}
