class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0, sz = 0;
        for(int i = 0;i < nums.size();i++){
            sz+=(nums[i]);
            mx = max(mx, sz);
            if(!nums[i])
                sz=0;
        }
        return mx;
    }
};