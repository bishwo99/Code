#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> digits(n);
    for( int i = 0; i < n; i++ ) cin >> digits[i];

    for( int i = n - 1; i >= 0 ; i--)
    {
        if(digits[i] > 9) 
        {
            digits[i]++;
            cout<<digits[i] << " ";
        }
    }



}
