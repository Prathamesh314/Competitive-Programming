class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> count(101,0);
        int n = nums.size();
        for(int i=0;i<n;i++){
            int start = nums[i][0];
            int end = nums[i][1];
            for(int j=start;j<=end;j++){
                if(count[j]==0){
                    count[j] = 1;
                }
            }
        }
        int ans = 0;
        for(int i=0;i<=100;i++){
            if(count[i]==1){
                ans++;
            }
        }
        
        return ans;
    }
};
