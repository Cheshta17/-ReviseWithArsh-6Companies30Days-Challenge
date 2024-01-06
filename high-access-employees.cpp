class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& acc) {
        unordered_set<string> res;
        sort(acc.begin(),acc.end());
        for(int i=0;i+2<acc.size();i++){
            string n=acc[i][0];
            if(res.count(n)) continue;
            if(acc[i][0]!=acc[i+2][0]) continue;
            if(stoi(acc[i+2][1])-stoi(acc[i][1])<100) res.insert(n);
        }
        return {res.begin(),res.end()};
    }
};
