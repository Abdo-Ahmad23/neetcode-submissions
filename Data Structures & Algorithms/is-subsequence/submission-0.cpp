class Solution {
public:

    bool rec(int i, int j, string &s, string &t){
        if(i == s.size())
            return true;
        if(j == t.size())
            return false;
        
        if(s[i] == t[j])
            return rec(i + 1, j + 1, s, t);
        else
            return rec(i, j + 1, s, t);

    }
    bool isSubsequence(string s, string t) {
        return rec(0, 0, s, t);
    }
};