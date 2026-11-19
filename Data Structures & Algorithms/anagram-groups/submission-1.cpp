class Solution {
public:
    string convert(vector<int>&a){
        string s = "";
        for(auto it:a)s+=it;
        return s;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>>mp;
        for(int i =0;i < strs.size();i++){
            vector<int>fr(26);
            for(auto it:strs[i]){
                fr[it-'a']++;

            }
            mp[convert(fr)].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto [key, value]:mp){
            ans.push_back(value);
        }
        return ans;
    }
};
