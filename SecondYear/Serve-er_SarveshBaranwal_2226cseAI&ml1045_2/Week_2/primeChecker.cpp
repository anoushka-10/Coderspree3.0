bool isPrime(int n)
{
	// Write your code here.
	int flag=0,i;
	if(n<=1){
		return false;
	}
	for(i=2;i*i<n;i++){
		if(n%i==0){
			flag=1;
			break;
		
		}
		else{
			flag=0;
		}
	}
	if(flag==1){
		return false;
	}
	else{
		return true;
	}
	
}