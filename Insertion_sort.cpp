#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>arr , int n){

      for(int i=0;i<=n-1;i++){
            int didSwap=0;
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int tmp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = tmp;
            j--;
            cout<<"Run\n";
           didSwap=1;
        }
        if(didSwap=0) break;
      }

      for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<" ";

      }



}

 int main()
 {
     int n;
     cin>>n;
     vector<int>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     insertion_sort(v,n);



 }
