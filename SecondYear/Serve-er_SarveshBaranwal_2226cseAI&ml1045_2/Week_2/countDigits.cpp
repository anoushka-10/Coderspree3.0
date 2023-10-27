int countDigits(int n){
	// Write your code here.
	int count,b,c;
	c=n;
	count=0;
	while(n){
		b=n%10;
		if (b>0){
		if(c%b==0){
        count+=1;
		}
		}
        n=n/10;
		}
	return count;
}