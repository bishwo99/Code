#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin>>n;
       queue<string> s;
       for(int i=0;i<n;i++)
       {
         string a;
         cin>>a;
        s.push(a);
       }
      cout<< s.front();
      cout<<endl;
      cout<< s.back();
      cout<<endl;
      s.pop();
      cout<<s.front();

   
    }
    
    


