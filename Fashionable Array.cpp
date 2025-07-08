#include<bits/stdc++.h>
using namespace std;
int main()
{  
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());
        int cnt = 0,cnt1 = 0;
        for(int i = 0; i < n; i++) {
            if((v[i] + v[n-1]) % 2 == 0)
                break;
            else
                cnt++;
        }
        for(int i = n - 1; i >= 0; i--){
            if((v[i] + v[0]) %2 == 0) break;
            else
                cnt1++;
        }

        cout << min(cnt,cnt1) << endl;
    }
}
