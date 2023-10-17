class Solution {
    public List<List<Integer>> generate(int numRows) {
        if(numRows==0)
            return new ArrayList<List<Integer>>();
            List<List<Integer>>result=new ArrayList<List<Integer>>();
                 for(int i=1;i<=numRows;i++){
        List<Integer>tri=new ArrayList<Integer>();
             for(int j=0;j<i;j++){
                 if(j==0 || j==i-1){
                     tri.add(1);
                 }
                 else{
    int sum = result.get(i-2).get(j) + result.get(i-2).get(j-1);
                    tri.add(sum);
                 }
             }  
          result.add(tri);
    }
   return result;
}
}