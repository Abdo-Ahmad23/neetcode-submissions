class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>fr(26);
        for(auto it:s)
            fr[it-'a']++;
        for(auto it:t)
            fr[it-'a']--;
        
        for(int i = 0;i <26;i++)
            if(fr[i]!=0)
                return false;
        return true;
    }
};
