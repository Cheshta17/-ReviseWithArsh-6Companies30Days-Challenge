string encode(string src){
    int n=src.size();
    string res="";
    for(int i=0;i<n;i++){
        int count=1;
        while(i<n-1 && src[i]==src[i+1]){
            count++;
            i++;
        }
            res+=src[i];
           res+=to_string(count);
        }
        return res;
}         