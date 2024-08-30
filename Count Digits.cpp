#include <bits/stdc++.h>
using namespace std;

int main() {
             int n,rem;
             cin>>n;
             int temp=n;
             vector<int>v;
             while(temp)
             {
                rem=temp%10;
                temp=temp/10;
                v.push_back(rem);      
             }
           int cnt=0;
            for(int i=0;i<v.size();i++)
            {
                //cout<<v[i]<<" ";
                 if(v[i]==0) continue;
                else if(n%v[i]==0) cnt++;        
            }
            cout<<cnt<<endl;
          
    }
    
    


