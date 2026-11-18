class Solution {
public:
    // time : o(n)
    // space: o(n)
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i = 0;i < nums.size();i++){
            int x = target - nums[i];
            if(mp.find(x) != mp.end() && i!=mp[x]){
                return {mp[x], i};
            }
            mp[nums[i]] = i;
        }
    }
};
