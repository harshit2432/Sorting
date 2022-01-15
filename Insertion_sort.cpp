#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int key;
    for(i=1;i<n;i++)
    { 
        key=arr[i]; 
        j=i-1; 

        while(j>=0 && arr[j]>key)
        { 
            arr[j+1]=arr[j]; 
            j=j-1; 
        } 
        arr[j+1]=key; 
    } 
    
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
