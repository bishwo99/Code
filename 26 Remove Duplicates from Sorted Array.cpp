#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
  int k=0;
  for(int i=1;i<arr.size();i++)
  {
      if(arr[i]!=arr[k])
      {
           k++;
          arr[k] = arr[i];
        
      }

  }

    for(int i=0;i<(k+1);i++)
    {
        cout<<arr[i]<<" ";
    }

}
