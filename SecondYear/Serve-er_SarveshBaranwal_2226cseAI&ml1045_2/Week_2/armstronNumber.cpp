#include<Math.h>

bool checkArmstrong(int n){
	//Write your code here
	int length=0,temp=n;
	while(temp){
		temp=temp/10;
		length++;
	}
	int sum=0,d;
	temp=n;
    while(temp){
		d=temp%10;
		sum+=pow(d,length);
		temp=temp/10;
	}
	if(sum==n){
		return true;
	}
	else{
		return false;
	}

}
