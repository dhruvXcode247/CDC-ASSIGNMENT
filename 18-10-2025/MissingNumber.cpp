class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),res;
        sort(nums.begin(),nums.end());
        for (int i=0;i<n;i++) {
            if (nums[i]!=i) {
                res=i;
                break;
            }
            else {
                res=n;
            }
        }
        return res;
    }
};