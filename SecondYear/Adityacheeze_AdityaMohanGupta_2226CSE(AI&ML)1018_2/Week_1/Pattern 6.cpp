class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int index=1;
        for(int i=n;i>0;i--){
            
            for(int j = i ; j > 1 ; j--){
                cout<<' ';
            }
            for(int j=0 ; j<index ; j++){
                cout<<'*';
            }
            cout<<endl;
            index=index+2;
        }
    }
};