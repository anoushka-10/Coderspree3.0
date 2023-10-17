#include<stdio.h>

int main(){
	int n,m,num,dig,count=0;
    
	scanf("%d",&num);
	n=num;
    m=num;
	int i=0;
    while(m>0){
		m=m/10;
        count++;
}
int a[count];
	while(n>0){
		dig=n%10;
		n=n/10;
		a[i]=dig;
		i++;
	}
     count=0;
	 while(i--){
	if(num%a[i]==0){
      count++;
	}
	 }
	printf("%d",count);

	return 0;
}