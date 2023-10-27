int countDigits(int n){
	int k = n;
	int c=0;
	while(k>0){
		int rem = k%10;
		if(rem!=0 && n%rem==0){
			c++;
		}
		k/=10;
	}	
	return c;
}