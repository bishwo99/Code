class Solution {
public:
    int commonFactors(int a, int b) {
    vector<int>v;
    vector<int>w;
    for( int i = 1; i <= a; i++) 
    {
        if(a % i == 0) v.push_back(i);
    }
    sort(v.begin(),v.end());
     for( int i = 1; i <= b; i++) 
    {
        if(b % i == 0) w.push_back(i);
    }
    sort(w.begin(),w.end());
    int n = w.size();
    vector<int>vis(n);
    vector<int>ans;
    for( int i = 0; i < v.size(); i ++ ){
        for( int j = 0; j < w.size(); j++){
            if(v[i] == w[j] && vis[j]==0){
                ans.push_back(v[i]);
                vis[j] = 1;
                break;
            }
            if(w[j] > v[i]) break;
        }
    }
    return ans.size();
    }
};
