class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int mx = arr.back();
        vector<int>ans;
        for(int i = arr.size() - 2;i>=0;i--){
            ans.push_back(mx);
            mx = max(mx, arr[i]);
        }
        reverse(ans.begin(), ans.end());
        ans.push_back(-1);
        return ans;
    }
};