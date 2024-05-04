class Solution {
public:
    int minimumSum(int n, int k) {
        
        int sum = 0;
        if(n<k/2){
            return (n*(n+1)/2);
        }
        for(int i=0;i<k/2;i++){
            sum+=i+1;
        }
        int rem = n-k/2;
        
        for(int i=0;i<rem;i++){
            sum+=k;
           k++;
        }
        return sum;
    }
};
