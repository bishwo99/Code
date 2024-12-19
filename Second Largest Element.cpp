#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int arr[n];
     int arr1[n];
     for(int i=0;i<n;i++) cin>>arr[i];

     int FL = arr[0];
     for(int i=0;i<n;i++)
     {
         if(arr[i]>FL)
            FL = arr[i];
     }
    int SL=-1;
    for(int i=0;i<n;i++)
    {
        if( arr[i] > SL && arr[i]<FL )
            SL = arr[i];

    }
    cout<<SL<<"\n";

}
