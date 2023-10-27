bool palindrome(int n){  
	// Write your code here.
	int temp = n;
    int rev_num = 0;

	while(temp != 0){
		int digit = temp % 10;
		temp = temp / 10;
        rev_num = rev_num * 10 + digit;
	}	
    if(rev_num == n){
        return true;
    }
	return false;

}