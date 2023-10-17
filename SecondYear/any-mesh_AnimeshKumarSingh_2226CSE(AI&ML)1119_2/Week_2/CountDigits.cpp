int countDigits(int n){
	// Write your code here.
	int count = 0;	
	int temp = n;
	while(n > 0){
		int rem = n % 10;
		if(rem != 0)
			if(temp % rem == 0)
				count++;
		n /= 10;
	}
	return count;
}
