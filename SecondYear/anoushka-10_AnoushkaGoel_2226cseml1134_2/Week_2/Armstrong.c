#include<stdio.h>
#include<math.h>
int main(){

	int n;
	scanf("%d",&n);
	int num=n;
	int no=n;
	int count=0;
	while(n>0){
		n=n/10;
		count++;
	}
	int dig[count];
	int i=0;
	while(num>0){
       dig[i]=num%10;
		num=num/10;
		i++;
	}
	int sum=0;
	for(int j=i-1;j>=0;j--){
		sum+=pow(dig[j],count);

	}
	if(sum==no){
		printf("true");
	}
	else{
		printf("false");
	}

return 0;
}