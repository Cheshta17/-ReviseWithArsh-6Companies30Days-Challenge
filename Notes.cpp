class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int t) {
        vector<int> curr;
        backtrack(1,t,curr,k);
        return res;
    }
        vector<vector<int>> res;
    void backtrack(int i,int t,vector<int>& curr,int k){
        if(t==0 && k==0){
            res.push_back(curr);return;
        }
        if(t<0 || k<0) return;
        if(i==10) return;
        backtrack(i+1,t,curr,k);
        curr.push_back(i);
        backtrack(i+1,t-i,curr,k-1);
        curr.pop_back();
    }
};