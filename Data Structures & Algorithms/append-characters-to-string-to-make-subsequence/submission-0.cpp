class Solution {
public:
    int rec(int i, int j, string &s, string &t){
        if(i == s.size() or j == t.size())
            return t.size() - j;
        if(t[j] == s[i])
            return rec(i + 1, j + 1, s, t);
        else
            return rec(i + 1, j, s, t);
    }
    int appendCharacters(string s, string t) {
        return rec(0, 0, s, t);
    }
};