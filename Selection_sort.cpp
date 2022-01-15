#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
     
    int i,j,min_idx;
    
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++) 
    { 
        min_idx=i; 
        for(j=i+1;j<n;j++)
        { 
            if(arr[j]<arr[min_idx]) 
                min_idx=j;
        }  
        swap(arr[min_idx],arr[i]); 
    } 

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
