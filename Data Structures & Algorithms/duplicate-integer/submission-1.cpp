class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool>fr;
        for(auto it:nums){
            if(fr.find(it)!=fr.end()){
                return true;
            }
            fr[it]=1;
        }
        return false;
    }
};