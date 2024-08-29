#include <bits/stdc++.h>
using namespace std;

int main() {
         int n;
         cin>>n;
        stack<int>s;
        for(int i=0;i<n;i++)
        {
                int a;
                cin>>a;
          
          s.push(a);

        }
       cout<<s.top()<<" "<<s.size()<<endl;
       s.pop();
       cout<<s.top()<<" "<<s.size()<<endl;
       cout<<s.empty();
       
   
    }
    
    
