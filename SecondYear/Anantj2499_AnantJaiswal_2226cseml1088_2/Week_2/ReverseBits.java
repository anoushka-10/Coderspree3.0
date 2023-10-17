
    public class ReverseBits {
        public static long reverseBits(long n) {
            // Write your code here
            long[] arr = new long[32];
            long temp =n;
            int count = 0;
            while(temp>0){
                arr[count++]= temp%2;
                temp/=2;
            }
            for(int i =count; i<arr.length; i++){
                arr[i]=0;
            }
            temp =0;
            long index =1;
            for(int i=31;i>=0;i--){
                temp+=arr[i]*index;
                index*=2;
            }
            return temp;
        }
    }
