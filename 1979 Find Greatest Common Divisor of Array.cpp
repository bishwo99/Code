#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int maxx = *max_element(v.begin(),v.end());
    int minn = *min_element(v.begin(),v.end());
    int value;
    while(1)
    {
        value = maxx % minn;
        maxx = minn;
        minn = value;
        if(value == 0){
              cout<<maxx;
              break;
        }


    }

}
