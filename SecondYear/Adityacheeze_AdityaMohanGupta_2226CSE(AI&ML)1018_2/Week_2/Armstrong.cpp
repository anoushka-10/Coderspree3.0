bool checkArmstrong(int n){
	//Write your code here
	int count = 0;
	int temp = n;
	while(temp != 0){
		temp = temp / 10;
		count++;
	}
	temp = n;
	int sum = 0;
	while(temp != 0){
		int digit = temp % 10;
		sum = sum + pow(digit,count);
		temp = temp /10;
	}
	if(sum == n){
		return true;
	}
	return false;
}
