class Solution {
    public void sortColors(int[] a) {
        int temp;
        boolean swap;
        do {
         swap = false;
            for (int i=0;i <a.length-1;i++) {
                if (a[i] > a[i+1]) {
                    temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
                    swap = true;
                }
            }
        } while (swap);
    }
}
