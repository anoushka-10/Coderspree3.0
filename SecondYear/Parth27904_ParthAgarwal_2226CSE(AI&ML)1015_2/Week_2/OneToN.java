public class OneToN {
    public static int[] printNos(int x) {
        // Write Your Code Here
        int[] array = new int[x];
        return recur(x,array);
    }

    public static int[] recur(int x, int[]array){
        if(x==0){
            return array;
        }
        int i = x;
        array[i-1]=x;
        return recur(x-1, array);
    }
}