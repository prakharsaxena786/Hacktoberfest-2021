
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int> ans(2 ,0);
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(target == (nums[i] + nums[j])){
                        ans[0]=i;
                        ans[1]=j;
                        break;
                        
                    }
                    
                }
            }
        return ans;
        
    }
};
