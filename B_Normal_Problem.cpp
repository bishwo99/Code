#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		string s;
	cin >> s;
	for(char &c : s)
	{
		if(c == 'p') c = 'q';
		else if(c == 'q') c = 'p';
	}

	reverse(s.begin(),s.end());
	
	cout << s << endl;
	}
	
}
