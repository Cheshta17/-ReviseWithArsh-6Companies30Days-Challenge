class Solution{   
public:
    string printMinNumberForPattern(string s){
        int n=s.size();
        int count=1;
        string res(n+1,' ');
        for(int i=0;i<=n;i++){
            if(i==n || s[i]=='I'){
                for(int j=i-1;j>=-1;j--){
                    res[j+1]=char(count+'0');
                    count++;
                    if(s[j]=='I' && j>=0){
                        break;
                    }
                }
            }
        }
        return res;
    }
};