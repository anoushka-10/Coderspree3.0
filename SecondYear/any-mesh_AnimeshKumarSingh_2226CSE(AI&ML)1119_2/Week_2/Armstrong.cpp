bool checkArmstrong(int n){
	//Write your code here
	int k = 0;
	int temp = n;
	while(temp){
		temp = temp << 1;
		k++;
	}
	temp = n;
	int arm = 0;
	while(temp){
		int rem = temp % 10;
		arm += pow(rem, k);
		temp /= 10;
	}
	return (arm == n);
}
