public class CheckPrime {
        public static String isPrime(int num) {
            //Your code goes here
            int flag =0;
            for (int i =2; i<=Math.sqrt(num);i++){
                if(num%i==0){
                    flag=1;
                    break;
                }
            }
            if(flag==1||num==1){
                return "NO";
            }
            else
            {
                return "YES";
            }
        }
}
