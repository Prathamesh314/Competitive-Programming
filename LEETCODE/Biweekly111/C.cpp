class Solution {
public:
    int recurse(int i, int prev, vector<int>& nums) {
        if (i >= nums.size()) return 0;
        
        if (nums[i] == prev) {
            return recurse(i+1, prev, nums);
        }
        
        else if (nums[i] < prev) {
            int a = INT_MAX;
            
            for (int j = prev; j < 4; j++) {
                a = min(recurse(i+1, j, nums) + 1, a);
            }
            
            return a;
        }
        
        else {
            int a = recurse(i+1, nums[i], nums);
            
            for (int j = prev; j < 4; j++) {
                if (j == nums[i]) continue;
                a = min(recurse(i+1, j, nums) + 1, a);
            }
            return a;
        }
        
    }
    
    int minimumOperations(vector<int>& nums) {
        return recurse(0, 1, nums);
    }
};
