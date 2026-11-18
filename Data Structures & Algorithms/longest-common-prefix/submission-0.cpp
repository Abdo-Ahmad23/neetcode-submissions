class Solution {
public:
    bool check(vector<string>&s, int &j){
        for(int i = 0;i <s.size();i++){
            if(s[i].size() <= j)
                return false;
            if(s[i][j]!=s[0][j])
                return false;
        }
        return true;
        
    }
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0, sz=0;
        while(1){
            if(check(strs, i))
                i++, sz=i;
            else
                break;
        }
        return strs[0].substr(0, sz);
    }
};