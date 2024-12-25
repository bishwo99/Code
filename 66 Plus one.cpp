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
        }
        else 
            digits[i] = 0;
    }
    digits.push_back(0);
    digits[0] = 1;

   for(int i = 0; i < digits.size(); i++) cout << digits[i] <<" ";
    



}
