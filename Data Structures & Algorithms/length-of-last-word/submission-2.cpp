class Solution {
public:
    int lengthOfLastWord(string s) {
        int sz = 0, ans = 0;
        for(auto it:s){
            if(it!=' '){
                sz++;
                ans = sz;
            }
            else
                sz=0;
            
        }
        return ans;
    }
};