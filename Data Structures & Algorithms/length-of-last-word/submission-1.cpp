class Solution {
public:
    int lengthOfLastWord(string s) {
        int sz = 0, mx = 0;
        for(auto it:s){
            if(it!=' '){
                sz++;
                mx = sz;
            }
            else
                sz=0;
            
        }
        return mx;
    }
};