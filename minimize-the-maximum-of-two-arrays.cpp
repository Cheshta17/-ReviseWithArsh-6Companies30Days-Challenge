class Solution {
public:
    int minimizeSet(int d1, int d2, int unq1, int unq2) {
        int l=1,h=INT_MAX;
        int res=INT_MAX;
        long long int lcm=((long long)d1*d2)/__gcd(d1,d2);
        while(l<=h){
            int m=l+(h-l)/2;
            int nd1=m-m/d1;
            int nd2=m-m/d2;
            int nboth=m-m/lcm;
            if(nd1>=unq1 && nd2>=unq2 && nboth>=(unq1+unq2)){
                res=m;
                h=m-1;
            }
            else l=m+1;
        }
        return res;
    }
};