#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int size,int key)
{
    int begin = 0;
    int end = size-1;
    int mid = begin + ((end - begin)/2);
    while(begin<=end)
    {
        if(arr[mid]==key)
        {
             return mid;
        }
        if( key > arr[mid] )
        {
            begin = mid + 1;
        }
     else
        {
            end = mid-1;
        }
        mid= begin + ((end - begin)/2);
    }
    return -1;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
   cout<<"Answer is: "<< BinarySearch(arr,n,k);
  

}
