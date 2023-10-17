public class WithoutLoop {

        public static int[] printNos(int x) {
            // Write Your Code Here
            int[] arr = new int[x];
            return recur(x, arr);
        }
        public static int[] recur(int x, int[] a)
        {
            if (x == 0)
                return a;
            a[x-1]=x;
            return recur(x-1, a);
        }
}
