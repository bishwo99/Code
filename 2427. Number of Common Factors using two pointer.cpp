class Solution {
public:
    int commonFactors(int a, int b) {
   vector<int> v;
    for(int i = 1; i <= a; i++) {
        if( a%i == 0 ) {
        v.push_back(i);
        }
    }
    
    vector<int> w;
      for(int i = 1; i <= b; i++) {
        if( b%i == 0 ) {
        w.push_back(i);
        }
    }


    int i = 0; 
    int j = 0; 
    vector<int> ans;
    while( i < v.size() && j < w.size() )
    {
        if(v[i] < w[j]) i++;
        else if(v[i] > w[j]) j++;
        else{
            ans.push_back(v[i]);
            i++;
            j++;
        }
    }
    return ans.size();
    }
};
