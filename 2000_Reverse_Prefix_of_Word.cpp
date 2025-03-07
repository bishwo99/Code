#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	char c;
	cin >> s >> c;
	int p = 0;
	for(int i = 0; i < s.size(); i++)
	{
	 if(s[i] == c) {
	 	p = i;
	 	break;
	 }
	}
	reverse(s.begin(),s.begin() + p+1);
	cout << s << endl;	
}